import processing.core.*; 
import processing.data.*; 
import processing.event.*; 
import processing.opengl.*; 

import java.awt.Frame; 
import java.awt.BorderLayout; 
import muehlseife.correlations.*; 
import controlP5.*; 
import processing.serial.*; 
import java.io.*; 

import java.util.HashMap; 
import java.util.ArrayList; 
import java.io.File; 
import java.io.BufferedReader; 
import java.io.PrintWriter; 
import java.io.InputStream; 
import java.io.OutputStream; 
import java.io.IOException; 

public class final_gui extends PApplet {

/**************************************************************************

GUI for cyber layer - Microgrid Controller-HIL Testbed
Created: 08/01/2018
By: Oscar Azofeifa
Version 1.0
Serial communication with Arduino and MATLAB 

*************************************************************************/ 
//libraries



 //library containing objects for fast creation of edges and nodes 
 // library used to created graphical elements for the GUI (buttons, text boxes..)
 //library containing functions for serial communication with controlers


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
int controller = 0; //this global variable always references to the controller that is currently communicating serially with the application
String val; //string with information obtained via serial communication
String[] serial_list = {"COM3","COM53","COM54","COM52","COM55","COM51","COM56","COM50","COM16","COM15","COM46"}; //list of serial COM ports in the network
int[] graphColors = {color(255,0,0),color(255,127,0),color(255,255,0),color(0,255,0),color(0,0,255),color(75,0,130),color(148,0,211),color(218,165,32),color(255,20,147),color(0,255,255)}; //list of refernce color for the nodes
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


public void setup()
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

public void draw()
{

  //case a node was offline and is trying to reconnect

  if (updateNode == true)
  {
    //myGraphMatrix[int(str(val.charAt(1))) - 1][int(str(val.charAt(1))) - 1] = 1; //node connected but not recognized
    for (int j = 0; j < maxnode; j++)
    {
      if (cyber_nodes[j].id == PApplet.parseInt(str(val.charAt(1))))
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
      connected_nodes[nodecount] = PApplet.parseInt(val); //registers the id of the node connecting with the application
      nodes[nodecount] ="Node " + val;
      cyber_nodes[nodecount].init(PApplet.parseInt(val), graphColors[nodecount], coordinates[connected_nodes[nodecount]-1][0], coordinates[connected_nodes[nodecount]-1][1], maxnode);
      node_pos = node_pos + 160; //update initial x position for the nodes in graph mode
      nodecount++; //update number of registered nodes
      controller++; 
      
      if (controller < maxnode + 1) //maxnode + external application  = number of serial connections 
      {
        try
        {
          myPort[controller] = new Serial(this, serial_list[controller], 38400); //initialize new serial port and set the baud rate to 38400
        }

        catch (RuntimeException e)
        {
        }
      }

      else //all nodes registered
      {
        controller = 1; //back to node 1 (leader)
        myPort[controller].clear();
        myPort[controller].write("B"); //signal the leader node so it starts syncing procedure
        println("Start of sync procedure"); 
        all_nodes = true; //all nodes were initially registered
      }
    }
    
    else //in case the user requested a reconnection and resync
    {
      cyber_nodes[nodecount-1].down = false;
      controller++; //current node trying to conect
      
      if (controller < maxnode + 1)
      {
        myPort[controller] = new Serial(this, serial_list[controller], 38400); //initialize new serial port and set the baud rate to 38400
        nodecount++; //update number of registered nodes
      }
      
      else 
      {
        controller = 1; //back to node 1 (leader)
        myPort[controller].clear();
        myPort[controller].write("B"); //signal the leader node so it starts syncing procedure
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
    if (nextconnection == false) //meaning current node sent links information
    {
      cyber_nodes[controller - 1].offline = false;
      cyber_nodes[controller - 1].in_neighbors = val;
      enterVector(controller - 1, val); //enter in-neighbors vector from current controller
      println(val);
    }
    else //in-neighbors vector registered and now talk to next node in the graph
    {
      controller++;
      if (controller < nodecount + 1)
      {
        myPort[controller].clear();
        myPort[controller].write("B"); //request in-neighbors information from current controller
        println("Requesting edge info");
        nextconnection = false; //ready to start getting links info from next controller
      }
        
      else //all the information of the graph was obtained 
      { 
        println("Ready for regd signal"); //ready to get first regD signal
        controller = 1; //back to node 1 (leader)
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
         myPort[controller].write(str(regDval)); //send the last registered regD signal to the leader node
      }
    
      else if (val.equals("next")) //ready to receive information from next node
      {  
        println(controller);
        controller++;
        if (controller == maxnode + 1) //ready to plug the data into the plot
        {
          controller = 1;
          stack = true; //buffer is full, so data can be transfered to plot
          getregd = true; //ready to get a new regulation signal
          println("here");

          if ((lineGraphValues_buffer[0][0] > LineGraph.yMax || lineGraphValues_buffer[0][0] < LineGraph.yMin) && capture == false) //change scale to notice consensus differences
          {         
           LineGraph.yMax=PApplet.parseInt(lineGraphValues_buffer[0][0] + 1); 
           LineGraph.yMin=PApplet.parseInt(lineGraphValues_buffer[0][0] - 1);
          }

          system_timer.stop();
        }  

        else 
        {
          delay(50);
          myPort[controller].write("C"); //ready to receive data from next node
          system_timer.start();
          checkGraph = true; //flag to indicate in-neighbors vector of next node must be checked 
        }
      }

      else
      {
        println(PApplet.parseFloat(val));
        if (getregd == true) //if system is ready for new regD signal, value was received serially 
        {
          //println("l 462");
          regDval = PApplet.parseFloat(val); //assign received value
          getregd = false; //ignore next coming regD signals until control system is ready
          checkGraph = true; //flag to indicate that in-neighbors vector of next node must be checked (next node is the leader node) 
          delay(50);
          myPort[controller].write("C"); //this goes to leader node to acknowledge the most recent regD signal was registered  
        }
        
        else  
        {
          if (PApplet.parseFloat(val) <= 1 && PApplet.parseFloat(val) >= 0) //this is used to filter out regD signals when the system is not ready (*NOT COMPLETELY WORKING*)
          {
            println("l 361");
          } 
          else 
          {
            writeBuffer(controller - 1, val); //input consensus results in the plot buffer
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
      println("node " + connected_nodes[controller-1] + " is offline");
      cyber_nodes[controller-1].offline = true;
      if ((checkNode(controller) == false) && (myGraphMatrix[controller-1][controller-1] == 2)) //means node is down or was reconnected, but port is closed
      { 
        try //if the node is up
        {
          myPort[controller].stop(); //this closes the port
          myPort[controller] = new Serial(this, serial_list[controller], 38400); //opens port back
          myPort[controller].bufferUntil('\n'); 
        }
        catch (Exception e) //if the node is down
        {
          cyber_nodes[controller-1].down = true;
        }
      }

      controller++; //continue with next node
      if (controller < maxnode + 1)
      {
        system_timer.restart();
      }

      else 
      {
        controller = 1; //back to node 1 (leader)
        system_timer.stop();
        stack = true; //ready to plot

        if ((lineGraphValues_buffer[0][0] > LineGraph.yMax || lineGraphValues_buffer[0][0] < LineGraph.yMin) && capture == false) //change scale to notice consensus differences
        {         
         LineGraph.yMax=PApplet.parseInt(lineGraphValues_buffer[0][0] + 0.5f); 
         LineGraph.yMin=PApplet.parseInt(lineGraphValues_buffer[0][0] - 0.5f);
        }
      }

      system_timer.restart();
      myPort[controller].write("C"); //notify node
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
    controller=1;
    myPort[controller] = new Serial(this, serial_list[controller], 38400);
    run = false;
  }

}

//main function for serial communication control, this is called each time a package is received 

public void serialEvent( Serial myPort) 
{
  //put the incoming data into a String 
  //the '\n' is our end delimiter indicating the end of a complete packet
  val = myPort.readStringUntil('\n');
  
  //try
  //{
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
          newconnection = true; //a controller was reconnected
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

        else if (val.equals("B")) //it gets B when the controller request action from PC
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

        else if ((ignorenext == true) && (PApplet.parseFloat(val) <= 1 && PApplet.parseFloat(val) >= 0)) //reg D signal received but ignored (not sent to leader node)
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
          if (cyber_nodes[controller].in_neighbors != val)
          {
            cyber_nodes[controller].in_neighbors = val; //update in_neighbors vector 
          }
          checkGraph = false;
        }

        else if (val.equals("next"))//"val" = string of ratio concensus results for
        {
          indata = true;
        }

        else  
        {
          indata = true;
        }

        //println("here");
        delay(10);
      }
    }
  }
  //}

  //catch (Exception e)
  //{

  //}
}


public void setAnimationCoordinates()
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

public void setChartSettings() 
{
  LineGraph.xLabel=" Samples ";
  LineGraph.yLabel="RC results (scaled by 1000)";
  LineGraph.Title="";  
  LineGraph.xDiv=10; 
  //LineGraph.yDiv=10;  
  LineGraph.xMax=0; 
  LineGraph.xMin=-100;  
  LineGraph.yMax=PApplet.parseInt(getPlotterConfigString("lgMaxY")); 
  LineGraph.yMin=PApplet.parseInt(getPlotterConfigString("lgMinY"));
}   


public void writeBuffer(int index, String data)
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
          lineGraphValues_buffer[index][k] = PApplet.parseFloat(str); 
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

public void controlEvent(ControlEvent theEvent) 
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

public void enterVector(int index, String vector)
{
  for (int j = 0; j < maxnode; j++)
  {
    if (str(vector.charAt(j)).equals("2")) myGraph.get("Node " + (j+1)).addEdge(myGraph.get(nodes[index]), 1f);
  } 
}

public void updateVector(int index, String vector)
{
  for (int j = 0; j < maxnode; j++)
  {
    myGraphMatrix[connected_nodes[index]-1][j] = PApplet.parseInt(str(vector.charAt(j))); //status data of in-neighbor
  } 
}

public void updateNodeStatus(String data)
{
  myGraphMatrix[PApplet.parseInt(data.charAt(1)) - 1][PApplet.parseInt(data.charAt(1)) - 1] = 1; //node connected but not recognized
}

public boolean checkGraphMatrix(int index, String vector)
{
  for (int j = 0; j < maxnode; j++)
    {
      if (myGraphMatrix[connected_nodes[index]-1][j] != PApplet.parseInt(str(vector.charAt(j)))) //compare current vector to previous vector
      {
        return false;
      }
    }
    return true;
}

public boolean checkNode(int index)
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

public void updateAnimation(int index)
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
public String getPlotterConfigString(String id) 
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

public void node_down (int node_id)
{
  ms[node_id].hide = true;
}

public void node_off (int node_id)
{
  ms[node_id].hide = true;
}


//Functions to handle the GUI tabs actions

public void set_GUItabs()
{

	//this font is used in the text of the buttons
    ControlFont cf1 = new ControlFont(createFont("Arial",20));

	cp5.addButton("RatioConsensus") //Plot mode button
    .setPosition(50,50)
    .setSize(300,40)
    ;
    
    cp5.getController("RatioConsensus")
     .getCaptionLabel()
     .setFont(cf1)
     .setSize(12)
     .setText("Ratio Consensus") 
     ;
    
    cp5.addButton("Communication") //Animation mode button
    .setPosition(50,100)
    .setSize(300,40)
    ;
    
    cp5.getController("Communication")
     .getCaptionLabel()
     .setFont(cf1)
     .setSize(12)
     .setText("Communication")
     ;
    
    cp5.addButton("Graph") //Graph mode button
    .setPosition(50,150)
    .setSize(300,40)
    ;
    
    cp5.getController("Graph")
     .getCaptionLabel()
     .setFont(cf1)
     .setSize(12)
     .setText("Graph")
     ;
     
    cp5.addButton("ResetConnection") //Reset controllers button
    .setPosition(50,200)
    .setSize(300,40)
    ;
    
    cp5.getController("ResetConnection")
     .getCaptionLabel()
     .setFont(cf1)
     .setSize(12)
     .setText("Reset Connection")
     ;

     cp5.addButton("Run") //Start control button
    .setPosition(50,250)
    .setSize(300,40)
    ;
    
    cp5.getController("Run")
     .getCaptionLabel()
     .setFont(cf1)
     .setSize(12)
     .setText("Start")
    ;

   clock = cp5.addTextarea("Clock") //clock text box
    .setPosition(50,1000)
    .setSize(120,45)
    .setFont(createFont("arial",22))
    //.setLineHeight(14)
    .setColor(color(255,255,255))
    .setColorBackground(color(0,0,255))
    //.setColorForeground(color(255,100));
    ;
     
    b = cp5.addButton("Capture") //Capture plot button
    .setPosition(1750,1015)
    .setSize(100,40)
    ;
    
    cp5.getController("Capture")
     .getCaptionLabel()
     .setFont(cf1)
     .setSize(10)
     .setText("Capture")
    ;
    
    cp5.get("Capture").hide();
}

public void print_ratio()
{
	LineGraph.DrawAxis(); //draws the main axis of the plot

	for (int i=0; i < maxnode ; i++) //nodes tags for the plot
	{
	  fill(graphColors[i]);
	  textAlign(CENTER);textSize(20);
	  text("Node " + connected_nodes[i], plotXpos + plotWidth - 40, plotYpos + 30 + i*20);  
	} 
	 
	for (int i=0; i < maxnode ; i++) //necessary to move data to the left before presenting plot
	{   
	  for (int k=0; k<lineGraphValues[0].length-1; k++) 
	  {
	    lineGraphValues[i][k] = lineGraphValues[i][k+1];
	  }
	}
	   
	if (stack == true) //active when the buffer of the in-data from the nodes is full
	{
	  
	  for (int i=0; i<lineGraphValues.length; i++) //stack the buffer in the plot matrix
	  {
	    lineGraphValues[i][lineGraphValues[i].length-1] = lineGraphValues_buffer[i][stack_counter]; 
	  }
	        
	  stack_counter++;

	  if (stack_counter == lineGraphValues_buffer[0].length)
	  {
	    stack = false; //buffer completely transfered to the plot matrix
	    stack_counter = 0;
	  }
	}
	   
	if (capture == true) //active when capture waveform button is pressed
	{ 
	  for (int i = 0;i<lineGraphValues.length; i++) 
	  {
	    LineGraph.GraphColor = graphColors[i]; //assign plot colors
	    LineGraph.LineGraph(lineGraphSampleNumbers, lineGraphValues_capture[i]); //assign plot matrix, lineGraphValues_capture is a backup of the plot matrix one the waveform is captured
	  }
	}

	else //no capture done
	{
	  for (int i=0;i<lineGraphValues.length; i++)  
	  {
	    LineGraph.GraphColor = graphColors[i]; //assign plot colors
	    LineGraph.LineGraph(lineGraphSampleNumbers, lineGraphValues[i]); //assign plot matrix
	  }
	}  
}

public void print_animation()
{
	for (int i = 1; i < 6; i++) //creates an ellipse pattern of the controllers 
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
	  
	  imageMode(CENTER);
	  image(img, 1100 - xPos, yPos); //print image
	  image(img, 1100 + xPos, yPos); 
	  
	  textAlign(CENTER);textSize(30); 
	  fill(0, 45, 90); //color for text
	  text(2*i - 1, 1020 - xPos, yPos + 10); //print text
	  text(2*i, 1180 + xPos, yPos + 10);
	     
	}

	if (create_animation == true) //this is triggered once the nodes are synced and animation can be created
	{
	  for (int i=0; i<maxnode; i++) //it goes through all the positions in the graph matrix
	  {
	    /*{
	      for (int j=0; j<maxnode; j++)
	      {
	        if (myGraphMatrix[connected_nodes[i]-1][j] == 2 && (connected_nodes[i] - 1) != j) //check for links
	        {
	          ms[i].addLink(new PVector(coordinates[j][0], coordinates[j][1]), j+1); //create a link in node i
	        }
	      }
	    }*/
	    cyber_nodes[i].SetLinks(coordinates, graphColors);
	  }
	  create_animation = false; //switch flag
	}

	fill(246, 225, 65);  

	if (start_animation == true) //ready to show animation 
	{
	  for (int i=0; i < maxnode; i++)
	  {
	    //ms[i].run(); //show the moving triangles for the links
	    cyber_nodes[i].run();
	  }

	  for (int i=0; i < maxnode; i++)
	  {
	    //ms[i].show();
	    cyber_nodes[i].show();
	  }
	}

	else //just show the nodes as they connect with the application  
	{
	  for (int i=0; i < maxnode; i++)
	  {
	    //ms[i].show();
	    cyber_nodes[i].show();
	  }
	}
}

public void reset_connection()
{
	 for (int j=1; j < maxnode + 1; j++) //stop all serial communication, this will restart the controllers
     {
       cyber_nodes[j-1].down = true;
       cyber_nodes[j-1].offline = true;	
       myPort[j].stop();
     }
    
     delay(1000);
     
     controller = 1;
     nodecount = 1; //serial communication started with one of the nodes
     myPort[controller] = new Serial(this, serial_list[controller], 38400); 
     myPort[controller].bufferUntil('\n'); 
     
     delay(500);
    
     reconnection = true;

     //reset all control variables 
     indata = false;      
     reset = false;
     com = false;
     start_animation = false;
     nextconnection = false;
}
// A class to describe a group of messages
// An ArrayList is used to manage the list of messages
// Every MessageSystem object corresponds to a node, each node has a group of links called Messages

class MessageSystem 
{
  ArrayList<Message> messages;
  PVector origin;
  PVector destiny;
  int c;
  int k; //variable to control delay in between arrows
  boolean hide = false;
  int id;
  int node_count = 0;

  MessageSystem() 
  {
    messages = new ArrayList<Message>();
  }

  public void addLink(PVector target, int node_id) 
  {
    id = node_id;
    destiny = target.get();
    
    while (node_count<id)
    {
      messages.add(new Message(origin, destiny, c));
      node_count++;
    }
    Message m = messages.get(id - 1);
    m.hide = false;
  }

  public void show() 
  {
    if (hide == false)
    {
      strokeWeight(1);
      fill(c);
      ellipse(origin.x, origin.y, 30, 30); 
    }
  }

  public void run() 
  {
    {
      for (int i = messages.size()-1; i >= 0; i--) 
      {
        Message m = messages.get(i);

        if (hide == false) //if true it means that the node is down
        {
          m.run();
          if (m.isDead()) 
          {
            m.restart();
          }
        }
      }

      //add circle to simbolize node
      strokeWeight(1);
      fill(c);
      ellipse(origin.x, origin.y, 30, 30);
      
      k = 0;
    }
  }
}
class CyberNode
{
	ArrayList<Message> messages;
  	PVector origin;
  	PVector destiny;
  	PVector local_coordinates; //node local coordinates
  	int c;
	int id;
	int node_count = 0;
	int total_nodes = 0;
	String in_neighbors;
	boolean down;
	boolean offline;
	Message m;

	CyberNode()
	{	
		id = 0;
		down = true;
		offline = true;
		in_neighbors = "";
		messages = new ArrayList<Message>();
	}

	public void init(int index, int col, float x_pos, float y_pos, int num_nodes)
	{	
		total_nodes = num_nodes;
		down = false;
		id = index;
		c = col; //set node color
		local_coordinates = new PVector(x_pos, y_pos);
	}

	public void SetLinks(float [][] coordinates, int[] nodesColors)
	{
		destiny = new PVector(local_coordinates.x, local_coordinates.y); // get node local coordinates
		for (int i = 0; i < total_nodes; i++)
		{
			if (PApplet.parseInt(str(in_neighbors.charAt(i))) != 0)
			{
				origin = new PVector(coordinates[i][0], coordinates[i][1]); //get in-neighbor coordinates
				messages.add(new Message(origin, destiny, nodesColors[i])); //add in-neighbor link
			}
		}
	}

	public void show() 
  	{
    	if (down == false)
    	{
      		strokeWeight(2);
      		fill(c);
      		ellipse(local_coordinates.x, local_coordinates.y, 30, 30); 
    	}
  	}

  	public void run() 
  	{
    	if (offline == false)
    	{
	      	for (int i = 0; i < total_nodes; i++)
	      	{

	        	if (PApplet.parseInt(str(in_neighbors.charAt(i))) != 0)
	        	{
	        		m = messages.get(node_count);
	        		if (PApplet.parseInt(str(in_neighbors.charAt(i))) == 2)
	        		{	
	        			m.hide = false;
	        		}
	        		else //this means it is equal to 1
	        		{
	        			m.hide = true;
	        		}
	        		m.run();
	          		if (m.isDead()) 
	          		{
	            		m.restart();
	          		}
	          		node_count++;
	        	} 
	    
	      	}
	      	node_count = 0;
	    }

      	
	    if (down == false)
	    {
	      	//add circle to simbolize node
	      	strokeWeight(2);	
	      	fill(c);
	      	ellipse(local_coordinates.x, local_coordinates.y, 30, 30);
	    }
    	
  	}
}
  
/*   =================================================================================       
     The Graph class contains functions and variables that have been created to draw 
     graphs. Here is a quick list of functions within the graph class:
          
       Graph(int x, int y, int w, int h,color k)
       DrawAxis()
       Bar([])
       smoothLine([][])
       DotGraph([][])
       LineGraph([][]) 
     
     =================================================================================*/   

    
    class plot
    {
      
      boolean Dot=true;            // Draw dots at each data point if true
      boolean RightAxis;            // Draw the next graph using the right axis if true
      boolean ErrorFlag=false;      // If the time array isn't in ascending order, make true  
      boolean ShowMouseLines=true;  // Draw lines and give values of the mouse position
    
      int     xDiv=20,yDiv=5;            // Number of sub divisions
      int     xPos,yPos;            // location of the top left corner of the graph  
      int     Width,Height;         // Width and height of the graph
    

      int   GraphColor;
      int   BackgroundColor=color(211, 211, 211);  //color(255)
      int   StrokeColor=color(180);     
      
      String  Title="Title";          // Default titles
      String  xLabel="x - Label";
      String  yLabel="y - Label";

      float   yMax=1024, yMin=0;      // Default axis dimensions
      float   xMax=10, xMin=0;
      float   yMaxRight=1024,yMinRight=0;
  
      PFont   Font;                   // Selected font used for text 
      
  //    int Peakcounter=0,nPeakcounter=0;
     
      plot(int x, int y, int w, int h,int k) {  // The main declaration function
        xPos = x;
        yPos = y;
        Width = w;
        Height = h;
        GraphColor = k;
        
      }
    
     
       public void DrawAxis(){
       
   /*  =========================================================================================
        Main axes Lines, Graph Labels, Graph Background, Tags
       ==========================================================================================  */
    
        fill(BackgroundColor); color(0);stroke(StrokeColor);strokeWeight(1);
        int t=60;
        
        rect(xPos-t*1.6f,yPos-t,Width+t*2.5f,Height+t*2);            // outline
        textAlign(CENTER);textSize(18);
        float c=textWidth(Title);
        fill(BackgroundColor); color(0);stroke(0);strokeWeight(1);
        rect(xPos+Width/2-c/2,yPos-35,c,0);                         // Heading Rectangle  
        
        fill(0);
        text(Title,xPos+Width/2,yPos-37);                            // Heading Title
        textAlign(CENTER);textSize(20);
        text(xLabel,xPos+Width/2,yPos+Height+t/1.5f);                     // x-axis Label 
        
        rotate(-PI/2);                                               // rotate -90 degrees
        text(yLabel,-yPos-Height/2,xPos-t*1.6f+20);                   // y-axis Label  
        rotate(PI/2);                                                // rotate back
        
        textSize(15); noFill(); stroke(0); smooth();strokeWeight(1);
          //Edges
          line(xPos-3,yPos+Height,xPos-3,yPos);                        // y-axis line 
          line(xPos-3,yPos+Height,xPos+Width+5,yPos+Height);           // x-axis line 
          
           stroke(200);
          if(yMin<0){
                    line(xPos-7,                                       // zero line 
                         yPos+Height-(abs(yMin)/(yMax-yMin))*Height,   // 
                         xPos+Width,
                         yPos+Height-(abs(yMin)/(yMax-yMin))*Height
                         );
          
                    
          }
          
          if(RightAxis){                                       // Right-axis line   
              stroke(0);
              line(xPos+Width+3,yPos+Height,xPos+Width+3,yPos);
            }
            
           /*  =========================================================================================
                Sub-devisions for both axes, left and right
               ==========================================================================================  */
            
            stroke(0);
            
           for(int x=0; x<=xDiv; x++){
       
            /*  =========================================================================================
                  x-axis
                ==========================================================================================  */
             
            line(PApplet.parseFloat(x)/xDiv*Width+xPos-3,yPos+Height,       //  x-axis Sub devisions    
                 PApplet.parseFloat(x)/xDiv*Width+xPos-3,yPos+Height+5);     
                 
            textSize(10);                                      // x-axis Labels
            String xAxis=str(xMin+PApplet.parseFloat(x)/xDiv*(xMax-xMin));  // the only way to get a specific number of decimals 
            String[] xAxisMS=split(xAxis,'.');                 // is to split the float into strings 
            text(xAxisMS[0]+"."+xAxisMS[1].charAt(0),          // ...
                 PApplet.parseFloat(x)/xDiv*Width+xPos-3,yPos+Height+15);   // x-axis Labels
          }
          
          
           /*  =========================================================================================
                 left y-axis
               ==========================================================================================  */
          
          for(int y=0; y<=yDiv; y++){
            line(xPos-3,PApplet.parseFloat(y)/yDiv*Height+yPos,                // ...
                  xPos-7,PApplet.parseFloat(y)/yDiv*Height+yPos);              // y-axis lines 
            
            textAlign(RIGHT);fill(20);
            
            String yAxis=str(yMin+PApplet.parseFloat(y)/yDiv*(yMax-yMin));     // Make y Label a string
            String[] yAxisMS=split(yAxis,'.');                    // Split string
           
            text(yAxisMS[0]+"."+yAxisMS[1].charAt(0),             // ... 
                 xPos-15,PApplet.parseFloat(yDiv-y)/yDiv*Height+yPos+3);       // y-axis Labels 
                        
                        
            /*  =========================================================================================
                 right y-axis
                ==========================================================================================  */
            
            if(RightAxis){
             
              color(GraphColor); stroke(GraphColor);fill(20);
            
              line(xPos+Width+3,PApplet.parseFloat(y)/yDiv*Height+yPos,             // ...
                   xPos+Width+7,PApplet.parseFloat(y)/yDiv*Height+yPos);            // Right Y axis sub devisions
                   
              textAlign(LEFT); 
            
              String yAxisRight=str(yMinRight+PApplet.parseFloat(y)/                // ...
                                yDiv*(yMaxRight-yMinRight));           // convert axis values into string
              String[] yAxisRightMS=split(yAxisRight,'.');             // 
           
               text(yAxisRightMS[0]+"."+yAxisRightMS[1].charAt(0),     // Right Y axis text
                    xPos+Width+15,PApplet.parseFloat(yDiv-y)/yDiv*Height+yPos+3);   // it's x,y location
            
              noFill();
            }stroke(0);
            
          
          }
       
      }
      
      
   /*  =========================================================================================
       Bar graph
       ==========================================================================================  */   
      
      public void Bar(float[] a ,int from, int to) {
        
         
          stroke(GraphColor);
          fill(GraphColor);
          
          if(from<0){                                      // If the From or To value is out of bounds 
           for (int x=0; x<a.length; x++){                 // of the array, adjust them 
               rect(PApplet.parseInt(xPos+x*PApplet.parseFloat(Width)/(a.length)),
                    yPos+Height-2,
                    Width/a.length-2,
                    -a[x]/(yMax-yMin)*Height);
                 }
          }
          
          else {
          for (int x=from; x<to; x++){
            
            rect(PApplet.parseInt(xPos+(x-from)*PApplet.parseFloat(Width)/(to-from)),
                     yPos+Height-2,
                     Width/(to-from)-2,
                     -a[x]/(yMax-yMin)*Height);
                     
    
          }
          }
          
      }
  public void Bar(float[] a ) {
  
              stroke(GraphColor);
          fill(GraphColor);
    
  for (int x=0; x<a.length; x++){                 // of the array, adjust them 
               rect(PApplet.parseInt(xPos+x*PApplet.parseFloat(Width)/(a.length)),
                    yPos+Height-2,
                    Width/a.length-2,
                    -a[x]/(yMax-yMin)*Height);
                 }
          }
  
  
   /*  =========================================================================================
       Dot graph
       ==========================================================================================  */   
       
        public void DotGraph(float[] x ,float[] y) {
          
         for (int i=0; i<x.length; i++){
                    strokeWeight(2);stroke(GraphColor);noFill();smooth();
           ellipse(
                   xPos+(x[i]-x[0])/(x[x.length-1]-x[0])*Width,
                   yPos+Height-(y[i]/(yMax-yMin)*Height)+(yMin)/(yMax-yMin)*Height,
                   2,2
                   );
         }
                             
      }
      
   /*  =========================================================================================
       Straight line graph 
       ==========================================================================================  */
       
      public void LineGraph(float[] x ,float[] y) {

         if (y[0] > yMax)  y[0] = yMax;
         else if (y[0] < yMin) y[0] = yMin;
          
         for (int i=0; i<(x.length-1); i++)
         {
            strokeWeight(2);
            stroke(GraphColor);
            noFill();
            smooth();

            if (y[i+1] > yMax)  y[i+1] = yMax;
            else if (y[i+1] < yMin) y[i+1] = yMin;

            line(xPos+(x[i]-x[0])/(x[x.length-1]-x[0])*Width, yPos+Height-(y[i]/(yMax-yMin)*Height)+(yMin)/(yMax-yMin)*Height, xPos+(x[i+1]-x[0])/(x[x.length-1]-x[0])*Width, yPos+Height-(y[i+1]/(yMax-yMin)*Height)+(yMin)/(yMax-yMin)*Height);
         }
                             
      }
      
      /*  =========================================================================================
             smoothLine
          ==========================================================================================  */
    
      public void smoothLine(float[] x ,float[] y) {
         
        float tempyMax=yMax, tempyMin=yMin;
        
        if(RightAxis){yMax=yMaxRight;yMin=yMinRight;} 
         
        int counter=0;
        int xlocation=0,ylocation=0;
         
//         if(!ErrorFlag |true ){    // sort out later!
          
          beginShape(); strokeWeight(2);stroke(GraphColor);noFill();smooth();
         
            for (int i=0; i<x.length; i++){
              
           /* ===========================================================================
               Check for errors-> Make sure time array doesn't decrease (go back in time) 
              ===========================================================================*/
              if(i<x.length-1){
                if(x[i]>x[i+1]){
                   
                  ErrorFlag=true;
                
                }
              }
         
         /* =================================================================================       
             First and last bits can't be part of the curve, no points before first bit, 
             none after last bit. So a streight line is drawn instead   
            ================================================================================= */ 

              if(i==0 || i==x.length-2)line(xPos+(x[i]-x[0])/(x[x.length-1]-x[0])*Width,
                                            yPos+Height-(y[i]/(yMax-yMin)*Height)+(yMin)/(yMax-yMin)*Height,
                                            xPos+(x[i+1]-x[0])/(x[x.length-1]-x[0])*Width,
                                            yPos+Height-(y[i+1]/(yMax-yMin)*Height)+(yMin)/(yMax-yMin)*Height);
                                            
          /* =================================================================================       
              For the rest of the array a curve (spline curve) can be created making the graph 
              smooth.     
             ================================================================================= */ 
                            
              curveVertex( xPos+(x[i]-x[0])/(x[x.length-1]-x[0])*Width,
                           yPos+Height-(y[i]/(yMax-yMin)*Height)+(yMin)/(yMax-yMin)*Height);
                           
           /* =================================================================================       
              If the Dot option is true, Place a dot at each data point.  
             ================================================================================= */    
           
             if(Dot)ellipse(
                             xPos+(x[i]-x[0])/(x[x.length-1]-x[0])*Width,
                             yPos+Height-(y[i]/(yMax-yMin)*Height)+(yMin)/(yMax-yMin)*Height,
                             2,2
                             );
                             
         /* =================================================================================       
             Highlights points closest to Mouse X position   
            =================================================================================*/ 
                          
              if( abs(mouseX-(xPos+(x[i]-x[0])/(x[x.length-1]-x[0])*Width))<5 ){
                
                 
                  float yLinePosition = yPos+Height-(y[i]/(yMax-yMin)*Height)+(yMin)/(yMax-yMin)*Height;
                  float xLinePosition = xPos+(x[i]-x[0])/(x[x.length-1]-x[0])*Width;
                  strokeWeight(1);stroke(240);
                 // line(xPos,yLinePosition,xPos+Width,yLinePosition);
                  strokeWeight(2);stroke(GraphColor);
                  
                  ellipse(xLinePosition,yLinePosition,4,4);
              }
              
     
              
            }  
       
          endShape(); 
          yMax=tempyMax; yMin=tempyMin;
                float xAxisTitleWidth=textWidth(str(map(xlocation,xPos,xPos+Width,x[0],x[x.length-1])));
          
           
       if((mouseX>xPos&mouseX<(xPos+Width))&(mouseY>yPos&mouseY<(yPos+Height))){   
        if(ShowMouseLines){
              // if(mouseX<xPos)xlocation=xPos;
            if(mouseX>xPos+Width)xlocation=xPos+Width;
            else xlocation=mouseX;
            stroke(200); strokeWeight(0.5f);fill(255);color(50);
            // Rectangle and x position
            line(xlocation,yPos,xlocation,yPos+Height);
            rect(xlocation-xAxisTitleWidth/2-10,yPos+Height-16,xAxisTitleWidth+20,12);
            
            textAlign(CENTER); fill(160);
            text(map(xlocation,xPos,xPos+Width,x[0],x[x.length-1]),xlocation,yPos+Height-6);
            
           // if(mouseY<yPos)ylocation=yPos;
             if(mouseY>yPos+Height)ylocation=yPos+Height;
            else ylocation=mouseY;
          
           // Rectangle and y position
            stroke(200); strokeWeight(0.5f);fill(255);color(50);
            
            line(xPos,ylocation,xPos+Width,ylocation);
             int yAxisTitleWidth=PApplet.parseInt(textWidth(str(map(ylocation,yPos,yPos+Height,y[0],y[y.length-1]))) );
            rect(xPos-15+3,ylocation-6, -60 ,12);
            
            textAlign(RIGHT); fill(GraphColor);//StrokeColor
          //    text(map(ylocation,yPos+Height,yPos,yMin,yMax),xPos+Width+3,yPos+Height+4);
            text(map(ylocation,yPos+Height,yPos,yMin,yMax),xPos -15,ylocation+4);
           if(RightAxis){ 
                          
                           stroke(200); strokeWeight(0.5f);fill(255);color(50);
                           
                           rect(xPos+Width+15-3,ylocation-6, 60 ,12);  
                            textAlign(LEFT); fill(160);
                           text(map(ylocation,yPos+Height,yPos,yMinRight,yMaxRight),xPos+Width+15,ylocation+4);
           }
            noStroke();noFill();
         }
       }
            
   
      }

       
          public void smoothLine(float[] x ,float[] y, float[] z, float[] a ) {
           GraphColor=color(188,53,53);
            smoothLine(x ,y);
           GraphColor=color(193-100,216-100,16);
           smoothLine(z ,a);
   
       }
       
       
       
    }
    
 
//Class used to create timer objects to be used for control of communications in GUI

class Timer 
{
  float init_time; //indicates the starting point of the timer based on the system time
  boolean running;
  float time_elapsed; //time elapsed in seconds
  
  Timer() 
  {
  	init_time = 0;
    running = false;
  }
  
  public void start() 
  {
  	if (running == false)
  	{
  		init_time = millis();
  		running = true;
  	}
  }

  public void stop()
  {
  	if (running == true)
  	{
  		running = false;
  		time_elapsed = 0;
  	}
  }

  public void restart()
  {
  	if (running == true)
  	{
  		init_time = millis();
  		time_elapsed = 0;
  	}
  }
  
  public void update() 
  {
  	if (running == true)
  	{
    	time_elapsed = (millis() - init_time)/1000;
    }
  }
  
}
// message class of comunnication between two nodes (link)

class Message 
{
  PVector origin;
  PVector location;
  PVector destiny;
  PVector velocity;
  PVector velocity_i;
  PVector acceleration;
  float r;
  float topspeed;
  int col;
  boolean hide = true;
  
  Message(PVector l, PVector d, int c) 
  {
    acceleration = new PVector (0, 0.05f);
    //velocity = new PVector(random(-1, 1), random(-1, 0));
    velocity_i = new PVector(0,0); //initial velocity, *DIRECTION SHOULD BE MODIFIED DEPENDING OF ORIGIN AND DESTINY (-1,1)
    velocity = velocity_i;
    location = l.get();
    origin = l.get();
    destiny = d.get();
    r = 5.0f; // size of the triangle
    topspeed = 7; //to accelerate until certain point
    col = c; 
  }
  
  public void run() 
  {
    if (hide == false)
    {
      update();
      display();
    }
  }
  
  // Method to update position
  public void update() 
  {
    // Compute a vector that points from location to destiny
    PVector acceleration = PVector.sub(destiny,location);

    // Set magnitude of acceleration
    acceleration.setMag(0.2f);
    
    // Velocity changes according to acceleration
    velocity.add(acceleration);

    // Limit the velocity by topspeed
    velocity.limit(topspeed);

    // Location changes by velocity
    location.add(velocity);

    //add line that unifies two nodes 
    stroke(110, 110, 110);
    strokeWeight(0.5f);
    line(origin.x, origin.y, destiny.x - 15*sin(velocity.heading2D() + radians(90)), destiny.y + 15*cos(velocity.heading2D() + radians(90)));
    
  }
  
  // Method to display
  public void display() 
  {
    
    // Draw a triangle rotated in the direction of velocity, this triangle is the "message"
    float theta = velocity.heading2D() + radians(90);
    stroke(0);
    fill(col); 
    pushMatrix();
    translate(location.x, location.y);
    rotate(theta);
    beginShape(TRIANGLES);
    vertex(0, -r*2);
    vertex(-r, r*2);
    vertex(r, r*2);
    endShape();
    popMatrix();

  }
  
  //once the message reaches the point, the movement is restarted to initial point
  public void restart() 
  {
    location = origin.get();
    velocity = velocity_i;
  } 
  
  // The message reached the final point
  public boolean isDead() 
  {
    if (location.x > destiny.x - 30 && location.x < destiny.x + 30 && location.y > destiny.y - 30 && location.y < destiny.y + 30) 
    {
      return true;
    } 
    else 
    {
      return false;
    }
  }
}
  static public void main(String[] passedArgs) {
    String[] appletArgs = new String[] { "--full-screen", "--bgcolor=#666666", "--stop-color=#cccccc", "final_gui" };
    if (passedArgs != null) {
      PApplet.main(concat(appletArgs, passedArgs));
    } else {
      PApplet.main(appletArgs);
    }
  }
}
