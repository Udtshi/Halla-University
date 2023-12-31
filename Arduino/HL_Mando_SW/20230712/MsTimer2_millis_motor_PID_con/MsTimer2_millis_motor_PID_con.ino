#include <MsTimer2.h>
//////// Motor Drive ///////////
#define MOTOR1_PWM 5 //PWMA
#define MOTOR1_EN 4 //DIRA
int motor1_pwm = 0;
int f_speed = 0;

///////// Encoder Pin //////////
const int EncoderAPin = 2;
const int EncoderBPin = 3;

volatile int counter = 0;
volatile int encoderB = 0;

///////// Interrupt time ///////
unsigned long enc_time;
unsigned long enc_time_old;
unsigned long enc_time_diff;

////////  Encoder PID /////////
signed long encoder1_error = 0;
signed long encoder1_error_d = 0;
signed long encoder1_target = 0;
signed long encoder1_error_old = 0;
signed long encoder1_error_sum = 0;

// PID gain 값은 조정 필요함
float Kp_motor = 2.0;
float Kd_motor = 2.0;
float Ki_motor = 0.28;

void motor1_control(int motor1_pwm)   // 모터 구동부
{
  if (motor1_pwm > 0)                 // ccw
  {
    digitalWrite(MOTOR1_EN, LOW);
    analogWrite(MOTOR1_PWM, motor1_pwm);
  }
  else if (motor1_pwm < 0)            // cw
  {
    digitalWrite(MOTOR1_EN, HIGH);
    analogWrite(MOTOR1_PWM, motor1_pwm);
  }
  else                                // stop
  {
    digitalWrite(MOTOR1_EN, LOW);
    digitalWrite(MOTOR1_PWM, 0);
  }
}

void motor_PID_control(void)          //PID로 PWM제어
{
  encoder1_error = encoder1_target - counter;
  encoder1_error_sum += encoder1_error;
  encoder1_error_d = encoder1_error - encoder1_error_old;
  encoder1_error_sum = (encoder1_error_sum >=  100) ?  100 : encoder1_error_sum;
  encoder1_error_sum = (encoder1_error_sum <= -100) ? -100 : encoder1_error_sum;

  motor1_pwm = Kp_motor * encoder1_error + Kd_motor * encoder1_error_d + Ki_motor * encoder1_error_sum;
  motor1_pwm = (motor1_pwm >=  255) ?  255 : motor1_pwm;
  motor1_pwm = (motor1_pwm <= -255) ? -255 : motor1_pwm;
  //motor1_pwm *= 0.5;   //50% 속도제한
  
  if (fabs(encoder1_error) <= 2)      // 오차 허용범위
  {
    encoder1_error_sum = 0;
  }
  else
  {
    motor1_control(motor1_pwm);
  }
  encoder1_error_old = encoder1_error;
}

void Encoder()                        // Encoder Pulse 측정
{
  //enc_time = millis();
  //enc_time_diff = enc_time - enc_time_old;

  encoderB = digitalRead(EncoderBPin);

  if (encoderB == LOW) 
  {                                   // 정회전
    counter++;
  }
  else 
  {                                   // 역회전
    counter--;
  }
  //enc_time_old = enc_time;
}

void control_callback()               // 목표 Pulse 까지 회전 
{
  enc_time = millis();
  enc_time_diff = enc_time - enc_time_old;

  if ((counter < encoder1_target)&&(counter > -encoder1_target))
  {
    motor_PID_control();              // PID 제어
    //motor1_control(100);
  }
  else                                // 정지
  {
    //encoder1_error = 0;
    //encoder1_error_d = 0;
    //encoder1_error_sum = 0;
    //motor_PID_control();
    motor1_control(0);
  }
  enc_time_old = enc_time;
}

void setup() 
{
  Serial.begin(115200);

  pinMode(EncoderAPin, INPUT_PULLUP);
  pinMode(EncoderBPin, INPUT_PULLUP);

  pinMode(MOTOR1_EN, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(EncoderAPin), Encoder, RISING);

  MsTimer2::set(50, control_callback); // 50ms(20hz)마다 호출한다
  MsTimer2::start();
}

void loop()
{
  encoder1_target = 410;              // target encoder 값으로 조정 필요함
  //Serial.print("A: 1");
  //Serial.print("   B: ");
  //Serial.print(encoderB);
  //Serial.print("   Counter: ");
  Serial.print(counter);
  Serial.print(" ");
  //Serial.print("enc_time_diff: ");
  //Serial.println(enc_time_diff);
  //Serial.print("motor1_pwm: ");
  //Serial.println(motor1_pwm);
  //Serial.print("encoder1_error: ");
  Serial.println(encoder1_error);
  //Serial.print("encoder1_error_d: ");
  //Serial.println(encoder1_error_d);
}
