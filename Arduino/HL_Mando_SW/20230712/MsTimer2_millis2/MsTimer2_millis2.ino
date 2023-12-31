#include <MsTimer2.h>
#define check 2

unsigned long enc_time;
unsigned long enc_time_old;
unsigned long enc_time_diff;

void timer() {
  enc_time = millis();
  enc_time_diff = enc_time - enc_time_old;
  
  digitalWrite(check, HIGH);
  digitalWrite(check, LOW);

  enc_time_old = enc_time;
}

void setup() {
  Serial.begin(115200);
  pinMode(check, OUTPUT);
 
  MsTimer2::set(50, timer); // 50ms(20hz)마다 호출한다
  MsTimer2::start();
}

void loop() {
  Serial.print("time: ");
  Serial.println(enc_time_diff);
}
