import processing.serial.*;
import java.io.*;

int mySwitch=0;
int counter=1;
int mycounter = 0;
String []subtext = new String[1400];
String [] temp;
Serial myPort;
float mine;
int final_value;
String reply = "F";
String val;
boolean firstContact = false;
String str1 = "Communication Link established";

void setup(){
 //Create a switch that will control the frequency of text file reads.
 //When mySwitch=1, the program is setup to read the text file.
 //This is turned off when mySwitch = 0
 //mySwitch=1;
 //size(100,100);
 noLoop();
 
 //Open the serial port for communication with the Arduino
 //Make sure the COM port is correct
 readData("C:\\Users\\sutomi2\\Documents\\regd-test-wave.csv");        //gets data from regd file and puts that in the array - subtext (start from index 1)
 myPort = new Serial(this, "COM3", 38400);                            //COM PORT NUMBER should correspond to serial port of leader node 
 myPort.bufferUntil('\n');
 
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
  
  if(reply != null)
  {
    reply = trim(reply);
    println(reply);
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
   
       println(mine);
       myPort.write(subtext[counter]);
       //delay(2000);                                                                            //CHANGE
 
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