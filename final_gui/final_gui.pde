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

int maxnode = 10; //number of max expected number of connected nodes, change this value depending of the size of the network

//some objects to control animations and communications

Graph myGraph;  //the graph object, it shows links and edges in the network, each node has a corresponding color reference
ControlP5 cp5; //GUI object to create graphic elements
Serial[] myPort = new Serial[maxnode + 1];  //array of serial objects, this handles serial communication with Arduino devices and MATLAB
MessageSystem[] ms = new MessageSystem[maxnode]; //array of message systems, 1 message system corresponds to 1 node in the network, each message system has links to other message systems (based on the links in the network)
CyberNode[] cyber_nodes = new CyberNode[maxnode]; //array of cyber node objects, these objects have information of the current state of the cyber nodes

//global variables and arrays

float [][] coordinates = new float[10][2]; //matrix that registers the coordinates of the nodes in the animation, coordinates[node id][x,y coordinates]
int[][] myGraphMatrix = new int[maxnode][maxnode]; //matrix that registers the graph, e.g. myGraphMatrix[0] --> (2, 0, 2, 1) indicates that node "1" is connected to node "3" and "4", not connected to node "2" and that node "4" is offline 
int[] connected_nodes = new int[maxnode]; //array of connected controllers reference indexes 
String [] nodes = new String[maxnode];
int node_pos = 0; //used to initially locate the nodes in graph mode in different positions
int nodecount = 0; //records the number of controllers connected to the network, the leader node is assumed to be always connected, this variable changes at the initialization of the network depending of how many controllers initially respond
int i = 0; //this global variable always references to the controller that is currently communicating serially with the application
String val; //string with information obtained via serial communication
String[] serial_list = {"COM3","COM53","COM54","COM52","COM55","COM51","COM56","COM50","COM16","COM15","COM46"}; //list of serial COM ports in the network
color[] graphColors = {color(255,0,0),color(255,127,0),color(255,255,0),color(0,255,0),color(0,0,255),color(75,0,130),color(148,0,211),color(218,165,32),color(255,20,147),color(0,255,255)}; //list of refernce color for the nodes
float regDval = 0; //current reg D value to be sent to leader node

//boolean flags used to control the flow of serial communication and GUI

boolean com = false; //flag that informs of a new controller communicating during the initialization
boolean newconnection = false; //flag that informs of a new node connecting with the application
boolean all_nodes = false; //flag that informs that all edges in the graph have been registered
boolean newrequest = false; //flag that informs of a new link to be added to an edge
boolean nextconnection = false; //flag that informs that all the links information from an edge have been registered
boolean create_animation = false; //flag used to start the animation that represents the graph of the network
boolean indata = false; //flag to indicate some information is coming from a node
boolean checkGraph = false; //flag to indicate that the graph must be checked for changes 
boolean updateNode = false; //flag to indicate a node es requesting reconnection 
boolean getregd = false; //flag to indicate that system is available to get a new regulation signal
boolean ignorenext = false; //flag to indicate that a regd signal value must be ignored
boolean start_animation = false; //flag to indicate the animation is ready to be started
boolean reconnection = false; //true when user requests reconnecting the arduino devices
boolean reconnected = false; //true when a reconnection took place in the system but it hasn't synced

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
    
    //graph matrix init
    for (int i = 0; i<maxnode; i++)
    {
      for (int j = 0; j<maxnode; j++)
      {
        myGraphMatrix[i][j] = 0;
      }
    }
    
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

    //every message system object corresponds to a different node in the system
    for (int i=0; i < maxnode; i++)
    {
      ms[i] = new MessageSystem();
    }    
    
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

  //case a node was offline and is trying to reconnect

  if (updateNode == true)
  {
    //myGraphMatrix[int(str(val.charAt(1))) - 1][int(str(val.charAt(1))) - 1] = 1; //node connected but not recognized
    for (int j = 0; j < maxnode; j++)
    {
      if (cyber_nodes[j].id == int(str(val.charAt(1))))
      {
        cyber_nodes[j].down = false;
      }
    }
    updateNode = false;
  }
  
  //case a node is requesting connection with the application

  if (newconnection == true) 
  {
    if (reconnection == false) //meaning it is the first time the control is initialized
    {
      myGraph.put("Node " + val, new Node(400 + node_pos, 540, 35, 70, graphColors[nodecount])); //creates a new node in the graph in graph mode, new Node(x position, y position, siez, size, color)
      connected_nodes[nodecount] = int(val); //registers the id of the node connecting with the application
      nodes[nodecount] ="Node " + val;
      // myGraphMatrix[int(val)-1][int(val)-1] = 2; //the graph matrix is updated
      // ms[nodecount].origin = new PVector(coordinates[connected_nodes[nodecount]-1][0], coordinates[connected_nodes[nodecount]-1][1]); //creates a new node in the graph in animation mode
      // ms[nodecount].c = graphColors[nodecount]; //asigns a color to the node in animation mode
      // ms[nodecount].hide = false; //the node is hidden until all the nodes in the graph are registered and synced
      cyber_nodes[nodecount].init(int(val), graphColors[nodecount], coordinates[connected_nodes[nodecount]-1][0], coordinates[connected_nodes[nodecount]-1][1], maxnode);
      node_pos = node_pos + 160; //update initial x position for the nodes in graph mode
      nodecount++; //update number of registered nodes
      i++; //i = current node trying to conect
      
      if (i < maxnode + 1) //maxnode + MATLAB = number of serial connections 
      {
        try
        {
          myPort[i] = new Serial(this, serial_list[i], 38400); //initialize new serial port and set the baud rate to 38400
        }

        catch (RuntimeException e)
        {
        }
      }

      else //all nodes registered
      {
        i = 1; //back to node 1 (leader)
        myPort[i].clear();
        myPort[i].write("B"); //signal the leader node so it starts syncing procedure
        println("Start of sync procedure"); 
        all_nodes = true; //all nodes were initially registered
      }
    }
    
    else //in case the user requested a reconnection and resync
    {
      cyber_nodes[nodecount-1].down = false;
      i++; //i = current node trying to conect
      
      if (i < maxnode + 1)
      {
        myPort[i] = new Serial(this, serial_list[i], 38400); //initialize new serial port and set the baud rate to 38400
        nodecount++; //update number of registered nodes
      }
      
      else 
      {
        i = 1; //back to node 1 (leader)
        myPort[i].clear();
        myPort[i].write("B"); //signal the leader node so it starts syncing procedure
        println("Start of sync procedure");
        reconnection = false;
        reconnected = true;
        all_nodes = true; //all nodes were initially registered
      }
    } 
    
    newconnection = false; //flag is switched
  }
    
  //case nodes are synced and are sending links data for first time
    
  else if (newrequest == true)
  {
    if (nextconnection == false) //meaning node i sent links information
    {
      cyber_nodes[i-1].offline = false;
      cyber_nodes[i-1].in_neighbors = val;
      enterVector(i - 1, val); //enter in-neighbors vector from node i
      println(val);
    }
    else //in-neighbors vector registered and now talk to next node in the graph
    {
      i++;
      if (i < nodecount + 1)
      {
        myPort[i].clear();
        myPort[i].write("B"); //request in-neighbors information from node i
        println("Requesting edge info");
        nextconnection = false; //ready to start getting links info from node i + 1
      }
        
      else //all the information of the graph was obtained 
      { 
        println("Ready for regd signal"); //ready to get first regD signal
        i = 1; //back to node 1 (leader)
        getregd = true; //ready for regd signal
        create_animation = true; //create animation
        start_animation = true; //ready to show animation and activate timer
        checkGraph = true; //check for in-neighbors vector changes in leader node
      }
    }
    newrequest = false; //flag is switched
  }

  //case the application received in-neighbors data, consensus results or a regD signal
    
  else if (indata == true)
  {
    system_timer.start(); //start system timer

    if (val != null)
    {
      if (val.equals("send")) //signal from leader node only, meaning is requesting a regD signal
      {
         myPort[i].write(str(regDval)); //send the last registered regD signal to the leader node
      }
    
      else if (val.equals("next")) //ready to receive information from next node
      {  
        i++;
        if (i == maxnode + 1) //ready to plug the data into the plot
        {
          i = 1;
          stack = true; //buffer is full, so data can be transfered to plot
          getregd = true; //ready to get a new regulation signal
          println("here");

          if ((lineGraphValues_buffer[0][0] > LineGraph.yMax || lineGraphValues_buffer[0][0] < LineGraph.yMin) && capture == false) //change scale to notice consensus differences
          {         
           LineGraph.yMax=int(lineGraphValues_buffer[0][0] + 1); 
           LineGraph.yMin=int(lineGraphValues_buffer[0][0] - 1);
          }

          system_timer.stop();
        }  

        else 
        {
          delay(50);
          myPort[i].write("C"); //ready to receive data from next node
          system_timer.start();
          checkGraph = true; //flag to indicate in-neighbors vector of next node must be checked 
        }
      }

      else
      {
        println(float(val));
        if (getregd == true) //if system is ready for new regD signal, value was received serially 
        {
          //println("l 462");
          regDval = float(val); //assign received value
          getregd = false; //ignore next coming regD signals until control system is ready
          checkGraph = true; //flag to indicate that in-neighbors vector of next node must be checked (next node is the leader node) 
          delay(50);
          myPort[i].write("C"); //this goes to leader node to acknowledge the most recent regD signal was registered  
        }
        
        else  
        {
          if (float(val) <= 1 && float(val) >= 0) //this is used to filter out regD signals when the system is not ready (*NOT COMPLETELY WORKING*)
          {
            println("l 474");
          } 
          else 
          {
            writeBuffer(i - 1, val); //input consensus results in the plot buffer
          }
        }
      }
       
    } 

    indata = false; //flag is switched
  }

  //system timer is running

  if (system_timer.running == true) 
  {
    system_timer.update();
    if (system_timer.time_elapsed > 25) //more than 25 seconds with no answer means the node is either down or offline
    {
      println("node " + connected_nodes[i-1] + " is offline");
      cyber_nodes[i-1].offline = true;
      if ((checkNode(i) == false) && (myGraphMatrix[i-1][i-1] == 2)) //means node is down or was reconnected, but port is closed
      { 
        try //if the node is up
        {
          myPort[i].stop(); //this closes the port
          myPort[i] = new Serial(this, serial_list[i], 38400); //opens port back
          myPort[i].bufferUntil('\n'); 
        }
        catch (Exception e) //if the node is down
        {
          //updateNodeAnimation(i);
          cyber_nodes[i-1].down = true;
        }
      }

      i++; //continue with next node
      if (i < maxnode + 1)
      {
        system_timer.restart();
      }

      else 
      {
        i = 1; //back to node 1 (leader)
        system_timer.stop();
        stack = true; //ready to plot

        if ((lineGraphValues_buffer[0][0] > LineGraph.yMax || lineGraphValues_buffer[0][0] < LineGraph.yMin) && capture == false) //change scale to notice consensus differences
        {         
         LineGraph.yMax=int(lineGraphValues_buffer[0][0] + 0.5); 
         LineGraph.yMin=int(lineGraphValues_buffer[0][0] - 0.5);
        }
      }

      system_timer.restart();
      myPort[i].write("C"); //notify node
      checkGraph = true; //flag to indicate that in-neighbors vector of next node must be checked 
        
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
    textSize(20);
    myGraph.render(); //just plot the graph
  }
  
  //case reset button is pressed 

  if (reset == true)
  {
    reset_connection();
    system_timer.stop();
  }

  //case the user clicks start button

  if (run == true)
  {
    i=1;
    myPort[i] = new Serial(this, serial_list[i], 38400);
    run = false;
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
          com = true; //a controller is requesting reconnected
          myPort.write("D");
          println("contact");
        }
      }
      else
      {
        if (str(val.charAt(0)).equals("R"))
        {
          newconnection = true; //a controller was reconnected
          com = false; //to wait for connection of node i + 1
        }
      }
    }
    
    else if (all_nodes == false) //true after GUI gets answer from all the nodes
    {
      if (com == false) //if contact is established with node i
      {
        if (val.equals("A")) //look for 'A' char to start the communication
        {
          com = true;
          println("contact with node " + i);
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
          //if we've already established contact with node i, obtain the node id
          println(val);
          newconnection = true; //flag to register the node in the graph
          com = false; //flag to wait for connection of next node
        }
      }
      delay(100); //wait to get next serial interruption
    }
    
    else 
    {
      if (nextconnection == false) //true after sync procedure is succesful and GUI gets in-neighbors data
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
            newrequest = false;
            nextconnection = true;
            start_animation = true; //start the animation in plot mode back
          }
          else
          {
            myPort.write("B"); //ready to start sending information about in-neighbors, this is sent to leader node
          }
        }

        else if (val.equals("B")) //it gets B when node i request action from PC
        {
          nextconnection = true;
          newrequest = true;
        }

        else // "val" is vector of in-neighbors 
        {
          newrequest = true;
        }

        delay(100);
      }
      
      else
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
          updateNode = true;
          //myGraphMatrix[int(val.charAt(1)) - 1][int(val.charAt(1)) - 1] = 1; //node connected but not recognized
        }

        
        else if (val.equals("D")) //letter "D" is received before getting regd signal from external application (f.e. MATLAB)
        {
          if (getregd == true)
          {
            println("new regd signal");
            consensus_timer.start();
            ignorenext = false;
          }  
          else
          {
            ignorenext = true;
          }
        }

        else if (getregd == true) //reg D signal received
        {
          indata = true; 
        }

        else if ((ignorenext == true) && (float(val) <= 1 && float(val) >= 0)) //reg D signal received but ignored (not sent to leader node)
        {
          ignorenext = false;
        }

        else if (val.equals("end")) //leader node indicates the end of concensus round
        {
          consensus_timer.update();
          println("Initial response time: " + consensus_timer.time_elapsed + "s");
          consensus_timer.stop();
        }

        else if (checkGraph == true && val.equals("send") == false) //in-neighbors information received from node i
        {
          /*if (checkGraphMatrix(i - 1, val) == false) //check if in-neighbors vector of node i changed since last round 
          {
            updateVector(i - 1, val); //update vector
            updateAnimation(i - 1);
          }*/
          if (cyber_nodes[i].in_neighbors != val)
          {
            cyber_nodes[i].in_neighbors = val; //update in_neighbors vector 
          }
          checkGraph = false;
        }

        else //"val" = string of ratio concensus results for
        {
          indata = true; 
        }

        //println("here");
        delay(10);
      }
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

void updateVector(int index, String vector)
{
  for (int j = 0; j < maxnode; j++)
  {
    myGraphMatrix[connected_nodes[index]-1][j] = int(str(vector.charAt(j))); //status data of in-neighbor
  } 
}

void updateNodeStatus(String data)
{
  myGraphMatrix[int(data.charAt(1)) - 1][int(data.charAt(1)) - 1] = 1; //node connected but not recognized
}

boolean checkGraphMatrix(int index, String vector)
{
  for (int j = 0; j < maxnode; j++)
    {
      if (myGraphMatrix[connected_nodes[index]-1][j] != int(str(vector.charAt(j)))) //compare current vector to previous vector
      {
        return false;
      }
    }
    return true;
}

boolean checkNode(int index)
{
  for (int j = 0; j < maxnode; j++)
  {
    if ((myGraphMatrix[j][index - 1] == 1) && j != index - 1)
    {
        return false;
    }
  }
  return true;
}

void updateAnimation(int index)
{
  for (int j = 0; j < maxnode; j++)
  {
    if (myGraphMatrix[connected_nodes[index]-1][j] == 1)
    {
      ms[connected_nodes[j]-1].hide = true;
      Message m = ms[connected_nodes[index]-1].messages.get(j);
      if (m.hide == false) //meaning there was a previous link active
      {
        m.hide = true; //hide the link
        //myGraph.get("Node " + (j+1)).getEdge(index).visible = false;
      }
    }

    else if (myGraphMatrix[connected_nodes[index]-1][j] == 2)
    {
      myGraphMatrix[j][j] = 2; //update node status to up and synced
      ms[connected_nodes[j]-1].hide = false;
      Message m = ms[connected_nodes[index]-1].messages.get(j);
      if (m.hide == true) //meaning the link was hidden due to disconnection of node
      {
        m.hide = false; //show link again
      }
    }
  }
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

void node_down (int node_id)
{
  ms[node_id].hide = true;
}

void node_off (int node_id)
{
  ms[node_id].hide = true;
}


