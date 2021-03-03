#include <Streaming.h>
//#include <Dyno.h>
#include <XBee.h>
#include <OGraph_ED.h>
#include <OAgent_ED.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 14 (node id = 6)

long base = 10000;  // not using floating points so need a base number

XBee xbee = XBee();                  // create an XBee object
ZBRxResponse rx = ZBRxResponse();

// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x415DB664,5,0,0.6,0.11,3,2,10);
LinkedList l = LinkedList();  //#NODE
OGraph_ED g = OGraph_ED(&s,&l);
OAgent_ED a = OAgent_ED(&xbee,&rx,&g,false,true);

uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check
boolean de = false;

//ED variables
float ED;
float alpha = 0.11;
float beta = 3;
float DER_max_cap = 0.6;
float DER_min_cap = 0;
float u = 0;

MgsModbus Mb;
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xBF };
IPAddress ip(192, 168, 2, 14);
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
int16_t load[151]={6700,6732,6775,6802,6766,6816,6793,6840,6888,6938,6948,7004,7012,7000,7047,7106,7114,7098,7127,7088,7098,7155,7177,7152,7178,7186,7234,7276,7275,7277,7284,7285,7329,7310,7312,7304,7338,7367,7387,7357,7409,7460,7435,7433,7408,7406,7389,7349,7366,7358,7394,7408,7427,7460,7465,7479,7484,7467,7437,7399,7445,7431,7462,7467,7514,7505,7474,7512,7543,7588,7634,7613,7608,7609,7633,7678,7689,7673,7716,7744,7717,7717,7771,7805,7833,7857,7822,7817,7845,7858,7826,7798,7823,7816,7846,7880,7926,7943,7950,7977,7960,7986,7960,7994,7963,7969,7959,7947,7976,8028,8035,8007,8016,8024,8063,8050,8032,8015,7990,8034,8004,8002,7969,7993,8047,8068,8050,8053,8087,8061,8103,8128,8118,8099,8101,8101,8086,8128,8186,8169,8191,8179,8218,8239,8204,8164,8195,8207,8208,8257,8264};
//int16_t load[51]={6700,6732,6775,6802,6766,6816,6793,6840,6888,6938,6948,7004,7012,7000,7047,7106,7114,7098,7127,7088,7098,7155,7177,7152,7178,7186,7234,7276,7275,7277,7284,7285,7329,7310,7312,7304,7338,7367,7387,7357,7409,7460,7435,7433,7408,7406,7389,7349,7366,7358,7394};
//int16_t load[5]={6700,6732,6775,6802,6766};

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
//  g.addInNeighbor(0x415786E1,1,0,0); // node 9
//  g.addInNeighbor(0x415786D3,2,0,0); // node 10
  g.addInNeighbor(0x415DB670,3,0,0); // node 11
  //g.addInNeighbor(0x415786A9,12,0,0); // node 12
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
              //          u = float(load[0])/10000.0;Serial.println("load");Serial.println(u,4);
            s.setActiveDemand(load); s.setDERparams(DER_min_cap,DER_max_cap,alpha,beta);
            Serial.println("Starting Economic Dispatch");
            a.EconomicDispatch(true,step_size,num_iters);
                        
          }
        }
      }
      if (!(a.isLeader()))
      {
        if (count==0){
          //          u = float(load[0])/10000.0;Serial.println("load");Serial.println(u,4);
          s.setActiveDemand(load); s.setDERparams(DER_min_cap,DER_max_cap,alpha,beta);
          Serial.println("Starting Economic Dispatch");
//          a.EconomicDispatch(true, step_size, num_iters);
          a.EconomicDispatch2(step_size, num_iters);

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
  int node6_ip = 66; //part of ip address for node 6 on the HIL side                                                                                                               //change3
  Mb.Req(MB_FC_WRITE_MULTIPLE_REGISTERS,0,4,0,node6_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos - arduino, int nodeip)                                              //change1
  Mb.MbmRun();
  //SerialUSB.println("Sent Stuff to typhoon");
}

void receiveTyphoonData()
{
  int node6_ip = 66; //part of ip address for node 6 on the HIL side                                                                                                                //change3
  Mb.Req(MB_FC_READ_INPUT_REGISTER,0,4,0,node6_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos -arduino, int nodeip)                                                     //change1
  Mb.MbmRun();
}
