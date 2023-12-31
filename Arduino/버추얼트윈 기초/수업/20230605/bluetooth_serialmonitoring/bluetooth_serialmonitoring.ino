#include <SoftwareSerial.h>

SoftwareSerial Serial1(2,3);
void setup() {
 Serial.begin(9600);
 Serial1.begin(9600);         //Serial1 == 18 19번핀, Serial2 == 16 17번핀, Serial3 == 14 15번핀
 Serial.println("HELLO!");
}

void loop() {
   Serial1.write("yee");
   Serial.write("yee");
  if (Serial.available()) {
    Serial1.write(Serial.read());
  }
  if (Serial1.available()) {
    Serial.write(Serial1.read());
  }
}
