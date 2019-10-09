#include <Streaming.h>
// the setup function runs once when you press reset or power the board
int answer = 0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  Serial.println("We will make the LED blink");
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever

void loop() {

if (Serial.available())

{

int state = Serial.parseInt();

if (state == 1)

{

digitalWrite(13, HIGH);

Serial.println("Command completed LED turned ON");

}

if (state == 2)

{

digitalWrite(13, LOW);

Serial.println("Command completed LED turned OFF");

}

}

}
/*
void loop() {
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
 
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);                      // wait for a second
}
*/
