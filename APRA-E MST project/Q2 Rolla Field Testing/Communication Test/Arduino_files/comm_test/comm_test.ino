
#include <SPI.h>
#include <Ethernet.h>

byte mac[] = {0x90, 0xA2, 0xDA, 0x0E, 0x94, 0xBA };
//IPAddress ip(192, 168, 2, 10);
IPAddress ip(169, 254,0,1);
//IPAddress ip(169,254,0,180);
//IPAddress gateway(192, 168, 2, 20);
IPAddress gateway(169,254,0, 10);
//IPAddress myDns(192, 168, 2, 1);
//IPAddress gateway(192, 168, 1, 1);
//IPAddress myDns(192, 168, 1, 1);
IPAddress subnet(255, 255,255, 0);
IPAddress server(169,254,0,180);
const char* host = "Solar2007Inverter.fronius.com";
//byte mac[] = {
//        0xA3, 0x60, 0x0A, 0xA1, 0x50, 0x39
//};

//// Set the static IP address to use if the DHCP fails to assign
//IPAddress ip(208, 91, 53, 175);
//IPAddress myDns(127, 0, 0, 53);
//IPAddress server(208, 91, 53, 175);
////char server[] = "www.worldtimeapi.org/api/timezone/Etc/UTC" ;
//const char* host = "www.worldtimeapi.org";
//// initialize the library instance:
EthernetClient client;

// Variables to measure the speed
unsigned long beginMicros, endMicros;
unsigned long byteCount = 0;
bool printWebData = true;  // set to false for better speed measurement

void setup() {
    Ethernet.init(10);  // Most Arduino shields
    Serial.begin(9600);
    while (!Serial) {
        ; // wait for serial port to connect. Needed for native USB port only
    }

    Serial.println("Initialize Ethernet with DHCP:");
    delay(5000);
    if (Ethernet.begin(mac) == 0) {
        Serial.println("Failed to configure Ethernet using DHCP");delay(5000);
        if (Ethernet.hardwareStatus() == EthernetNoHardware) {
            Serial.println("Ethernet shield was not found.  Sorry, can't run without hardware. :(");
            while (true) {
                delay(1); // do nothing, no point running without Ethernet hardware
            }
        }
        if (Ethernet.linkStatus() == LinkOFF) {
            Serial.println("Ethernet cable is not connected.");
        }
        // try to congifure using IP address instead of DHCP:
//        Ethernet.begin(mac, ip, myDns);
        delay(5000);
        Ethernet.begin(mac, ip, gateway, subnet);
    } else {
        Serial.print("  DHCP assigned IP ");
        Serial.println(Ethernet.localIP());
    }
    // give the Ethernet shield a second to initialize:
    delay(5000);
    Serial.print("connecting to ");
    Serial.print(server);
    Serial.println("...");
    delay(5000);
    // if you get a connection, report back via serial:
    int stat = client.connect(server, 502);
    delay(5000);
    Serial.println(stat);//client.connect(host, 80)
    if (stat) {//client.connect(host, 80)
        Serial.print("connected to ");
        // Make a HTTP request:
        client.println("Connection: close");
        client.println();
    } else {
        // if you didn't get a connection to the server:
        Serial.print("connection failed: ");
    }
    beginMicros = micros();
}

void loop() {
    // if there are incoming bytes available
    // from the server, read them and print them:
    int len = client.available();
    if (len > 0) {
        byte buffer[80];
        if (len > 80) len = 80;
        client.read(buffer, len);
        if (printWebData) {
            Serial.write(buffer, len); // show in the serial monitor (slows some boards)
        }
        byteCount = byteCount + len;
    }

    // if the server's disconnected, stop the client:
    if (!client.connected()) {
        endMicros = micros();
        Serial.println();
        Serial.println("disconnecting.");
        client.stop();
        Serial.print("Received ");
        Serial.print(byteCount);
        Serial.print(" bytes in ");
        float seconds = (float)(endMicros - beginMicros) / 1000000.0;
        Serial.print(seconds, 4);
        float rate = (float)byteCount / seconds / 1000.0;
        Serial.print(", rate = ");
        Serial.print(rate);
        Serial.print(" kbytes/second");
        Serial.println();

        // do nothing forevermore:
        while (true) {
            delay(1);
        }
    }
}
