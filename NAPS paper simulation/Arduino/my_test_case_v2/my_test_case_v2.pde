import processing.serial.*;
import java.io.*;

int mySwitch=0;
int counter=1;
int mycounter = 0;
int data_ready=0;
String []subtext = new String[1400];
String [] temp;
Serial myPort;
Table dataTable; //table where we will read in and store values. You can name it something more creative!
//int numReadings = 10; //keeps track of how many readings you'd like to take before writing the file. 
//int readingCounter = 0; //counts each reading to compare to numReadings. 
float mine;
int final_value;
String reply = "F";
String val;
boolean firstContact = false;
String str1 = "Communication Link established";
String fileName;


void setup(){
 //Create a switch that will control the frequency of text file reads.
 //When mySwitch=1, the program is setup to read the text file.
 //This is turned off when mySwitch = 0
 //mySwitch=1;
 //size(100,100);
 noLoop();
 
 //Open the serial port for communication with the Arduino
 //Make sure the COM port is correct
 readData("C:\\regd-test-wave.csv");        //gets data from regd file and puts that in the array - subtext (start from index 1)
 myPort = new Serial(this, "COM53", 38400);                            //COM PORT NUMBER should correspond to serial port of leader node 
 myPort.bufferUntil('\n');
 dataTable = new Table();
 dataTable.addColumn("id"); //This column stores a unique identifier for each record. We will just count up from 0 - so your first reading will be ID 0, your second will be ID 1, etc. 
 //the following are dummy columns for each data value. Add as many columns as you have data values. Customize the names as needed. Make sure they are in the same order as the order that Arduino is sending them!
 dataTable.addColumn("Sent signal");
 dataTable.addColumn("delay");
 
}

void draw() {
 //if (mySwitch>0){
 /*The readData function can be found later in the code.
 This is the call to read a CSV file on the computer hard-drive. */
 
 
 /*The following switch prevents continuous reading of the text file, until
 we are ready to read the file again. */
 
 //mySwitch=0;                                                                    //commented out for now

 //}
 /*Only send new data. This IF statement will allow new data to be sent to
 the arduino. */
 
 
 
 
 /*
 else{
 //If the text file has run out of numbers, then read the text file again in 5 seconds.
 delay(5000);
 mySwitch=1;
 }
 */
}
//listens for messages from the arduino
void serialEvent(Serial myPort)
{

  reply = myPort.readStringUntil('\n');
  
  if(reply != null && data_ready==0)
  {
    reply = trim(reply);
    println(reply);
  }
  
  if(reply != null && data_ready==1)
  {
    reply = trim(reply);
    println(reply);
    float replyVals[] = float(split(reply, ',')); //parses the packet from Arduino and places the valeus into the sensorVals array. I am assuming floats. Change the data type to match the datatype coming from Arduino.
    TableRow newRow = dataTable.addRow(); //add a row for this new reading
    newRow.setInt("id", dataTable.lastRowIndex());//record a unique identifier (the row's index)
    //record sensor information. Customize the names so they match your sensor column names. 
    newRow.setFloat("Sent signal", replyVals[0]);
    newRow.setFloat("delay", replyVals[1]);
    
    //readingCounter++; //optional, use if you'd like to write your file every numReadings reading cycles
    
    //saves the table as a csv in the same folder as the sketch every numReadings. 
    //if (readingCounter % numReadings ==0)//The % is a modulus, a math operator that signifies remainder after division. The if statement checks if readingCounter is a multiple of numReadings (the remainder of readingCounter/numReadings is 0)
    //{
    fileName = str(dataTable.lastRowIndex());
    saveTable(dataTable, fileName, "csv"); //Woo! save it to your computer. It is ready for all your spreadsheet dreams. 
    println("saved");
    data_ready = 0;
    //}
  }
  
  if(firstContact == false)
  {
    if(reply.equals("R"))
    {
      myPort.clear();
      firstContact = true;
      myPort.write("R");
      println("Connection established");
    }
  }
  else
  {
    if(reply.equals("d"))
    {
      myPort.write("d");
    }

  
 
   if(reply.equals("c"))
   {
     myPort.write('c');                                       //begin transmission
   }
  
     if(counter<mycounter && reply.equals("send"))
     {
       /* Write the next number to the Serial port and send it to the Arduino 
       There will be a delay of half a second before the command is
       sent to turn the LED off : myPort.write('0'); */
       mine = float(subtext[counter]);
       //final_value = int(mine*10000000);
       data_ready = 1;
       println(mine);
       myPort.write(subtext[counter]);
       delay(2000);                                            //delay for each RegD signal
 
       //Increment the counter so that the next number is sent to the arduino.
       counter++;
    }
 }


}

/* The following function will read from a CSV or TXT file */
void readData(String myFileName){
 
  mycounter = 0;
 File file=new File(myFileName);
 BufferedReader br=null;
 
 
 try{
 br=new BufferedReader(new FileReader(file));
 String text=null;
 
 /* keep reading each line until you get to the end of the file */
 while((text=br.readLine())!=null){
 /* Spilt each line up into bits and pieces using a comma as a separator */
  temp = splitTokens(text,","); 
  subtext[mycounter] = temp[1];
  mycounter++;
   
 }
 
 }
 
 catch(FileNotFoundException e){
 e.printStackTrace();
 }
 catch(IOException e){
 e.printStackTrace();
 }
 finally
 {
 try {
 if (br != null){
 br.close();
 }
 } catch (IOException e) {
 e.printStackTrace();
 }
 }
 
}
