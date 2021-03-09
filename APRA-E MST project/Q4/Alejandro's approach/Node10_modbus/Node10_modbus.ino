#include <Streaming.h>
//#include <Dyno.h>
#include <XBee.h>
#include <OGraph_ED.h>
#include <OAgent_ED.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 10 (node id = 2)

long base = 10000;  // not using floating points so need a base number

XBee xbee = XBee();                  // create an XBee object
ZBRxResponse rx = ZBRxResponse();

// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x415786D3,2,0,1,0.08,2.5,3,10);
LinkedList l = LinkedList();  //#NODE
OGraph_ED g = OGraph_ED(&s,&l);
OAgent_ED a = OAgent_ED(&xbee,&rx,&g,false,true);

uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check
boolean de = false;

//ED variables
float ED;
float alpha = 0.08;
float beta = 2.5;
float DER_max_cap = 1;
float DER_min_cap = 0;
float u = 0;

//Modbus Communication
MgsModbus Mb;
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xBA };
IPAddress ip(192, 168, 2, 10);
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
int16_t load[151]={5200,5215,5259,5246,5275,5325,5288,5253,5256,5314,5365,5360,5371,5342,5317,5342,5340,5339,5318,5285,5305,5354,5346,5373,5423,5407,5432,5415,5465,5484,5444,5432,5475,5493,5515,5498,5546,5525,5556,5592,5599,5632,5649,5650,5671,5642,5654,5672,5703,5735,5711,5684,5706,5727,5710,5685,5706,5682,5647,5641,5621,5589,5580,5553,5571,5546,5589,5558,5564,5600,5649,5682,5715,5737,5732,5789,5823,5849,5829,5851,5877,5849,5859,5841,5829,5878,5909,5877,5891,5939,5960,5941,5990,5997,6006,6024,6083,6089,6124,6128,6167,6142,6136,6130,6096,6128,6104,6107,6067,6117,6099,6082,6043,6051,6054,6097,6115,6106,6084,6098,6124,6156,6205,6225,6245,6260,6290,6345,6338,6375,6362,6342,6355,6401,6407,6453,6501,6467,6513,6496,6534,6546,6600,6608,6590,6632,6669,6649,6667,6672,6707};
//int16_t load[51]={5200,5215,5259,5246,5275,5325,5288,5253,5256,5314,5365,5360,5371,5342,5317,5342,5340,5339,5318,5285,5305,5354,5346,5373,5423,5407,5432,5415,5465,5484,5444,5432,5475,5493,5515,5498,5546,5525,5556,5592,5599,5632,5649,5650,5671,5642,5654,5672,5703,5735,5711};
//int16_t load[5]={5200,5215,5259,5246,5275};
unsigned long myTime = 0;
uint16_t num_iters=200;
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
  //g.addInNeighbor(0x415786D3,10,0,0); // node 10
  //g.addInNeighbor(0x415DB670,3,0,0); // node 11
  g.addInNeighbor(0x415786A9,4,0,0); // node 12
//  g.addInNeighbor(0x4157847B,5,0,0); // node 13
  //g.addInNeighbor(0x415DB664,14,0,0); // node 14
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
            a.ed_reg_dispatch2(step_size,num_iters);
                            
          }
        }
      }
      if (!(a.isLeader()))
      {
        if (count==0){
//          u = float(load[0])/10000.0;Serial.println("load");Serial.println(u,4);
          s.setActiveDemand(load);s.setDERparams(DER_min_cap,DER_max_cap,alpha,beta);
          Serial.println("Starting Economic Dispatch");
//          a.EconomicDispatch(true, step_size, num_iters);
          a.ed_reg_dispatch2(step_size, num_iters);

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
//        ED = a.economicDispatchAlgorithm(alpha_p,beta_p,max_p,min_p,u,iterations,period);
//        Serial.println("ED result");
//        Serial.println(ED,4);
//        
//        u = float(load[150])/1000.0;Serial.println("load");Serial.println(u,4);
//        ED = a.economicDispatchAlgorithm(alpha_p,beta_p,max_p,min_p,u,iterations,period);
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
  int node2_ip = 62; //part of ip address for node 2 on the HIL side                                                                                                               //change3
  Mb.Req(MB_FC_WRITE_MULTIPLE_REGISTERS,0,4,0,node2_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos - arduino, int nodeip)                                              //change1
  Mb.MbmRun();
  //SerialUSB.println("Sent Stuff to typhoon");
}

void receiveTyphoonData()
{
  int node2_ip = 62; //part of ip address for node 2 on the HIL side                                                                                                                //change3
  Mb.Req(MB_FC_READ_INPUT_REGISTER,0,4,0,node2_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos -arduino, int nodeip)                                                     //change1
  Mb.MbmRun();
}
