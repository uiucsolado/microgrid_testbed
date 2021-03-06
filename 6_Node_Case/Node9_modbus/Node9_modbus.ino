#include <Streaming.h>
#include <XBee.h>
//#include <Dyno.h>
#include <OGraph_SFC.h>
#include <OAgent_SFC.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>


//Node 9

#define BR_ADDRESS 0xffff  
XBeeAddress64 braddress = XBeeAddress64(0x0,BR_ADDRESS);

int network = 6; // SN Frequency rengulation 6 node case
long base = 10000;  // use base to increase precision of results
long D_base = 100000000;

//Dyno d = Dyno(); //what is this?
XBee xbee = XBee();
XBee* _xbee = &xbee;
ZBRxResponse rx = ZBRxResponse();

// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x415786E1,0,0.225*D_base,-2.1667*base,0.1667*base,5,D_base,9); //changed Dout to 1, OLocalVertex(0x404980AE,-0.1*base,0.05*base,-2.1667*base,0.1667*base,1,base); //SN The Xbee address  needs to be changed here right? Also  figure out how to assign the 
//OLocalVertex s = OLocalVertex(0x415786E1,0,1*D_base,-2.1667*base,0.1667*base,5,D_base,9); //changed Dout to 1, OLocalVertex(0x404980AE,-0.1*base,0.05*base,-2.1667*base,0.1667*base,1,base); //SN The Xbee address  needs to be changed here right? Also  figure out how to assign the 
OGraph_SFC g = OGraph_SFC(&s);
OAgent_SFC a = OAgent_SFC(&xbee,&rx,&g,true,true); // argument rx?


uint8_t errorPin = 6;  // error led pin
uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

//variables for node sync check
boolean de = false;

//AFE and controller variables
int state;         // variable to store the read value 
long n;
float error = 0;
float u =0;
float u_set=0.85;
int r = 0;

unsigned long start_time;
unsigned long end_time;

//Modbus Communication
MgsModbus Mb; 
int val;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xB1 };
IPAddress ip(192, 168, 2, 1); // What are these addresses
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
uint8_t rounds  = 0;
float regd1;
long t;
int res_flag=0;
float state1 = 0 ;
float state0 = 0; //previous ratio consensus result
float eps = 0.0628;
int gen_flag=1;
float D;

void setup()  {
  //delay(5000);  
  Serial.begin(38400);
  Serial3.begin(38400);
  pinMode(cPin, OUTPUT);
  pinMode(sPin, OUTPUT);
  digitalWrite(cPin,HIGH);
  digitalWrite(sPin,HIGH);
  

  
  xbee.setSerial(Serial3); //Specify the serial port for xbee
//Define the Neighboring nodes
  //g.addInNeighbor(0x4174F1AA); // node 1
  //g.addInNeighbor(0x4174F186); // node 2
  //g.addInNeighbor(0x4151C692); // node 3
  //g.addInNeighbor(0x4151C48B); // node 4
  //g.addInNeighbor(0x4151C688); // node 5
  //g.addInNeighbor(0x4151C6AB); // node 6
  //g.addInNeighbor(0x4151C6CB); // node 7
  g.addInNeighbor(0x4151C6AC); // node 8
  //g.addInNeighbor(0x415786E1); // node 9
  g.addInNeighbor(0x415786D3); // node 10
  g.addInNeighbor(0x415DB670); // node 11
  //g.addInNeighbor(0x415786A9); // node 12
  g.addInNeighbor(0x4157847B); // node 13
  //g.addInNeighbor(0x415DB664); // node 14
  //g.addInNeighbor(0x415DB673); // node 15
  g.addInNeighbor(0x415DB684); // node 19
  //g.addInNeighbor(0x41516F0B); // node 20
  
  digitalWrite(cPin,LOW);
  digitalWrite(sPin,LOW);
 // initialize the ethernet device
  Ethernet.begin(mac, ip, gateway, subnet);   // start etehrnet interface

  // what is this loop doing here?
  for (int i=0;i<12;i++) {
     Mb.MbData[i] = 0;
  }
  //Serial.println("here");
  //establishContact();             //establish contact with computer processing code
  //Serial.println("You are out of the Establish Contact Function and about to go in loop");
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
    receiveTyphoonData();
    state =  Mb.MbData[0];
    if(state == 0)
    {
      gen_flag=0;
      D=0;
    }
    else
    {
      gen_flag=1;
      D=0.225;
    }
    
    Serial.println("Data");
    Serial.println(float(state),4);
    
    //a.leaderFairSplitRatioConsensus(base*state,10,200); //a.leaderFairSplitRatioConsensus(-0.35*base,75,50)
    //a.fairSplitRatioConsensus_RSL(D_base*1,1*D_base, 8,200);
    //t = millis();
    a.fairSplitRatioConsensus_RSL(base*state,D*D_base, 8,200);
    //Serial.println("Out");
    state1 = a.getbufferdata(0);
    
        
     //Serial.println("Typhoon Data");
     //Serial.println(state);
     Serial.println("ratio consensus result");
     Serial.println(state1,4);
     //Serial.println(millis()-t);
     
  // Controller code
     r=r+1;
     if(r>2)
     { 
        if(gen_flag==1)
        { 
            if((abs(state1-state0)>eps)&&(res_flag==0))
            {
               error=error + -1*0.707*state0;
               u=u_set+0.7071*error;
               //Serial.println(u,4);
               res_flag =1;
            }
            else
            {
               error=error + -1*0.707*state1;
               u=u_set+0.7071*error;
               //Serial.println(u,4);
               res_flag=0;
            }
        }
       Mb.MbData[1]=base*u;
       Serial.println(res_flag);
       sendConsensusResults();
     }
     // Controller code over
     
     
     //SerialUSB.println("printed the state");
     
//       n = state*base_value;            //multiply by base value  to change to non-decimal  
//       //n = state1*base_value;            //muultiply by base value  to change to non-decimal
//       state_high = (n >> 16) & 0x0000FFFF;
//       state_low = n & 0x0000FFFF;
//       Mb.MbData[1] =  state_high;                    
//       Mb.MbData[2] = state_low;     
//       
//       Mb.MbData[1] =  state;
//       int temp =   base*base*state1;                  
//       Mb.MbData[2] = temp;                     
//       sendConsensusResults();
     a.resync();       
     delay(1000);  //to account for the time it takes to send the reference signal through modbus
//*/
      /* Modbus Debugging
      rounds = rounds + 1; 
      Serial.println(rounds);
      receiveTyphoonData();
      state =  Mb.MbData[0];
      Serial.println("Data");
      Serial.println(float(state),4);
      Mb.MbData[1] =  state; 
      sendConsensusResults();
      delay(1000);*/  
  }
  
   /*receiveTyphoonData();
      state =  Mb.MbData[0];
      Serial.println("Data");
      Serial.println(float(state),4);
      Mb.MbData[1] =  state; 
      sendConsensusResults();
      delay(1000);*/
}



void sendConsensusResults()
{
  /*
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
  */
  int node1_ip = 61; //part of ip address for node 1 on the HIL side 
  //SerialUSB.println("inside sendconsensus function");
  Mb.Req(MB_FC_WRITE_MULTIPLE_REGISTERS,0,2,1,node1_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos - arduino, int nodeip)
  //SerialUSB.println("out of first function");
  Mb.MbmRun();
  //SerialUSB.println("Sent Stuff to typhoon");
    
}

void receiveTyphoonData()
{
  int node1_ip = 61; //part of ip address for node 1 on the HIL side 
  //SerialUSB.println("inside receive consensus results");
  Mb.Req(MB_FC_READ_INPUT_REGISTER,0,1,0,node1_ip); //(MB_FC FC, word Ref - typhoon, word Count, word Pos -arduino, int nodeip)
  //SerialUSB.println("out of first function");
  Mb.MbmRun();
  //SerialUSB.println("out of second function");
}

void establishContact()
  {
   Serial.println("You are in Establish Contact Function");
  }
  
  
  
