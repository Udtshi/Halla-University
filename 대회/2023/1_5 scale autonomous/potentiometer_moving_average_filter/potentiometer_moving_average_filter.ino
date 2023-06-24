#define alpha 0.3

#include <MsTimer2.h>

float avg_old = 0.01;  // xavg^(k-1)
float avg = 0.0;       // xavg^(k)
int ad_value = 0;   // ad_value -> sonar

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  MsTimer2::set(100, Timer_ISR);
  MsTimer2::start();
}

void Timer_ISR(void) {
  avg = alpha * avg_old + (1.0 - alpha) * ad_value;
  avg_old = avg;
}

void loop() {
  // put your main code here, to run repeatedly:
  ad_value = analogRead(A0);

  Serial.print("Ad_value = ");
  Serial.print(ad_value);
  Serial.print("  avg = ");
  Serial.println(avg);

  delay(100);
}
