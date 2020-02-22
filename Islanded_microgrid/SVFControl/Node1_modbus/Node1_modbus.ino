#include <Streaming.h>
#include <XBee.h>
//#include <Dyno.h>
#include <OGraph_OPF.h>
#include <OAgent_OPF.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 1

long base = 10000;  // use base to increase precision of results
long D_base = 100000000;

XBee xbee = XBee();
ZBRxResponse rx = ZBRxResponse();

// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x4174F1AA,0,0.225*D_base,-2.1667*base,0.1667*base,2,D_base,1);  //#NODE
//OLocalVertex s = OLocalVertex(0x4174F1AA,0,1*D_base,-2.1667*base,0.1667*base,5,D_base); //changed Dout to 1, OLocalVertex(0x404980AE,-0.1*base,0.05*base,-2.1667*base,0.1667*base,1,base); //SN The Xbee address  needs to be changed here right? Also  figure out how to assign the 
OGraph_OPF g = OGraph_OPF(&s);
OAgent_OPF a = OAgent_OPF(&xbee,&rx,&g,true,true); // argument rx?

uint8_t errorPin = 6;  // error led pin
uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check
boolean de = false;

//AFE and controller variables
float f_error0;         // variable to store the read value 
float v_error0;         // variable to store the read value
float f_error1;         // ratio consensus result for average frequency error
long n;
float error = 0;
float u_f =0;
float u_v =0;
float u_set=0.85;
int r = 0;

//Modbus Communication
MgsModbus Mb; 
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xB1 }; //#NODE
IPAddress ip(192, 168, 2, 1); // What are these addresses //#NODE
IPAddress gateway(192, 168, 2, 20);
IPAddress subnet(255, 255,255, 0);

uint16_t state_high;
uint16_t state_low;
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
long tt;
float eps = 0.001;
uint8_t genFlag_f=1;
uint8_t genFlag_v=1;
float D;

void setup()  {
  Serial.begin(38400);
  Serial3.begin(38400);
  pinMode(cPin, OUTPUT);
  pinMode(sPin, OUTPUT);
  digitalWrite(cPin,HIGH);
  digitalWrite(sPin,HIGH);
  
  xbee.setSerial(Serial3); //Specify the serial port for xbee
//Define the Neighboring nodes
  //g.addInNeighbor(0x4174F1AA); // node 1
  g.addInNeighbor(0x4174F186,2,0,0); // node 2
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
            Serial.println("c");
            digitalWrite(sPin,HIGH);
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
      receiveTyphoonData();
      int f_error =  Mb.MbData[0]*((-2*Mb.MbData[1])+1);
      int v_error  = Mb.MbData[2]*((-2*Mb.MbData[3])+1);
      f_error0 =  float(f_error);
      v_error0 =  float(v_error);
      f_error0 =  f_error0/base;
      v_error0 =  v_error0/base;
      
      if(f_error0 == 0)
      {
        genFlag_f=0;
        D=0;
      }
      else
      {
        genFlag_f=1;
        D=0.225;
      }
      
      if(v_error0 == 0)
      {
        genFlag_v=0;
      }
      else
      {
        genFlag_v=1;
      }    
      Serial.println("frequency error: ");
      Serial.println(float(f_error0),4);
      Serial.println("voltage error: ");
      Serial.println(float(v_error0),4);
      //a.fairSplitRatioConsensus_RSL(D_base*f_error0,D*D_base, 16,160);
      //Serial.println("Out");
      //f_error1 = float(a.getbufferdata(0))/D_base;
      
      //Serial.println("ratio consensus result");
      //Serial.println(f_error1,4);
      
    // frequency controller code
//      if(genFlag_f==1)
//      {
//        if(abs(f_error1)>eps)
//        {
//           error=error + -1*0.707*f_error1;
//           u_f=u_set+0.7071*error;
//           //Serial.println(u,4);
//        }
//      }
      
      u_f = -0.35;
      u_v = -0.72;
      
      if (u_f<0)
      {
        Mb.MbData[0]=1;
      }
      else
      {
        Mb.MbData[0]=0;
      }
      Mb.MbData[1]=base*abs(u_f);

//      // voltage controller code
//      if(genFlag_v==1)
//      {
//        if(abs(v_error0)>eps)
//        {
//           u_v=0.05*v_error0;
//           //Serial.println(u,4);
//        }
//      }
      if (u_v<0)
      {
        Mb.MbData[2]=1;
      }
      else
      {
        Mb.MbData[2]=0;
      }
      Mb.MbData[3]=base*abs(u_v);
   // Controller code over
  
      sendConsensusResults();     
      a.resync();
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
  Mb.Req(MB_FC_WRITE_MULTIPLE_REGISTERS,0,4,0,node1_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos - arduino, int nodeip) //#NODE
  Mb.MbmRun();
  //SerialUSB.println("Sent Stuff to typhoon");
}

void receiveTyphoonData()
{
  int node1_ip = 61; //part of ip address for node 1 on the HIL side
  Mb.Req(MB_FC_READ_INPUT_REGISTER,0,4,0,node1_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos -arduino, int nodeip) //#NODE
  Mb.MbmRun();
}
