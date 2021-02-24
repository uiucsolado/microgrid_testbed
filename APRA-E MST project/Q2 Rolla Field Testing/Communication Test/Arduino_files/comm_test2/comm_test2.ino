#include <Ethernet.h>
#include <SPI.h>


byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xBA };
IPAddress ip(192, 168, 2, 10);
byte server[] = { 64, 233, 187, 99 }; // Google

EthernetClient client;

void setup()
{
  delay(5000);
  Ethernet.begin(mac, ip);
  delay(5000);
  Serial.begin(9600);

  delay(1000);

  Serial.println("connecting...");
  delay(5000);
  if (client.connect(server, 80)) {
    delay(5000);
    Serial.println("connected");
    client.println("GET /search?q=arduino HTTP/1.0");
    client.println();
  } else {
    Serial.println("connection failed");
  }
}

void loop()
{
  if (client.available()) {
    char c = client.read();
    Serial.print(c);
  }

  if (!client.connected()) {
    Serial.println();
    Serial.println("disconnecting.");
    client.stop();
    for(;;)
      ;
  }
}
