#include <Streaming.h>
#include <Dyno.h>
#include <XBee.h>
#include <OGraph.h>
#include <OAgent.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 4
//NI = 4; SL = 0x4151C48B
int node_id = 4;


long base = 100;  // not using floating points so need a base number
long base_value = 10000000;
long regd_base;
long capacity = 25000;  //DER capacity limit

Dyno d = Dyno();
XBee xbee = XBee();                  // create an XBee object
ZBRxResponse rx = ZBRxResponse();
// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x4151C48B,0,capacity*base,-1.5*base,0.5*base,1,base, node_id);
OGraph g = OGraph(&s);
OAgent a = OAgent(&xbee,&rx,&g,false,true);

//My own additions
ZBRxResponse* _rx = &rx;
XBee* _xbee = &xbee;
byte *b;

uint8_t cPin = 48;  // drive enable led
uint8_t sPin = 7;   // synced led

boolean de = false;

float regd = 0;         // variable to store the read value
long n;

MgsModbus Mb;
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xB4 };
IPAddress ip(192, 168, 2, 4);
IPAddress gateway(192, 168, 2, 0);
IPAddress subnet(255, 255,255, 0);
uint16_t regd_high;
uint16_t regd_low;
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

void setup()  {
  Serial.begin(38400);
  //UNCOMMENT IF DEBUGGING USING THE SERIAL MONITOR IS REQUIRED
  /*while(!Serial)
  {
    ;//wait for serial port to connect 
   }*/
   ////////////////////////////////////////////////////////////
  Serial3.begin(38400);
  
  pinMode(sPin, OUTPUT);
  pinMode(cPin, OUTPUT);
  digitalWrite(sPin,HIGH);
  digitalWrite(cPin,HIGH);
  
  xbee.setSerial(Serial3);
  //g.addInNeighbor(0x4174F1AA);   // node 1
 g.addInNeighbor(0x4174F186);  // node 2
  g.addInNeighbor(0x4151C692);   // node 3
  //g.addInNeighbor(0x4151C48B);  // node 4
  //g.addInNeighbor(0x4151C688); // node 5
 //g.addInNeighbor(0x4151C6AB); // node 6
  //g.addInNeighbor(0x4151C6CB); // node 7
  //g.addInNeighbor(0x4151C6AC); // node 8
  digitalWrite(sPin,LOW);
  digitalWrite(cPin,LOW);

  // initialize the ethernet device
  Ethernet.begin(mac, ip, gateway, subnet);   // start etehrnet interface
  for (int i=0;i<12;i++) {
     Mb.MbData[i] = 0;
  }
  sendConsensusResults(); //initialize registers to zero
}


void loop() {
  if(de == false) {
   //Serial.println("Still trying to sync");
    if(a.sync()) {
      de = true;
      //d.flushSerial();
      digitalWrite(sPin,HIGH);
     //Serial.println("Synced with Leader Node");
    }    
  } 
   else {
    if(a.isSynced()) {
      
      a.nonleaderFairSplitRatioConsensus(0);
      
        regd = a.getbufferdata(0);
      if(regd > 1)
          regd = 1;
        else if (regd < -1)
          regd = -1;
          
      n = regd*base_value;//regd*base_value; 
      regd_high = (n >> 16) & 0x000FFFF;
      regd_low = n & 0x0000FFFF;
      Mb.MbData[0] =  regd_high;
      Mb.MbData[1] = regd_low;  
    /*
      for(int i = 3;i < 43;i++)
      {
        Serial.print(a.getbufferdata(i),4);
        Serial.print(", ");
      }
      */      
      sendConsensusResults();

      }
  }
 
}

void sendConsensusResults()
{
   
  fc = 16;                                 //function code to write to multiple registers
  ref = 30;                                //starting address of node 2 registers is 10
  Ref_high = uint8_t(ref >> 8 & 0x00FF);
  Ref_low = uint8_t(ref & 0x0FF);
  count = 2;                              //in this case we want to write to 2 registers on the server(typhoon)
  Count_high = uint8_t(count >> 8 & 0x00FF);
  Count_low = uint8_t(count & 0x0FF);
  pos = 0;                              //position of the registers on the client(arduino) we want to read
  Pos_high = uint8_t(pos >> 8 & 0x00FF);
  Pos_low = uint8_t(pos & 0x0FF);
  int node4_ip = 44; //part of ip address for node 1 on the HIL side
  Mb.Build(fc,Ref_high,Ref_low,Count_high,Count_low,Pos_high,Pos_low,node4_ip);
  Mb.MbmRun();
  
}
