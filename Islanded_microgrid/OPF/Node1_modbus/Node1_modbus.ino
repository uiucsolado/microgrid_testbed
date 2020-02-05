#include <Streaming.h>
#include <XBee.h>
//#include <Dyno.h>
#include <OGraph_OPF.h>
#include <OAgent_OPF.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 1
XBee xbee = XBee();
ZBRxResponse rx = ZBRxResponse();

// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x4174F1AA,1,0,1,1,1,1,10);  //#NODE
LinkedList l = LinkedList();  //#NODE
OGraph_OPF g = OGraph_OPF(&s,&l);
OAgent_OPF a = OAgent_OPF(&xbee,&rx,&g,true,true); // argument rx?

uint8_t errorPin = 6;  // error led pin
uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check and link activation
boolean de = false;
boolean le = false;

//Modbus Communication
MgsModbus Mb; 
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xB1 }; //#NODE
IPAddress ip(192, 168, 2, 1); // What are these addresses //#NODE
IPAddress gateway(192, 168, 2, 20);
IPAddress subnet(255, 255,255, 0);

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
long t;
float D;
bool feasible;

void setup()  {
  Serial.begin(38400);
  Serial3.begin(38400);
  pinMode(cPin, OUTPUT);
  pinMode(sPin, OUTPUT);
  digitalWrite(cPin,HIGH);
  digitalWrite(sPin,HIGH);
  
  xbee.setSerial(Serial3); //Specify the serial port for xbee
//Define the Neighboring nodes
  //g.addInNeighbor(0x4174F1AA,1,0,0); // node 1
  //g.addInNeighbor(0x4174F186,2,0,0); // node 2
  //g.addInNeighbor(0x4151C692,3,0,0); // node 3
  g.addInNeighbor(0x4151C48B,4,0.05,0.07); // node 4
  g.addInNeighbor(0x4151C688,5,0.04,0.06); // node 5
  //g.addInNeighbor(0x4151C6AB,6,0,0); // node 6
  //g.addInNeighbor(0x4151C6CB,7,0,0); // node 7
  //g.addInNeighbor(0x4151C6AC,8,0,0); // node 8
  //g.addInNeighbor(0x415786E1,9,0,0); // node 9
  //g.addInNeighbor(0x415786D3,10,0,0); // node 10
  //g.addInNeighbor(0x415DB670,11,0,0); // node 11
  //g.addInNeighbor(0x415786A9,12,0,0); // node 12
  //g.addInNeighbor(0x4157847B,13,0,0); // node 13
  //g.addInNeighbor(0x415DB664,14,0,0); // node 14
  //g.addInNeighbor(0x415DB673,15,0,0); // node 15
  //g.addInNeighbor(0x415DB684,19,0,0); // node 19
  //g.addInNeighbor(0x41516F0B,20,0,0); // node 20

  g.configureLinkedList();
  s.setActiveDemand(0);
  s.setReactiveDemand(0);
 
  digitalWrite(cPin,LOW);
  digitalWrite(sPin,LOW);
  
 // initialize the ethernet device
  Ethernet.begin(mac, ip, gateway, subnet);   // start etehrnet interface
  for (int i=0;i<12;i++) {
     Mb.MbData[i] = 0;
  }
}

void loop() {
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
            Serial.println("Enter some input to activate links");
            digitalWrite(sPin,HIGH);
            int bb = Serial.read();      
            //ce = true;
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
      if (le == false)
      {
        if (a.isLeader())
        {
          if(Serial.available())
          {
            int bbb = Serial.read();  
            Serial.println("got some input");
            delay(5); 
            Serial.println("Starting link activation");
            le = a.linkActivationAlgorithm();
          }
        }
        else
        {
          Serial.println("Waiting for link activation");
          le = a.linkActivationAlgorithm();
        }
      }
      else
      {
        Serial.println("Starting Optimal Power Flow");
        feasible = a.OptimalPowerFlow(true,0.1,100);
        //Serial.println(state1,4);
        // Controller code over
        
        while (Serial.available() == 0) 
        { 
          //simply makes the arduino wait until commputer sends signal        
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
  int node1_ip = 61; //part of ip address for node 1 on the HIL side  //#NODE
  Mb.Req(MB_FC_WRITE_MULTIPLE_REGISTERS,0,2,0,node1_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos - arduino, int nodeip) //#NODE
  Mb.MbmRun();
  //SerialUSB.println("Sent Stuff to typhoon");
}

void receiveTyphoonData()
{
  int node1_ip = 61; //part of ip address for node 1 on the HIL side
  Mb.Req(MB_FC_READ_INPUT_REGISTER,0,2,0,node1_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos -arduino, int nodeip) //#NODE
  Mb.MbmRun();
}
