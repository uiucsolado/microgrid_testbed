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
  color col;
  boolean hide = true;
  
  Message(PVector l, PVector d, color c) 
  {
    acceleration = new PVector (0, 0.05);
    //velocity = new PVector(random(-1, 1), random(-1, 0));
    velocity_i = new PVector(0,0); //initial velocity
    velocity = velocity_i;
    location = l.get();
    origin = l.get();
    destiny = d.get();
    r = 5.0; // size of the triangle
    topspeed = 7; //to accelerate until certain point
    col = c; 
  }
  
  void run() 
  {
    if (hide == false)
    {
      update();
      display();
    }
  }
  
  // Method to update position
  void update() 
  {
    // Compute a vector that points from location to destiny
    PVector acceleration = PVector.sub(destiny,location);

    // Set magnitude of acceleration
    acceleration.setMag(0.2);
    
    // Velocity changes according to acceleration
    velocity.add(acceleration);

    // Limit the velocity by topspeed
    velocity.limit(topspeed);

    // Location changes by velocity
    location.add(velocity);

    //add line that unifies two nodes 
    stroke(110, 110, 110);
    strokeWeight(0.5);
    line(origin.x, origin.y, destiny.x - 15*sin(velocity.heading2D() + radians(90)), destiny.y + 15*cos(velocity.heading2D() + radians(90)));
    
  }
  
  // Method to display
  void display() 
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
  void restart() 
  {
    location = origin.get();
    velocity = velocity_i;
  } 
  
  // The message reached the final point
  boolean isDead() 
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
