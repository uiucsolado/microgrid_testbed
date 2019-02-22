//Functions to control the GUI tabs actions

void set_GUItabs()
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

void print_ratio()
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

void print_animation()
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
	  for (int i=0; i<nodecount; i++) //it goes through all the positions in the graph matrix
	  {
	    {
	      for (int j=0; j<maxnode; j++)
	      {
	        if (myGraphMatrix[connected_nodes[i]-1][j] == 2 && (connected_nodes[i] - 1) != j) //check for links
	        {
	          ms[i].addLink(new PVector(coordinates[j][0], coordinates[j][1]), j+1); //create a link in node i
	        }
	      }
	    }        
	  }
	  create_animation = false; //switch flag
	}

	else //just show the nodes as they connect with the application  
	{
	  for (int i=0; i < nodecount; i++)
	  {
	    ms[i].show();
	  }
	}

	fill(246, 225, 65);  

	if (start_animation == true) //ready to show animation 
	{
	  for (int i=0; i < maxnode; i++)
	  {
	    ms[i].run(); //show the moving triangles for the links
	  }
	}
}

void reset_connection()
{
	 for (int j=1; j < maxnode + 1; j++) //stop all serial communication, this will restart the controllers
     {
       myPort[j].stop();
     }
    
     delay(1000);
     
     i = 1;
     nodecount = 1; //serial communication started with one of the nodes
     myPort[i] = new Serial(this, serial_list[i], 38400); 
     myPort[i].bufferUntil('\n'); 
     
     delay(500);
    
     reconnection = true;

     //reset all control variables 
     indata = false;      
     reset = false;
     com = false;
     start_animation = false;
     nextconnection = false;
}