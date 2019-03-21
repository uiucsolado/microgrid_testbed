//Functions to handle the GUI serial events

void serial_case_1(boolean condition)
{
	if (condition == false) //meaning it is the first time the control is initialized
	{
	  myGraph.put("Node " + val, new Node(400 + node_pos, 540, 35, 70, graphColors[nodecount])); //creates a new node in the graph in graph mode, new Node(x position, y position, siez, size, color)
	  connected_nodes[nodecount] = int(val); //registers the id of the node connecting with the application
	  nodes[nodecount] ="Node " + val;
	  cyber_nodes[nodecount].init(int(val), graphColors[nodecount], coordinates[connected_nodes[nodecount]-1][0], coordinates[connected_nodes[nodecount]-1][1], maxnode);
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
}

void serial_case_2()
{
	if (enter_in_neighbors == true) //meaning current node sent links information
	{
	  cyber_nodes[controller - 1].offline = false;
	  cyber_nodes[controller - 1].in_neighbors = val;
	  enterVector(controller - 1, val); //enter in-neighbors vector from current controller to the graph object
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
	    enter_in_neighbors = false; //ready to start getting links info from next controller
	  }
	    
	  else //all the information of the graph was obtained 
	  { 
	    println("Ready for regd signal"); //ready to get first regD signal
	    controller = 1; //back to node 1 (leader)
	    getregd = true; //ready for regd signal
	    create_animation = true; //create animation
	    start_animation = true; //ready to show animation and activate timer
	    checkGraph = true; //check for in-neighbors vector changes in leader node
	    all_links = true;
	  }
	}
}

void serial_case_3()
{
	regDval = float(val); //assign received value
	checkGraph = true; //flag to indicate that in-neighbors vector of next node must be checked (next node is the leader node) 
	delay(50);
	myPort[1].write("C"); //this goes to leader node to acknowledge the most recent regD signal was registered
	getregd = false; //ignore next coming regD signals until control system is ready
}

void serial_case_4()
{
	system_timer.stop(); //start system timer

    controller++;
    if (controller == maxnode + 1) //ready to plug the data into the plot
    {
      controller = 1;
      stack = true; //buffer is full, so data can be transfered to plot
      getregd = true; //ready to get a new regulation signal
      println("here");

      if ((lineGraphValues_buffer[0][0] > LineGraph.yMax || lineGraphValues_buffer[0][0] < LineGraph.yMin) && capture == false) //change scale to notice consensus differences
      {         
       LineGraph.yMax=int(lineGraphValues_buffer[0][0] + 1); 
       LineGraph.yMin=int(lineGraphValues_buffer[0][0] - 1);
      }
    }  

    else 
    {
      delay(50);
      myPort[controller].write("C"); //ready to receive data from next node
      system_timer.start();
      checkGraph = true; //flag to indicate in-neighbors vector of next node must be checked 
    }
}

void serial_case_5()
{
	for (int i = 0; i < maxnode; i++)
    {
      if (cyber_nodes[i].id == int(str(val.charAt(1))))
      {
        cyber_nodes[i].down = false;
        cyber_nodes[i].offline = true;
      }
    }
}

void serial_case_6()
{
	println(float(val));
    writeBuffer(controller - 1, val); //input consensus results in the plot buffer
}
