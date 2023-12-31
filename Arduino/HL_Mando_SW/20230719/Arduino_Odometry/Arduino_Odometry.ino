#include <MPU6050_tockn.h>
#include <Wire.h>

#define EncoderAPin 2
#define EncoderBPin 3
#define pulse2m 0.000488

const unsigned long width = 100; // 100 ms (10 Hz)

volatile int counter = 0;
volatile int encoderB;

double angle = 0.0;
double angle_old = 0.0;
double angle_diff = angle - angle_old;

double distance = 0.0;

unsigned long enc_time;
unsigned long enc_time_old;
unsigned long enc_time_diff;

unsigned long previousMillis = 0;

bool flag = 0;

//pulse:410

MPU6050 mpu6050(Wire);

void Encoder()
{
  enc_time = millis();
  enc_time_diff = enc_time - enc_time_old;

  encoderB = digitalRead(EncoderBPin);

  if (encoderB == LOW) {    // ccw
    counter++;
  }
  else {                    // cw
    counter--;
  }
  enc_time_old = enc_time;
}

void setup()
{
  Serial.begin(115200);
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);

  pinMode(EncoderAPin, INPUT_PULLUP);
  pinMode(EncoderBPin, INPUT_PULLUP);

  mpu6050.update();
  angle_old = mpu6050.getAngleZ();
    
  attachInterrupt(digitalPinToInterrupt(EncoderAPin), Encoder, RISING);
}

void loop()
{
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= width)
  {
    mpu6050.update();
    angle = mpu6050.getAngleZ();
    angle_diff = angle - angle_old;

    distance = (counter * pulse2m) / angle_diff;                  // 호의 길이
    
    previousMillis = currentMillis;
  }
  Serial.print("Heading_Angle = "); Serial.println(angle);
  Serial.print("Delta_Angle = "); Serial.println(angle_diff);
  Serial.print("Pulse_counter: "); Serial.println(counter);
  Serial.print("Wheel_tick: "); Serial.println((counter * pulse2m));
  Serial.print("Distance: "); Serial.println(distance);
}
