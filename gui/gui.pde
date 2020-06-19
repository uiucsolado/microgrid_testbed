/**************************************************************************

GUI for cyber layer - Microgrid Controller-HIL Testbed
Created: 08/01/2018
By: Oscar Azofeifa
Version 1.0
Serial communication with Arduino and MATLAB 

*************************************************************************/ 
//libraries

import java.awt.Frame;
import java.awt.BorderLayout;
import muehlseife.correlations.*; //library containing objects for fast creation of edges and nodes 
import controlP5.*; // library used to created graphical elements for the GUI (buttons, text boxes..)
import processing.serial.*; //library containing functions for serial communication with controlers
import java.io.*;

int maxnode = 4; //number of max expected number of connected nodes, change this value depending of the size of the network

//some objects to control animations and communications

Graph myGraph;  //the graph object, it shows links and edges in the network, each node has a corresponding color reference
ControlP5 cp5; //GUI object to create graphic elements
Serial[] myPort = new Serial[maxnode + 1];  //array of serial objects, this handles serial communication with Arduino devices and MATLAB
CyberNode[] cyber_nodes = new CyberNode[maxnode]; //array of cyber node objects, these objects have information of the current state of the cyber nodes

//global variables and arrays

float [][] coordinates = new float[10][2]; //matrix that registers the coordinates of the nodes in the animation, coordinates[node id][x,y coordinates] 
int[] connected_nodes = new int[maxnode]; //array of connected controllers reference indexes 
String [] nodes = new String[maxnode];
int node_pos = 0; //used to initially locate the nodes in graph mode in different positions
int nodecount = 0; //records the number of controllers connected to the network, the leader node is assumed to be always connected, this variable changes at the initialization of the network depending of how many controllers initially respond
int controller = 0; //this global variable always references to the controller that is currently communicating serially with the application
String val; //string with information obtained via serial communication
String[] serial_list = {"COM3","COM53","COM54","COM52","COM55","COM51","COM56","COM50","COM16","COM15","COM46"}; //list of serial COM ports in the network
color[] graphColors = {color(255,0,0),color(255,127,0),color(255,255,0),color(0,255,0),color(0,0,255),color(75,0,130),color(148,0,211),color(218,165,32),color(255,20,147),color(0,255,255)}; //list of refernce color for the nodes
float regDval = 0; //current reg D value to be sent to leader node

//boolean flags used to control the flow of serial communication and GUI

boolean com = false; //flag that informs of a new controller communicating during the initialization
boolean started = false;
boolean serial_flag_1 = false; //flag that informs of a new node connecting with the application
boolean all_nodes = false; //flag that informs that all nodes in the graph have been registered
boolean serial_flag_2 = false; //flag that informs of a new link to be added to an edge
boolean enter_in_neighbors = false; //flag to indicate that in-neighbors data was sent 
boolean all_links = false; //flag that informs that all links in the graph have been registered
boolean create_animation = false; //flag used to start the animation that represents the graph of the network
boolean serial_flag_3 = false; //flag to indicate some information is coming from a node
boolean checkGraph = false; //flag to indicate that the graph must be checked for changes 
boolean serial_flag_4 = false; //flag to indicate a node es requesting reconnection 
boolean getregd = false; //flag to indicate that system is available to get a new regulation signal
boolean ignorenext = false; //flag to indicate that a regd signal value must be ignored
boolean serial_flag_5 = false; //flag to indicate a node restarted
boolean start_animation = false; //flag to indicate the animation is ready to be started
boolean reconnection = false; //true when user requests reconnecting the controllers
boolean reconnected = false; //true when a reconnection took place in the system but it hasn't synced
boolean serial_flag_6 = false; //flag to indicate a node sent ratio-consensus data

//boolean variables to control display

boolean ratio = false; //flag used for plot mode button
boolean animation = true; //flag used for animation mode button
boolean graph = false; //flag used for graph mode button 
boolean reset = false; //flag used for reset button 
boolean capture = false; //flag used for capture waveform button
boolean run = false; //flag used for start button

//timer control

Timer consensus_timer; //timer used to measure initial response time
Timer system_timer; //timer used to control communications with cyber nodes

// plot data management 

float[][] lineGraphValues = new float[maxnode][300]; //matrix of plot data 
float[][] lineGraphValues_capture = new float[maxnode][300]; //backup for when pushing capture button
float[][] lineGraphValues_buffer = new float[maxnode][10]; //a buffer is used to store data from nodes before printing 
float[] lineGraphSampleNumbers = new float[300]; //plot X axis
int stack_counter = 0; //counter used to determine when buffer is full
boolean stack = false; //true when the buffer of the in-data from the nodes is full

// plot configuration 

JSONObject plotterConfigJSON; //saved characteristics of the plot
String topSketchPath = ""; // helper for saving the executing path used in the plot configuration
int plotXpos = 500;
int plotYpos = 100;
int plotWidth = 1300; //600
int plotHeight = 850; //400
plot LineGraph = new plot(plotXpos, plotYpos, plotWidth, plotHeight, color (20, 20, 200)); //plot object

// some graphic elements

PImage img;
PFont f;
Button b; 
Textarea clock; //real time clock

//constants used to create circular arrangement in the animation

float yPos = 0;
float yPos2 = 0;
float xPos = 0;
float xPos2 = 0;
float arc = 0;
float rad = 0;


void setup()
{
    size(1920, 1080); //screen size

    topSketchPath = sketchPath;
    plotterConfigJSON = loadJSONObject(topSketchPath+"/plotter_config.json"); //last saved configuration of the plot area
    
    //saves the coordinates of the nodes in the animation
    setAnimationCoordinates();
    
    //Control P5 init
    cp5 = new ControlP5(this);
  
    //init parameters of the plot of the Ratio Consensus (RC) executions
    setChartSettings();
  
    //build x axis values for the line graph (samples or time)
    for (int i=0; i<lineGraphValues.length; i++)
    {
      for (int k=0; k<lineGraphValues[0].length; k++) 
      {
        lineGraphValues[i][k] = 0;
        if (i==0) lineGraphSampleNumbers[k] = k;
      }
    }
 
    //open only first port to communicate with MATLAB
    myPort[0] = new Serial(this, serial_list[0], 38400); 
    myPort[0].bufferUntil('\n'); //allows determining the end of a message
  
    //this image is used to represent the controllers (nodes) in the system  
    img = loadImage("visiogray.png");
    img.resize(100,136);
    
    //setup the GUI tabs
    set_GUItabs();   
    
    //every cyber node object corresponds to a real node in the system
    for (int i=0; i < maxnode; i++)
    {
      cyber_nodes[i] = new CyberNode();
    } 

    // Create the font used in some parts of the GUI

    f = createFont("Times New Roman Bold", 24);
    textFont(f);
    textAlign(CENTER, CENTER);
    
    //Graph setup

    myGraph = new Graph(this); //create a new Graph
    myGraph.showLabels = true; //show labels in nodes
    myGraph.fixColor = true; //do not allow the user to change the color during runtime
    myGraph.createRelations = false; //do not allow the user to add edges during runtime 

    //Initiate timers
    system_timer = new Timer();
    consensus_timer = new Timer();

}

void draw()
{

  //case a node is requesting connection with the application

  if (serial_flag_1 == true) 
  {
    serial_case_1(reconnection); 
    serial_flag_1 = false; //flag is switched
  }
    
  //case nodes are synced and are sending links data for first time
    
  else if (serial_flag_2 == true)
  {
    serial_case_2();
    serial_flag_2 = false; //flag is switched
  }

  else if (serial_flag_3 == true)
  {
    serial_case_3();
    serial_flag_3 = false;
  }

  //case the application received in-neighbors data, consensus results or a regD signal
    
  else if (serial_flag_4 == true)
  {
    serial_case_4();
    serial_flag_4 = false; //flag is switched
  }

  //case a node was offline and is trying to reconnect

  else if (serial_flag_5 == true)
  {
    serial_case_5();
    serial_flag_5 = false;
  }

  else if (serial_flag_6 == true)
  {
    serial_case_6();
    serial_flag_6 = false;
  }

  //system timer is running

  if (system_timer.running == true) 
  {
    system_timer.update();
    if (system_timer.time_elapsed > 5) //more than 5 seconds with no answer means the node is either down or offline
    {
      println("node " + connected_nodes[controller-1] + " is offline");
      if ((checkNode(controller) == false) && ((cyber_nodes[controller-1].down == false) && (cyber_nodes[controller-1].offline == false)))
      { 
        try //if the node is up
        {
          myPort[controller].stop(); //this closes the port
          myPort[controller] = new Serial(this, serial_list[controller], 38400); //opens port back
          myPort[controller].bufferUntil('\n'); 
          cyber_nodes[controller-1].down = false;
          cyber_nodes[controller-1].offline = true;
        }
        catch (Exception e) //if the node is down, the serial function gets an error
        {
          println("node " + connected_nodes[controller-1] + " is down");
          cyber_nodes[controller-1].down = true;
          cyber_nodes[controller-1].offline = true;
        }
      }

      else if (cyber_nodes[controller-1].down == true)
      {
        println("restarting node");
        try //if the node is up
        {
          myPort[controller].stop(); //this closes the port
          myPort[controller] = new Serial(this, serial_list[controller], 38400); //opens port back
          myPort[controller].bufferUntil('\n'); 
          cyber_nodes[controller-1].down = false;
        }
        catch (Exception e) //if the node is down, the serial function gets an error
        {
          println("node " + connected_nodes[controller-1] + " is down");
        }
      }

      controller++; //continue with next node
      if (controller < maxnode + 1)
      {
        myPort[controller].write("C"); //notify node
        checkGraph = true; //flag to indicate that in-neighbors vector of next node must be checked 
      }

      else 
      {
        getregd = true;
        controller = 1; //back to node 1 (leader)
        system_timer.stop();
        stack = true; //ready to plot

        if ((lineGraphValues_buffer[0][0] > LineGraph.yMax || lineGraphValues_buffer[0][0] < LineGraph.yMin) && capture == false) //change scale to notice consensus differences
        {         
         LineGraph.yMax=int(lineGraphValues_buffer[0][0] + 0.5); 
         LineGraph.yMin=int(lineGraphValues_buffer[0][0] - 0.5);
        }
      }

      system_timer.restart();
        
    }
  } 

  //make the background color gray

  background(211, 211, 211);

  //print clock

  clock.setText("  "+str(hour())+":"+str(minute())+":"+str(second())); //real time clock

  //////////////GUI tabs///////////////////

  //case the plot mode button was pressed

  if (ratio == true)
  {
    cp5.get("Capture").show(); //show capture waveform button
    print_ratio();
  }
  
  else
  {
    cp5.get("Capture").hide(); //hide capture button
  }
  
  //case the animation mode button was pressed

  if (animation == true) 
  {
    print_animation();
  }
  
  //case graph mode button is pressed 

  if (graph == true)
  {
    print_graph();
  }
  
  //case reset button is pressed 

  if (reset == true)
  {
    reset_connection();
    system_timer.stop();
  }

  //case the user clicks start button

  if (run == true & started == false)
  {
    run();
  }

}

//main function for serial communication control, this is called each time a package is received 

public void serialEvent( Serial myPort) 
{
  //put the incoming data into a String 
  //the '\n' is our end delimiter indicating the end of a complete packet
  val = myPort.readStringUntil('\n');

  if (val != null) //make sure package isn't empty before continuing
  {
    val = trim(val); //trim whitespace and formatting characters (like carriage return)
    
    if (reconnection == true) //only active if reconnection button was clicked
    {
      println(val);
      if (com == false) 
      {
        if (val.equals("A")) //look for our 'A' char to start the communication
        {
          myPort.clear();
          com = true; //a controller is requesting reconnection
          myPort.write("D");
          println("contact");
        }
      }
      else
      {
        if (str(val.charAt(0)).equals("R"))
        {
          serial_flag_1 = true; //a controller was reconnected
          com = false; //to wait for connection of next controller
        }
      }
    }
    
    else if (all_nodes == false) //true after GUI gets answer from all the nodes
    {
      if (com == false) //if contact is established with controller
      {
        if (val.equals("A")) //look for 'A' char to start the communication
        {
          com = true;
          println("contact with node " + controller);
          myPort.write("A");
          myPort.clear();
        }
      }
      else //contact was established now I need its name 
      { 
        if (val.equals("A")) //this prevents from getting wrong information at start of connection
        {
        }
        else
        {
          //if we've already established contact with controller, obtain the node id
          println(val);
          serial_flag_1 = true; //flag to register the node in the graph
          com = false; //flag to wait for connection of next node
        }
      }
      delay(100); //wait to get next serial interruption
    }

    else if (all_links == false) //true after sync procedure is succesful and GUI gets in-neighbors data
    {
      if (val.equals("s")) //leader wants to start sync
      {
        myPort.clear();
        myPort.write("s");
        println("Requesting synchronization...");
      }

      else if (val.equals("d")) // sync successful
      {
        println("All nodes are synced!");
        myPort.clear();
        if (reconnected == true) //it's true when the system just got reconnected and synced
        {
          reconnected = false;
          println("Ready for regd signal"); //ready to get first regD signal
          getregd = true; //ready for regd signal
          //newrequest = false;
          all_links = true;
          start_animation = true; //start the animation in plot mode back
        }
        else
        {
          myPort.write("B"); //ready to start getting in-neighbors data, this is sent to leader node
        }
      }

      else if (val.equals("B")) //it gets B when the controller request action from PC
      {
        enter_in_neighbors = false;
        serial_flag_2 = true;
      }

      else
      {
        enter_in_neighbors = true;
        serial_flag_2 = true;
      }
      delay(100);
    }
    
    else //this conditions runs continously at every execution of the ratio-concensus algortihm
    {
      println(val);
      
      if (val.equals("A")) //meaning the node restarted
      {
        delay(50);
        myPort.clear();
        myPort.write("D");
      }

      else if (str(val.charAt(0)).equals("R")) //meaning the node reconnected
      {
        println("node reconnected");  
        serial_flag_5 = true;
      }

      else if (val.equals("D")) //letter "D" is received before getting regd signal from external application (for example MATLAB)
      {
        if (getregd == true)
        {
          println("new regd signal");
          consensus_timer.start();
          ignorenext = false;
        }  
        else
        {
          ignorenext = true; //ignore next value regd value obtained serially
        }
      }

      else if (getregd == true) //reg D signal received and system is ready
      {
        serial_flag_3 = true;
      }

      else if ((ignorenext == true) && (float(val) <= 1 && float(val) >= -1)) //reg D signal received but ignored (not sent to leader node)
      {
        ignorenext = false;
      }

      else if (val.equals("end")) //leader node indicates the end of concensus round
      {
        consensus_timer.update();
        println("Initial response time: " + consensus_timer.time_elapsed + "s");
        consensus_timer.stop();
      }

      else if (checkGraph == true && val.equals("send") == false) //in-neighbors information received from controller
      {
        if (cyber_nodes[controller-1].in_neighbors != val)
        {
          cyber_nodes[controller-1].in_neighbors = val; //update in_neighbors vector 
          cyber_nodes[controller-1].offline = false; //acknowledge that the node is online
        }
        checkGraph = false;
      }

      else if (val.equals("send")) //signal from leader node only, meaning is requesting a regD signal
      {
        delay(50);
        myPort.clear();
        myPort.write(str(regDval)); //send the last registered regD signal to the leader node
      }

      else if (val.equals("next"))
      {
        serial_flag_4 = true;
      }

      else //last conditions possible is data of ratio-concensus from a node  
      {
        serial_flag_6 = true;
      }

      delay(10);
    }
  }
}


void setAnimationCoordinates()
{
  for (int i = 1; i < 6; i++)
  {
    rad = (650*450)/(sqrt(pow(650*sin(radians(90 - 30*i)),2) + pow(450*cos(radians(90 - 30*i)), 2))); 
    
    xPos = rad*cos(radians(90 - 30*i));
    xPos2 = pow(xPos,2);
    
    if (i < 4)
    {
      yPos = 535 - 450*sqrt(1 - (xPos2)/(650*650));
    } 
    else
    {
      yPos = 535 + 450*sqrt(1 - (xPos2)/(650*650));
    }
    
    coordinates [2*i - 2][0] = 1100 - xPos; //node 2i-1 position x
    coordinates [2*i - 2][1] = yPos; //node 2i-1 position y
    coordinates [2*i - 1][0] = 1100 + xPos; //node 2i position x
    coordinates [2*i - 1][1] = yPos; //node 2i position y
  }
}

void setChartSettings() 
{
  LineGraph.xLabel=" Samples ";
  LineGraph.yLabel="RC results (scaled by 1000)";
  LineGraph.Title="";  
  LineGraph.xDiv=10; 
  //LineGraph.yDiv=10;  
  LineGraph.xMax=0; 
  LineGraph.xMin=-100;  
  LineGraph.yMax=int(getPlotterConfigString("lgMaxY")); 
  LineGraph.yMin=int(getPlotterConfigString("lgMinY"));
}   


void writeBuffer(int index, String data)
{
  boolean endofval = false;
  int in = 0; //saves initial position of substring
  int fin = 0; //saves final position of substring
  String str = "";
  for (int k=0; k < lineGraphValues_buffer[index].length; k++) //
  {
    while (endofval == false)
    {
      try 
      {
          
        if (!str(data.charAt(fin)).equals(";"))
        {
          fin++;
        }

        else
        {
          str = data.substring (in, fin-1);
          lineGraphValues_buffer[index][k] = float(str); 
          fin++;
          in = fin;
          endofval = true;
        }
      }
      catch (Exception e)
      {

      }
    }
    endofval = false;
  }
}


//This triggers when the user changes parameters in the plot object

void controlEvent(ControlEvent theEvent) 
{
  if (theEvent.isAssignableFrom(Textfield.class)) 
  {
    String parameter = theEvent.getName();
    String value = "";
    if (theEvent.isAssignableFrom(Textfield.class)) value = theEvent.getStringValue();

    plotterConfigJSON.setString(parameter, value);
    saveJSONObject(plotterConfigJSON, topSketchPath+"/plotter_config.json");
    setChartSettings();
  }
}

void enterVector(int index, String vector)
{
  for (int j = 0; j < maxnode; j++)
  {
    if (str(vector.charAt(j)).equals("2")) myGraph.get("Node " + (j+1)).addEdge(myGraph.get(nodes[index]), 1f);
  } 
}


boolean checkNode(int index)
{
  for (int j = 0; j < maxnode; j++)
  {
    if ((int(str(cyber_nodes[j].in_neighbors.charAt(index-1))) == 1) && j != index - 1)
    {
        return false;
    }
  }
  return true;
}


public void RatioConsensus() 
{
  if (ratio == false)
  {
    ratio = true;
    animation = false;
    graph = false;
  }
}

public void Communication() 
{
  if (animation == false)
  {
    animation = true;
    ratio = false;
    graph = false;
  }
}

public void Graph() 
{
  if (graph == false)
  {
    graph = true;
    animation = false;
    ratio = false;
  }
}

public void ResetConnection() 
{
  if (reset == false)
  {
    reset = true;
  }
}


public void Run() 
{
  if (run == false)
  {
    run = true;
  }
}

public void Capture() 
{
  if (capture == false)
  {
    for (int i = 0; i<lineGraphValues.length; i++) 
    {
      arrayCopy(lineGraphValues[i], lineGraphValues_capture[i]);        
    }
    capture = true;
    //b.setOn();
  }
  
  else
  {
    capture = false;
    //b.setOff();
  }
}

// get GUI settings from settings file
String getPlotterConfigString(String id) 
{
  String r = "";
  try 
  {
    r = plotterConfigJSON.getString(id);
  } 
  catch (Exception e) 
  {
    r = "";
  }
  return r;
}



