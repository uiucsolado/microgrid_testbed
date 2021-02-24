/*
  This is Modbus test code to demonstrate all the Modbus functions with 
  with Ethernet IC WIZNET W5100 
  
  ModbusTCP is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  
  ModbusTCP is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with ModbusTCP.  If not, see <http://www.gnu.org/licenses/>.
  
  Adopted from ModbusMaster for RTU over RS-485 by Doc Walker
  Modified by Narendra Dehury for TCP.
  copyright @ phoenixrobotix.com
  
*/
#define WIZNET_W5100 1

unsigned int param_value_int[7];
#include <Ethernet.h>

IPAddress ModbusDeviceIP(169, 254,0,180);  // Put IP Address of PLC here
IPAddress moduleIPAddress(169, 254,0,23);  // Assign Anything other than the PLC IP Address
                                              
byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xE1 };


#include <ModbusTCP.h>

ModbusTCP node(1);                            // Unit Identifier.

float power;
float power_array[20];
int Inv_rating = 6000;
int Pct_array[5] = {10,20,25,30,35};
int counter = 0;
float Times[20];

void setup()
{

  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);                      // To disable slave select for SD card; depricated.

  Serial.begin(9600);
  delay(1000);
  Ethernet.begin(mac, moduleIPAddress);
  node.setServerIPAddress(ModbusDeviceIP);
  delay(6000);                                // To provide sufficient time to initialize.

}

void loop()
{
  uint8_t result;

  node.setTransactionID(random(100));           // Not necessary; but good to distinguish each frame individually.
  
  Serial.print("Disable power reduction ");
  node.setTransmitBuffer(0, 10000);
  node.setTransmitBuffer(1, 0);
  node.setTransmitBuffer(2, 0);
  node.setTransmitBuffer(3, 0);
  node.setTransmitBuffer(4, 0);
  node.writeMultipleRegisters(40232, 5);               // Write multiple register
  Serial.println(result, HEX);
  delay(10000);

  result = node.readHoldingRegisters(40232, 5);    // Read Holding Registers

  Serial.println(result, HEX);
  if(result != 0)
  {
    Serial.println("TimeOut");
    
    delay(6000);
  }
  
  int len = node.getResponseBufferLength();           
  Serial.println("Response Length: " + String(len));// See the length of data packet received.
  Serial.print("Initial Power reduction settings: ");
  for (byte j = 0; j < len; j++)
  {
    Serial.print(node.getResponseBuffer(j));       // Inspect the data.
    Serial.print(" ");
  }
  Serial.println();
  node.clearResponseBuffer();

  result = node.readHoldingRegisters(40083, 2);    // Read Holding Registers

  Serial.println(result, HEX);
  if(result != 0)
  {
    Serial.println("TimeOut");
    
    delay(6000);
  }
  
  len = node.getResponseBufferLength();           
//  Serial.println("Response Length: " + String(len));// See the length of data packet received.
//  for (byte j = 0; j < len; j++)
//  {
//    Serial.print(node.getResponseBuffer(j));       // Inspect the data.
//    Serial.print(" ");
//  }
//  Serial.println();
  power = float(node.getResponseBuffer(0))/10; 
  node.clearResponseBuffer();
  Serial.print("Maximum Power is: ");
  Serial.println(power,4);
  
  delay(100);
  
//  result = node.readHoldingRegisters(40232, 5);    // Read Holding Registers
//
//  Serial.println(result, HEX);
//  if(result != 0)
//  {
//    Serial.println("TimeOut");
//    
//    delay(6000);
//  }
//  
//  len = node.getResponseBufferLength();           
//  Serial.println("Response Length: " + String(len));// See the length of data packet received.
//  Serial.print("Power reduction settings: ");
//  for (byte j = 0; j < len; j++)
//  {
//    Serial.print(node.getResponseBuffer(j));       // Inspect the data.
//    Serial.print(" ");
//  }
//  Serial.println();
//  node.clearResponseBuffer();

//  node.writeSingleRegister(5, 3);                  // Write single register
//  Serial.println(result, HEX);
//  delay(500);
//
//
//
  Serial.print("Change power reduction settings: ");
  Serial.print("Target Percentage is: ");
  Serial.println(Pct_array[counter]);
  Serial.print("Desired power is: ");
  float Pref = float(Inv_rating)*float(Pct_array[counter])*1e-2;
  Serial.println(Pref,4);
  
  node.setTransmitBuffer(0, Pct_array[counter]*100);
  node.setTransmitBuffer(1, 0);
  node.setTransmitBuffer(2, 0);
  node.setTransmitBuffer(3, 0);
  node.setTransmitBuffer(4, 1);
  node.writeMultipleRegisters(40232, 5);               // Write multiple register
//  Serial.println(result, HEX);
  unsigned long Time = millis();
  delay(100);
  for (int i=0;i<20;i++){
    result = node.readHoldingRegisters(40083, 2);    // Read Holding Registers
//    Serial.println(result, HEX);
    if(result != 0)
    {
      Serial.println("TimeOut");
      
      delay(6000);
    }
    
    power_array[i] = float(node.getResponseBuffer(0))/10; 
    Times[i] = (millis()-Time)*1e-3;
    node.clearResponseBuffer();
    delay(100);
  
    }
  Serial.println("Power measurements every 200 ms: ");
  for (int i=0;i<20;i++){Serial.print(power_array[i],4);Serial.print(" at time: ");Serial.print(Times[i],4);Serial.println();}
  counter++;
  if (counter>4) {
    Serial.print("Disable power reduction ");
    node.setTransmitBuffer(0, 10000);
    node.setTransmitBuffer(1, 0);
    node.setTransmitBuffer(2, 0);
    node.setTransmitBuffer(3, 0);
    node.setTransmitBuffer(4, 0);
    node.writeMultipleRegisters(40232, 5);               // Write multiple register
    Serial.println(result, HEX);
    delay(10000);
  
    result = node.readHoldingRegisters(40232, 5);    // Read Holding Registers
  
    Serial.println(result, HEX);
    if(result != 0)
    {
      Serial.println("TimeOut");
      
      delay(6000);
    }
    
    int len = node.getResponseBufferLength();           
    Serial.println("Response Length: " + String(len));// See the length of data packet received.
    Serial.print("Initial Power reduction settings: ");
    for (byte j = 0; j < len; j++)
    {
      Serial.print(node.getResponseBuffer(j));       // Inspect the data.
      Serial.print(" ");
    }
    Serial.println();
    node.clearResponseBuffer();
    Serial.print("THE END");
    while (true){}
  }
  delay(15000);
    
//
//
//
//  node.writeSingleCoil(20, 1);                     // Write Single coil
//  delay(500);
//
//
//
//  node.setTransmitBuffer(0, 0b1010101001010101);
//
//  node.writeMultipleCoils(20, 16);                 // Write multiple coils
//  delay(500);
//  result = node.readCoils(20, 18);
//  len = node.getResponseBufferLength();
//  Serial.println("Response Length: " + String(len));
//  Serial.println(node.getResponseBuffer(0), BIN);
//
//
//  node.clearResponseBuffer();
  delay(5000);
}
