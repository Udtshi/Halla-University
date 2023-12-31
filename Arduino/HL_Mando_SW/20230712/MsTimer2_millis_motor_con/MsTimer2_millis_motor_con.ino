#include <MsTimer2.h>
#define check 2
#define MOTOR1_PWM 5 //PWMA
#define MOTOR1_EN 4 //DIRA
///////// Encoder Pin //////////
const int EncoderAPin = 2;
const int EncoderBPin = 3;

volatile int counter = 0;
volatile int encoderB;

///////// Interrupt time ///////
unsigned long enc_time;
unsigned long enc_time_old;
unsigned long enc_time_diff;

void motor1_control(int motor1_pwm)
{
   if (motor1_pwm > 0)     // cw
  {
    digitalWrite(MOTOR1_EN, HIGH);
    analogWrite(MOTOR1_PWM, motor1_pwm);
  }
  else if (motor1_pwm < 0) // ccw
  {
    digitalWrite(MOTOR1_EN, LOW);
    analogWrite(MOTOR1_PWM, -motor1_pwm);
  }
  else                     // stop
  {
    digitalWrite(MOTOR1_EN, LOW);
    digitalWrite(MOTOR1_PWM, 0);
  }
}

void Encoder() {
  enc_time = millis();
  enc_time_diff = enc_time - enc_time_old;
  
  encoderB = digitalRead(EncoderBPin);
  
  if (encoderB == LOW) {    // 정회전
    counter++;
  }
  else{                     // 역회전
    counter--;
  }   
  enc_time_old = enc_time;
}

void timer() {
  enc_time = millis();
  enc_time_diff = enc_time - enc_time_old;

  if(counter < 410){
    motor1_control(50);
  }
  else{
    //motor_control(-50);
    motor1_control(0);
  }
  enc_time_old = enc_time;
}

void setup() {
  Serial.begin(115200);
  
  pinMode(EncoderAPin, INPUT_PULLUP);
  pinMode(EncoderBPin, INPUT_PULLUP);
  
  pinMode(check, OUTPUT);
  pinMode(MOTOR1_EN, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(EncoderAPin), Encoder, RISING);
  
  MsTimer2::set(50, timer); // 50ms(20hz)마다 호출한다
  MsTimer2::start();
}

void loop() {
  Serial.print("A: 1");
  Serial.print("   B: ");
  Serial.print(encoderB);
  Serial.print("   Counter: ");
  Serial.print(counter);
  Serial.println();
  Serial.print("enc_time_diff: ");
  Serial.print(enc_time_diff);
  Serial.println();
}
