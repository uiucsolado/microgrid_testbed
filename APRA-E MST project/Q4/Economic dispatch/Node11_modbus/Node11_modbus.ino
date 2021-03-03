#include <Streaming.h>
//#include <Dyno.h>
#include <XBee.h>
#include <OGraph_ED.h>
#include <OAgent_ED.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 11 (node id = 3)

long base = 10000;  // not using floating points so need a base number

XBee xbee = XBee();                  // create an XBee object
ZBRxResponse rx = ZBRxResponse();

// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x415DB670,3,0,0.75,0.12,1.6,4,10);
LinkedList l = LinkedList();  //#NODE
OGraph_ED g = OGraph_ED(&s,&l); 
OAgent_ED a = OAgent_ED(&xbee,&rx,&g,false,true);

uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check
boolean de = false;

//ED variables
float ED;
float alpha = 0.12;
float beta = 1.6;
float DER_max_cap = 0.75;
float DER_min_cap = 0;
float u = 0;

//Modbus Communication
MgsModbus Mb;
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xBB };
IPAddress ip(192, 168, 2, 11);
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
int count=0;
int pos;
int16_t load[151]={3300,3329,3294,3260,3285,3260,3284,3266,3231,3221,3188,3193,3234,3207,3231,3261,3275,3271,3277,3237,3235,3251,3290,3268,3266,3293,3342,3319,3344,3353,3343,3320,3362,3403,3368,3350,3348,3402,3373,3367,3367,3421,3426,3452,3480,3469,3445,3470,3484,3483,3511,3497,3527,3585,3614,3626,3657,3661,3651,3665,3664,3696,3678,3669,3668,3686,3654,3670,3674,3685,3713,3737,3737,3771,3815,3796,3837,3826,3869,3916,3886,3934,3947,3975,4006,4000,4013,4002,3994,4018,4038,4025,4019,3992,4035,4013,3985,3983,4037,4080,4102,4123,4175,4225,4245,4211,4239,4229,4225,4264,4242,4210,4256,4247,4296,4330,4371,4340,4391,4445,4405,4386,4350,4362,4361,4386,4387,4435,4429,4448,4492,4479,4487,4457,4502,4507,4566,4578,4629,4683,4677,4708,4717,4708,4688,4741,4784,4824,4805,4768,4739};
//int16_t load[51]={3300,3329,3294,3260,3285,3260,3284,3266,3231,3221,3188,3193,3234,3207,3231,3261,3275,3271,3277,3237,3235,3251,3290,3268,3266,3293,3342,3319,3344,3353,3343,3320,3362,3403,3368,3350,3348,3402,3373,3367,3367,3421,3426,3452,3480,3469,3445,3470,3484,3483,3511};
//int16_t load[5]={3300,3329,3294,3260,3285};

unsigned long myTime = 0;
uint16_t num_iters=1000;
float step_size = 0.02;

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
  //g.addInNeighbor(0x4151C48B,4,0,0); // node 4
  //g.addInNeighbor(0x4151C688,5,0,0); // node 5
  //g.addInNeighbor(0x4151C6AB,6,0,0); // node 6
  //g.addInNeighbor(0x4151C6CB,7,0,0); // node 7
  //g.addInNeighbor(0x4151C6AC,8,0,0); // node 8
  g.addInNeighbor(0x415786E1,1,0,0); // node 9
  //g.addInNeighbor(0x415786D3,2,0,0); // node 10
  //g.addInNeighbor(0x415DB670,11,0,0); // node 11
  g.addInNeighbor(0x415786A9,4,0,0); // node 12
//  g.addInNeighbor(0x4157847B,5,0,0); // node 13
  g.addInNeighbor(0x415DB664,6,0,0); // node 14
  //g.addInNeighbor(0x415DB673,15,0,0); // node 15
  //g.addInNeighbor(0x415DB684,19,0,0); // node 19
  //g.addInNeighbor(0x41516F0B,20,0,0); // node 20

  g.configureLinkedList();
  
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
      if (a.isLeader())
      {
        Serial.println("Begin economic dispatch? (y/n)"); //let computer know you want to begin economic dispatch
        while (Serial.available() == 0) 
        { 
          //simply makes the arduino wait until commputer sends signal        
        }
        if(Serial.available()) 
        {
          Serial.println("got some letter");
          uint8_t o = Serial.read(); //enter the character 's'
          Serial.println(o);
          if (o == 'y')
          {
//            u = float(load[0])/10000.0;Serial.println("load");Serial.println(u,4);
            s.setActiveDemand(load);s.setDERparams(DER_min_cap,DER_max_cap,alpha,beta);
            Serial.println("Starting Economic Dispatch");
            a.EconomicDispatch(true,step_size,num_iters);
                        
          }
        }
      }
      if (!(a.isLeader()))
      {
        if (count==0){
//          u = float(load[0])/10000.0;Serial.println("load");Serial.println(u,4);
          s.setActiveDemand(load);s.setDERparams(DER_min_cap,DER_max_cap,alpha,beta);
          Serial.println("Starting Economic Dispatch");
          a.EconomicDispatch(true,step_size,num_iters);

//          u = float(load[75])/10000.0;Serial.println("load");Serial.println(u,4);
//          ED = a.economicDispatchAlgorithm(alpha_p,beta_p,max_p,min_p,u,iterations,period);
//          Serial.println("ED result");
//          Serial.println(ED,6);
//
//          u = float(load[150])/10000.0;Serial.println("load");Serial.println(u,4);
//          ED = a.economicDispatchAlgorithm(alpha_p,beta_p,max_p,min_p,u,iterations,period);
//          Serial.println("ED result");
//          Serial.println(ED,6);
        }
        count++;
        
//        u = float(load[75])/1000.0;Serial.println("load");Serial.println(u,4);
//        a.economicDispatchAlgorithm(alpha_p,beta_p,max_p,min_p,u,iterations,period);
//        Serial.println("ED result");
//        Serial.println(ED,4);
//        
//        u = float(load[150])/1000.0;Serial.println("load");Serial.println(u,4);
//        a.economicDispatchAlgorithm(alpha_p,beta_p,max_p,min_p,u,iterations,period);
//        Serial.println("ED result");
//        Serial.println(ED,4);
      }
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
  int node3_ip = 63; //part of ip address for node 3 on the HIL side                                                                                                               //change3
  Mb.Req(MB_FC_WRITE_MULTIPLE_REGISTERS,0,4,0,node3_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos - arduino, int nodeip)                                              //change1
  Mb.MbmRun();
  //SerialUSB.println("Sent Stuff to typhoon");
}

void receiveTyphoonData()
{
  int node3_ip = 63; //part of ip address for node 3 on the HIL side                                                                                                                //change3
  Mb.Req(MB_FC_READ_INPUT_REGISTER,0,4,0,node3_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos -arduino, int nodeip)                                                     //change1
  Mb.MbmRun();
}
