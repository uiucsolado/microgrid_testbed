// A class to describe a group of messages
// An ArrayList is used to manage the list of messages
// Every MessageSystem object corresponds to a node, each node as a group of links called Messages

class MessageSystem 
{
  ArrayList<Message> messages;
  PVector origin;
  PVector destiny;
  color c;
  int k; //variable to control delay in between arrows
  boolean hide = false;
  int id;
  int node_count = 0;

  MessageSystem() 
  {
    messages = new ArrayList<Message>();
  }

  void addLink(PVector target, int node_id) 
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

  void show() 
  {
    if (hide == false)
    {
      strokeWeight(1);
      fill(c);
      ellipse(origin.x, origin.y, 30, 30); 
    }
  }

  void run() 
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
