#include <Streaming.h>
#include <XBee.h>
#include <Dyno.h>
#include <OGraph.h>
#include <OAgent.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h>

//NI = 1; SL = 0x4174F1AA
int node_id = 1;
int max_node = NUM_REMOTE_VERTICES;

long base = 10000000;  // use base to increase precision of results
long base_value = 10000000; // used when sending value to Typhoon HIL
long regd_base;
long capacity = 25000;  //DER capacity limit

char val; // Data received from the serial port
float value = 0.0000;
//int8_t direction = 10;
int counter = 0; //tracks if the computer is logged off
bool concen = false;
//int j = 3; //
String neighbors = ""; //vector with information of in-neighbors (0 - not in-neighbor, 1 - is in-neighbor but is not online, 2 - is in-neighbor and is online)
String cresults = ""; //string with k iteration results of ratio consensus

Dyno d = Dyno();
XBee xbee = XBee();
XBee* _xbee = &xbee;
ZBRxResponse rx = ZBRxResponse();
// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x4174F1AA,0,1*base,-2.1667*base,0.1667*base,5,base,node_id); //changed Dout to 1, OLocalVertex(0x404980AE,-0.1*base,0.05*base,-2.1667*base,0.1667*base,1,base);
OGraph g = OGraph(&s);
OAgent a = OAgent(&xbee,&rx,&g,true,true);

uint8_t errorPin = 6;  // error led pin
uint8_t sPin = 7;      // synced led
uint8_t cPin = 48;     // coordination enabled led pin

boolean de = false;
//boolean ce = false;

float regd;         // variable to store the read value
long n;

unsigned long start_time;
unsigned long end_time;

MgsModbus Mb;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xB2 };
IPAddress ip(192, 168, 2, 2);
IPAddress gateway(192, 168, 2, 20);
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

uint8_t rounds  = 0;

float regd1;



void setup()  
{
 
  Serial.begin(38400);
  while(!Serial)
  {
    ;//wait for serial port to connect 
  }
  Serial3.begin(38400);
  
  pinMode(cPin, OUTPUT);
  pinMode(sPin, OUTPUT);
  digitalWrite(cPin,HIGH);
  digitalWrite(sPin,HIGH);
  
  xbee.setSerial(Serial3);
 //g.addInNeighbor(0x4174F1AA);   // node 1
  g.addInNeighbor(0x4174F186);  // node 2
  //g.addInNeighbor(0x4151C692);   // node 3
  g.addInNeighbor(0x4151C48B);  // node 4
  g.addInNeighbor(0x4151C688); // node 5
  g.addInNeighbor(0x4151C6AB); // node 6
  //g.addInNeighbor(0x4151C6CB); // node 7
  //g.addInNeighbor(0x4151C6AC); // node 8
  digitalWrite(cPin,LOW);
  digitalWrite(sPin,LOW);
 // initialize the ethernet device
  Ethernet.begin(mac, ip, gateway, subnet);   // start etehrnet interface
  
  for (int i=0;i<12;i++) 
  {
     Mb.MbData[i] = 0;
  }
  sendConsensusResults();                      //initialize to zero
  
  establishContact();             //establish contact with computer processing code

}


void loop() 
{     
    if(Serial.available()) 
    {
      counter = 0;
      val = Serial.read(); // read it and store it in val

      if(val == 'A') //if we get an A
      {
        Serial.println(node_id); //send back reference number
        //digitalWrite(sPin,HIGH);
        delay(50);
      }      
    
      else if(val == 'B') //if we get a B
      {
        if(de == false) 
        {
          Serial.println("s"); //let computer know you want to sync
          delay(50);
          while (Serial.available() == 0)
          { 
            //simply makes the arduino wait until commputer sends signal 
          } 
         
          if(Serial.available()) 
          {
            uint8_t b = Serial.read(); //enter the character 's' 
            if (b == 's') 
            {
              if(a.sync()) 
              {
                de = true;
                Serial.println("d");
                digitalWrite(sPin,HIGH);
                delay(500);
                a.leaderFairSplitRatioConsensus(0,50,150); //this is just a first round to get information about in-neighbors in the graph
              }
              else
              {
                de  = false; //means could not sync 
              }
            }
          }
        }

        else
        {
          for (int i = 1; i <= max_node; i++)
          {
            neighbors = neighbors + String(a.getStatusData(i));
          }
          Serial.println(neighbors);
          neighbors = "";
          delay(100);
          Serial.println("B"); 
        }
        delay(50);
      }

      else if(val == 'C') //if we get a C
      {
      
        Serial.println("send");  //wait for regd signal to be sent 
        
        while (Serial.available() == 0) 
        {           
        }
        regd = Serial.parseFloat();

        if(regd >= 0)
        {
          regd_base = regd*base;
        }
        else
        {  
          regd_base = regd*base;
        }
        
        a.leaderFairSplitRatioConsensus(regd_base,50,150); //a.leaderFairSplitRatioConsensus(-0.35*base,75,50);
      
        regd1 = a.getbufferdata(0);
        
        if(regd1 > 1)
            regd1 = 1;
        else if (regd1 < -1)
            regd1 = -1;
          
        n = regd1*base_value;            //muultiply by base value  to change to non-decimal
        regd_high = (n >> 16) & 0x0000FFFF;
        regd_low = n & 0x0000FFFF;
        Mb.MbData[0] =  regd_high;                    
        Mb.MbData[1] = regd_low;     
              
        sendConsensusResults();

        a.resync();

        delay(500);  //to account for the time it takes to send the reference signal through modbus

        for (int i = 1; i <= max_node; i++)
        {
           neighbors = neighbors + String(a.getStatusData(i));
        }
        
        Serial.println(neighbors);
        neighbors = "";
        delay(100);
        cresults = "";
         
        for (int j = 3; j < 53; j++)
        {
          value = a.getbufferdata(j);
            
          if (value >= 0)
          { 
            cresults = cresults + (value*(35000.0000 - 1000.0000) + 1000.0000) + ";" ;
          } 
          else
          {
            cresults = cresults + (value*(1000.0000 - 0.0000) + 1000.0000) + ";" ;
          }
        }
        
        Serial.println(cresults);
        delay(100);
        Serial.println("next"); //let computer know that I can request information from other nodes
     
      }
     
     else if(val == 'D') //reconnection mode
     {
       Serial.println("R"); //send back r for reconnection
       delay(50);
     }
     delay(20);
    }
           
    /*else 
    {
      delay(10);
      counter++;
      if (counter == 10000)
      {
        establishContact(); //if computer goes off
        counter = 0;
      }
    }*/
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
  
  int node1_ip = 41; //part of ip address for node 1 on the HIL side 
  Mb.Req(MB_FC_WRITE_MULTIPLE_REGISTERS,0,2,0,node1_ip); //(MB_FC FC, word Ref, word Count, word Pos, int nodeip)
  Mb.MbmRun();
  //Serial.println("Received Response");
  
  
}

void establishContact()
  {
   while(Serial.available() <= 0)
    {
      Serial.println("A");
      delay(1000);
    } 
  
  }
