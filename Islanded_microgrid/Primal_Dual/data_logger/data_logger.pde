import processing.serial.*;
import java.io.*;
import java.text.*;
import java.util.*;

Serial mySerial1;
Table table1;
String filename;

void setup()
{
   noLoop(); 
   //Open the serial port for communication with the Arduino
   //Make sure the COM port is correct
   mySerial1 = new Serial(this, "COM14", 38400);                            //COM PORT NUMBER should correspond to serial port of leader node 
   mySerial1.bufferUntil('\n');
   
   table1 = new Table();
   //add a column header "Data" for the collected data
   table1.addColumn("Data", Table.STRING);
   //add a column header "Time" for the collected data
   table1.addColumn("Time", Table.STRING);
}

void draw() 
{
  //varables called each time a new data entry is received
  int s = second();
   if(mySerial1.available() > 0)
   {
     //set the value received as a String
     String value = mySerial1.readString();
     //check to make sure there is a value
     if(value != null)
     {
       //add a new row for each value
       TableRow newRow = table1.addRow();
       //place the new row and value under the "Data" column
       newRow.setString("Data", value);
      //place the new row and time under the "Time" column
      newRow.setString("Time", str(s));
      //place the new row and date under the "Date" column
     }
   }
}

void keyPressed()
{
  //variables used for the filename timestamp
  int d = day();
  int m = month();
  int h = hour();
  int min = minute();
  int s = second();
  //variable as string under the data folder set as (mm-dd--hh-min-s.csv)
  filename = "data/" + str(m) + "-" + str(d) + "--" + str(h) + "-" + str(min) + "-" + str(s) + ".csv";
  //save as a table in csv format(data/table - data folder name table)
  saveTable(table1, filename);
  exit();
}
