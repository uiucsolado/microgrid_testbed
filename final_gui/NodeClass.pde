class CyberNode
{
	ArrayList<Message> messages;
  	PVector origin;
  	PVector destiny;
  	PVector local_coordinates; //node local coordinates
  	color c;
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

	void init(int index, color col, float x_pos, float y_pos, int num_nodes)
	{	
		total_nodes = num_nodes;
		down = false;
		id = index;
		c = col; //set node color
		local_coordinates = new PVector(x_pos, y_pos);
	}

	void SetLinks(float [][] coordinates, color[] nodesColors)
	{
		destiny = new PVector(local_coordinates.x, local_coordinates.y); // get node local coordinates
		for (int i = 0; i < total_nodes; i++)
		{
			if (int(str(in_neighbors.charAt(i))) != 0)
			{
				origin = new PVector(coordinates[i][0], coordinates[i][1]); //get in-neighbor coordinates
				messages.add(new Message(origin, destiny, nodesColors[i])); //add in-neighbor link
			}
		}
	}

	void show() 
  	{
    	if (down == false)
    	{
      		strokeWeight(2);
      		fill(c);
      		ellipse(local_coordinates.x, local_coordinates.y, 30, 30); 
    	}
  	}

  	void run() 
  	{
    	if (offline == false)
    	{
	      	for (int i = 0; i < total_nodes; i++)
	      	{

	        	if (int(str(in_neighbors.charAt(i))) != 0)
	        	{
	        		m = messages.get(node_count);
	        		if (int(str(in_neighbors.charAt(i))) == 2)
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