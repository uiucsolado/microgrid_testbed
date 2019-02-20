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