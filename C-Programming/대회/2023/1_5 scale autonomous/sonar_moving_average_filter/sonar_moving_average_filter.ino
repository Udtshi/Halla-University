#define alpha 0.3

#include <NewPing.h>
#include <MsTimer2.h>

#define TRIGGER_PIN  2  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     3  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 1000 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

float avg_old = 0.01;  // xavg^(k-1)
float avg = 0.0;       // xavg^(k)
int ad_value = 0;   // ad_value -> sonar
int distance = 0.0;

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  MsTimer2::set(100,Timer_ISR);
  MsTimer2::start();
}
void Timer_ISR(void){
  avg = alpha * avg_old + (1.0 - alpha) * ad_value;
  avg_old = avg;
}

void loop() {
  distance = (sonar.ping_cm() * 10);
  if (distance == 0.0){
    distance = MAX_DISTANCE;
  }
  
  ad_value = (sonar.ping_cm() * 10); //cm to mm


  Serial.print("Ad_value = ");
  Serial.print(ad_value);
  Serial.print("  avg = ");
  Serial.println(avg);

  delay(100);
}
