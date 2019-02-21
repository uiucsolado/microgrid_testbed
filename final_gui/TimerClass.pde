//Class used to create timer objects to be used for control of communications in GUI

class Timer 
{
  int init_time; //indicates the starting point of the timer based on the system time
  boolean running;
  float time_elapsed; //time elapsed in seconds
  
  Timer() 
  {
  	init_time = 0;
    running = false;
  }
  
  void start() 
  {
  	if (running == false)
  	{
  		init_time = millis();
  		running = true;
  	}
  }

  void stop()
  {
  	if (running == true)
  	{
  		running = false;
  	}
  }

  void restart()
  {
  	if (running == true)
  	{
  		init_time = millis();
  	}
  }
  
  void update() 
  {
  	if (running == true)
  	{
    	time_elapsed = (millis() - init_time)/1000;
    }
  }
  
}
