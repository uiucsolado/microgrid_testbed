#include <Streaming.h>
#include <Dyno.h>
#include <XBee.h>
#include <OGraph.h>
#include <OAgent.h>
#include <MgsModbus.h>
#include <SPI.h>
#include <Ethernet.h> 

//Node 5
//NI = 5; SL = 0x4151C688
int node_id = 5;
int max_node = NUM_REMOTE_VERTICES;


char val; // Data received from the serial port
float value;
int8_t direction = 10;
int counter = 0; //tracks if the computer is logged off
String neighbors = ""; //vector with information of in-neighbors (0 - not in-neighbor, 1 - is in-neighbor but is not online, 2 - is in-neighbor and is online)
String rrequest = ""; 
String cresults = ""; //string with k iteration results of ratio consensus
boolean reconnected = false;
boolean connection = false;

long base = 10000000;  // not using floating points so need a base number
long base_value = 10000000;
long regd_base;
long capacity = 25000;  //DER capacity limit

Dyno d = Dyno();
XBee xbee = XBee();                  // create an XBee object
ZBRxResponse rx = ZBRxResponse();
// address, min, max, alpha, beta, out-degree, base
OLocalVertex s = OLocalVertex(0x4151C688,0,0,-1.5*base,0.5*base,9,base,node_id);
OGraph g = OGraph(&s);
OAgent a = OAgent(&xbee,&rx,&g,false,true);

//My own additions
ZBRxResponse* _rx = &rx;
XBee* _xbee = &xbee;
byte *b;

uint8_t cPin = 48;  // drive enable led
uint8_t sPin = 7;   // synced led
bool sent = false; //flag that rises once the node is ready to send information to the central computer

float regd = 0;         // variable to store the read value
long n;

MgsModbus Mb;
// Ethernet settings (depending on MAC and Local network)
byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xB5 };
IPAddress ip(192, 168, 2, 5);
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
int server_ip = 60;


void setup() 
{
  Serial.begin(38400);
  Serial3.begin(38400);
  
  pinMode(sPin, OUTPUT);
  pinMode(cPin, OUTPUT);
  digitalWrite(sPin,HIGH);
  digitalWrite(cPin,HIGH);
  
  xbee.setSerial(Serial3);
  //g.addInNeighbor(0x4174F1AA);   // node 1
  //g.addInNeighbor(0x4174F186);  // node 2
  g.addInNeighbor(0x4151C692);   // node 3
  //g.addInNeighbor(0x4151C48B);  // node 4
  //g.addInNeighbor(0x4151C688); // node 5
  //g.addInNeighbor(0x4151C6AB); // node 6
  //g.addInNeighbor(0x4151C6CB); // node 7
  //g.addInNeighbor(0x4151C6AC); // node 8
  g.addInNeighbor(0x415DB683); // node 17
  //g.addInNeighbor(0x41516F1B); // node 18
  digitalWrite(sPin,LOW);
  digitalWrite(cPin,LOW);

  // initialize the ethernet device
  Ethernet.begin(mac, ip, gateway, subnet);   // start etehrnet interface
  for (int i=0;i<12;i++) {
     Mb.MbData[i] = 0;
  }

  establishContact();  // send a byte to establish contact until receiver responds 

  for (int i = 0; i <=10 ; i++)
  {
   sendConsensusResults(server_ip + i); //initialize registers to zero
   sendConsensusResults(server_ip + i);
  }
}

void loop()
{
  if(a.isSynced() && sent == false) 
  {
    a.nonleaderFairSplitRatioConsensus(0);
    sent = true; //ready to send information to the central computer
  
    regd = a.getbufferdata(0);
    
    if(regd > 1)
      regd = 1;
    else if (regd < -1)
      regd = -1;
    
    n = regd*base_value; 
    regd_high = (n >> 16) & 0x000FFFF;
    regd_low = n & 0x0000FFFF;
    Mb.MbData[0] =  regd_high;
    Mb.MbData[1] = regd_low;
      
    for (int i = 0; i <=10 ; i++)
    {
      sendConsensusResults(server_ip + i); //initialize registers to zero
      sendConsensusResults(server_ip + i);
    }

    a.resync();

    if (reconnected == true)
    {
      while(Serial.available()) //clean input buffer
     {
      val = Serial.read();
     }   
     reconnected = false;
    }
  }


  if (Serial.available() > 0 || connection == true) // If data is available to read, or the node was reconnected
  {
    if (connection == true)
    {
      connection = false;
    } 
    else
    {
      val = Serial.read(); // read it and store it in val
    }
    
    if(val == 'A') //if we get an A
    {
      Serial.println(node_id); //send back reference number
      delay(50);

      while (a.sync() == false) // wait until node is synced
      {
        delay(10);
      }
      digitalWrite(sPin,HIGH);
      a.nonleaderFairSplitRatioConsensus(0); //this is just a first round to get information about in-neighbors in the graph
      sent = true; //first send the in-neighbors data to main computer
    }

    else if(val == 'B') //if we get a B, node is already synced
    {
      for (int i = 1; i <= max_node; i++)
      {
         neighbors = neighbors + String(a.getStatusData(i));
      }
      Serial.println(neighbors);
      neighbors = "";
      delay(100);
      Serial.println("B");      
      sent = false; //now ready to start first ratio concensus
    }


    else if(val == 'C') //if we get a C
    {     
        for (int i = 1; i <= max_node; i++)
        {
           neighbors = neighbors + String(a.getStatusData(i));
        }
        
        Serial.println(neighbors);
        neighbors = "";
        delay(100);
        cresults = "";
 
        for (int j = 3; j < 13; j++)
        {
          value = a.getbufferdata(j);

          /*
          if (value >= 0)
          { 
            cresults = cresults + (value*(20000.0000 - 0.0000) + 0.0000) + ";" ;
          } 
          else
          {
            cresults = cresults + (value*(0.0000 - (-20000.0000)) + 0.0000) + ";" ;
          }*/
          cresults = cresults + value*1000 + ";" ;
        }
        
        Serial.println(cresults);
        delay(100);
        sent = false;
        Serial.println("next"); //let computer know that I can request information from other nodes
    }

    else if(val == 'D') //gets a D when node failed and is triying to sync back with the system
    {
      rrequest = rrequest + "R" + node_id;
      Serial.println(rrequest); //send back r for reconnection
      //delay(50);
      
       while (a.sync() == false) // wait until node is synced
       {
         delay(10);
       }  
      reconnected = true;
      sent = false;
      digitalWrite(sPin,HIGH);
    } 
    delay(10);
  }
} 

void establishContact() 
{
  delay(1000);
  while (connection == false) 
  {
    Serial.println("A");   // send a capital A
    if (Serial.available() > 0)
    {
       val =  Serial.read();
    }
    if (val == 'A' || val == 'D') connection = true;
    delay(500);
  }
}

void sendConsensusResults(int ip)
{
  fc = 16;                                 //function code to write to multiple registers
  ref = 0;                                //starting address of node 2 registers is 10
  Ref_high = uint8_t(ref >> 8 && 0x00FF);
  Ref_low = uint8_t(ref & 0x0FF);
  count = 2;                              //in this case we want to write to 2 registers on the server(typhoon)
  Count_high = uint8_t(count >> 8 && 0x00FF);
  Count_low = uint8_t(count & 0x0FF);
  pos = 0;                              //position of the registers on the client(arduino) we want to read
  Pos_high = uint8_t(pos >> 8 && 0x00FF);
  Pos_low = uint8_t(pos & 0x0FF);
  Mb.Build(fc,Ref_high,Ref_low,Count_high,Count_low,Pos_high,Pos_low,ip);
  Mb.MbmRun();
}

