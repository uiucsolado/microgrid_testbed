unsigned long time2;

void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.print("Time: ");
  time2 = millis();

  Serial.println(time2); //prints time since program started
  delay(1000);          // wait a second so as not to send massive amounts of data
}
