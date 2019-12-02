#include <Streaming.h>
#include <XBee.h>
//#include <Dyno.h>
#include <OGraph_DFR.h>
#include <OAgent_DFR.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 3

long capacity_max = 5000;  //DER capacity_max limit
long capacity_min = 0;  //DER capacity_min limit
long iP_nom = (capacity_max + capacity_min)*0.5;  //DER capacity_min limit
long capacity_dev;  //DER capacity_min limit

long P_nom;  //nominal power output of DER

long base = 1000;  // use base to increase precision of results
long base_sHIL = 1e5; // used when sending value to Typhoon HIL
int base_rHIL = 10; // used when receiving value from Typhoon HIL

XBee xbee = XBee();
ZBRxResponse rx = ZBRxResponse();

// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x4151C692,0,iP_nom*base,-2.1667*base,0.1667*base,2,base,3);  //#NODE
OGraph_DFR g = OGraph_DFR(&s);
OAgent_DFR a = OAgent_DFR(&xbee,&rx,&g,false,true); // argument rx?  //#NODE

uint8_t errorPin = 6;  // error led pin
uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check
boolean de = false;

long n;
float regulation;

//Modbus Communication
MgsModbus Mb; 
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xB3 }; //#NODE
IPAddress ip(192, 168, 2, 3); // What are these addresses //#NODE
IPAddress gateway(192, 168, 2, 20);
IPAddress subnet(255, 255,255, 0);

uint16_t regD_high;
uint16_t regD_low;
uint8_t Ref_high;
uint8_t Ref_low;
uint8_t Count_high;
uint8_t Count_low;
uint8_t Pos_high;
uint8_t Pos_low;
int fc;
int ref;
int count;
int pos;
float regD = 0;
int sign;

void setup()  {
  Serial.begin(38400);
  Serial3.begin(38400);
  pinMode(cPin, OUTPUT);
  pinMode(sPin, OUTPUT);
  digitalWrite(cPin,HIGH);
  digitalWrite(sPin,HIGH);
  
  xbee.setSerial(Serial3); //Specify the serial port for xbee
//Define the Neighboring nodes                                //#NODE
  g.addInNeighbor(0x4174F1AA); // node 1
  g.addInNeighbor(0x4174F186); // node 2
  //g.addInNeighbor(0x4151C692); // node 3
  //g.addInNeighbor(0x4151C48B); // node 4
  //g.addInNeighbor(0x4151C688); // node 5
  //g.addInNeighbor(0x4151C6AB); // node 6
  //g.addInNeighbor(0x4151C6CB); // node 7
  //g.addInNeighbor(0x4151C6AC); // node 8
  //g.addInNeighbor(0x415786E1); // node 9
  //g.addInNeighbor(0x415786D3); // node 10
  //g.addInNeighbor(0x415DB670); // node 11
  //g.addInNeighbor(0x415786A9); // node 12
  //g.addInNeighbor(0x4157847B); // node 13
  //g.addInNeighbor(0x415DB664); // node 14
  //g.addInNeighbor(0x415DB673); // node 15
  //g.addInNeighbor(0x415DB684); // node 19
  //g.addInNeighbor(0x41516F0B); // node 20
  
  digitalWrite(cPin,LOW);
  digitalWrite(sPin,LOW);
  
 // initialize the ethernet device
  Ethernet.begin(mac, ip, gateway, subnet);   // start etehrnet interface
  for (int i=0;i<12;i++) {
     Mb.MbData[i] = 0;
  }
}


void loop() 
{
  if(de == false) 
  {
    if(!(a.isLeader()))
    {
      Serial.println("Still trying to sync");
      if(a.sync()) 
      {
        Serial.println("Communication Link established");
        Serial.println("c");
        digitalWrite(sPin,HIGH);
        de = true;
      }
      else
      {
        de  = false; //means could not sync 
      }
    }
    if (a.isLeader())
    {
      Serial.println("Send letter s(r) to sync(resync)"); //let computer know you want to sync
      while (Serial.available() == 0) 
      { 
        //simply makes the arduino wait until commputer sends signal        
      }
      if(Serial.available()) 
      {
        Serial.println("got some letter");
        uint8_t b = Serial.read(); //enter the character 's'
        Serial.println(b);
        if (b == 'r')
          {
            a.setLeader(0);
          }
        if ((b == 's')||(b == 'r'))
        {
          Serial.println("got the s and about to sync");
          de = true;
          if(a.sync()) {
            Serial.println("Communication Link established");
            Serial.println("c");
            digitalWrite(sPin,HIGH);
            a.setLeader(0);
          }
          else
          {
            de  = false; //means could not sync 
          } 
        }
      }
    }
  }

  
  else 
  {
    if(a.isSynced())
    {
      Serial.println("To send regulation signal, enter 'i'");
      Serial.read();
      while(Serial.available()==0)
      {
        receiveTyphoonData();
        P_nom = (((Mb.MbData[0]<<16)&0xFFFFFFFFFFFFFFFF) | (Mb.MbData[1]&0xFFFFFFFFFFFFFFFF));
        sign = (-2*Mb.MbData[2])+1;
        P_nom = P_nom*sign/base_rHIL;
        if (P_nom==0)
          P_nom = iP_nom;
          
        if (regulation<0)
          capacity_dev = P_nom - capacity_min;
        else
          capacity_dev = capacity_max - P_nom;
        
        if (a.fairSplitRatioConsensus_RSL(0,capacity_dev*base,8,160)!=-1)
        {
          regD = a.getbufferdata(0);
          //Serial.println(regD);
          if(regD > 1)
             regD = 1;
          else if (regD < -1)
             regD = -1;
  
          n = regD*base_sHIL;
          regD_high = (abs(n) >> 16) & 0x0000FFFF;
          regD_low = abs(n) & 0x0000FFFF;
                    
          if (n<0)
          {
            Mb.MbData[0]=1;
          }
          else
          {
            Mb.MbData[0]=0;
          }
          Mb.MbData[1] =  regD_high;
          Mb.MbData[2] = regD_low;
          
          sendConsensusResults();
          
          Serial.read();
        }
        a.resync();
      }

      if(Serial.available())
      {
        //Serial.println("Serial is available");
        uint8_t b = Serial.read();
        if (b == 'i')
        {
          a.setLeader(1);
          Serial.println("Initiated! Send regulation signal");
          Serial.read();
          while (Serial.available() == 0) 
            { 
              //simply makes the arduino wait until regulation signal is sent
            }
          Serial.println("Received! ");
          regulation = Serial.parseFloat();
          //Serial.println(regulation);
          receiveTyphoonData();
          P_nom = (((Mb.MbData[0]<<16)&0xFFFFFFFFFFFFFFFF) | (Mb.MbData[1]&0xFFFFFFFFFFFFFFFF));
          sign = (-2*Mb.MbData[2])+1;
          P_nom = P_nom*sign/base_rHIL;
          if (P_nom==0)
            P_nom = iP_nom;
            
          if (regulation<0)
            capacity_dev = P_nom - capacity_min;
          else
            capacity_dev = capacity_max - P_nom;
          
          a.fairSplitRatioConsensus_RSL(base*regulation,capacity_dev*base,8,160);
          regD = a.getbufferdata(0);          
          //Serial.println(regD);
          
          if(regD > 1)
             regD = 1;
          else if (regD < -1)
             regD = -1;
  
          n = regD*base_sHIL;
          regD_high = (abs(n) >> 16) & 0x0000FFFF;
          regD_low = abs(n) & 0x0000FFFF;
                    
          if (n<0)
          {
            Mb.MbData[0]=1;
          }
          else
          {
            Mb.MbData[0]=0;
          }
          Mb.MbData[1] =  regD_high;
          Mb.MbData[2] = regD_low;
          
          sendConsensusResults();
            
          a.setLeader(0);
        }
        a.resync();
      }
    }
  }
}

void sendConsensusResults()
{
  //VARIABLES NOT BEING USED////////////////////////////////////
  fc = 16;                                 //function code to write to multiple registers
  ref = 0;                                 //starting address of register at server end (Typhoon) which we are writing to in this case
  Ref_high = uint8_t(ref >> 8 && 0x00FF);
  Ref_low = uint8_t(ref & 0x0FF);
  count = 2;                              //in this case we want to write to 2 registers on the server(typhoon)
  Count_high = uint8_t(count >> 8 && 0x00FF);
  Count_low = uint8_t(count & 0x0FF);
  pos = 0;                              //position of the registers on the client(arduino) we want to read
  Pos_high = uint8_t(pos >> 8 && 0x00FF);
  Pos_low = uint8_t(pos & 0x0FF); 
  //Mb.Build(fc,Ref_high,Ref_low,Count_high,Count_low,Pos_high,Pos_low);
  //Serial.println("Sent Request Packet");
  ////////////////////////////////////////////////////////////////
  int node3_ip = 63; //part of ip address for node 3 on the HIL side  //#NODE
  Mb.Req(MB_FC_WRITE_MULTIPLE_REGISTERS,0,3,0,node3_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos - arduino, int nodeip) //#NODE
  Mb.MbmRun();
  //SerialUSB.println("Sent Stuff to typhoon");
}

void receiveTyphoonData()
{
  int node3_ip = 63; //part of ip address for node 3 on the HIL side
  Mb.Req(MB_FC_READ_INPUT_REGISTER,0,3,0,node3_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos -arduino, int nodeip) //#NODE
  Mb.MbmRun();
}
