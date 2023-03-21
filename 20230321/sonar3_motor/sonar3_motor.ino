#define TRIG1 2  //  1번 초음파 센서 Trig 핀 번호
#define ECHO1 3  //  1번 초음파 센서 Echo 핀 번호

#define TRIG2 4  //  2번 초음파 센서 Trig 핀 번호
#define ECHO2 5  //  2번 초음파 센서 Echo 핀 번호

#define TRIG3 6  //  3번 초음파 센서 Trig 핀 번호
#define ECHO3 7  //  3번 초음파 센서 Echo 핀 번호

///////////////L298/////////////////
#define ENA 8
#define IN1 9
#define IN2 10
#define IN3 11
#define IN4 12
#define ENB 13

void setup() {
  pinMode(TRIG1, OUTPUT);
  pinMode(ECHO1, INPUT);
  
  pinMode(TRIG2, OUTPUT);
  pinMode(ECHO2, INPUT);
  
  pinMode(TRIG3, OUTPUT);
  pinMode(ECHO3, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
  
  Serial.begin(115200); // 통신 속도를 115200으로 정의
}

long sonar1(void) {
  long duration1, distance1;

  digitalWrite(TRIG1, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG1, LOW);

  duration1 = pulseIn(ECHO1, HIGH);
  distance1 = ((float)(340 * duration1) / 1000) / 2;
  return distance1;
}
long sonar2(void) {
  long duration2, distance2;

  digitalWrite(TRIG2, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG2, LOW);

  duration2 = pulseIn(ECHO2, HIGH);
  distance2 = ((float)(340 * duration2) / 1000) / 2;
  return distance2;
}
long sonar3(void) {
  long duration3, distance3;

  digitalWrite(TRIG3, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG3, LOW);

  duration3 = pulseIn(ECHO3, HIGH);
  distance3 = ((float)(340 * duration3) / 1000) / 2;
  return distance3;
}

void motor_A_control(int direction_a, int motor_speed_a) {  //모터 A의 방향(direction)과 속도(speed)제어

  if(direction_a == HIGH){
    digitalWrite(IN1, LOW);  // 모터의 방향 제어
    digitalWrite(IN2, HIGH);   //
    analogWrite(ENA, motor_speed_a);  // 모터의 속도 제어 
  }
  
  else{
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      analogWrite(ENA, motor_speed_a); 
  }

}

void motor_B_control(int direction_b, int motor_speed_b) {  //모터 B의 방향(direction)과 속도(speed)제어

  if(direction_b == HIGH){
    digitalWrite(IN3, LOW);  // 모터의 방향 제어
    digitalWrite(IN4, HIGH);   //
    analogWrite(ENB, motor_speed_b);  // 모터의 속도 제어 
  }
  
  else{
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
      analogWrite(ENB, motor_speed_b); 
  }

}

void loop() {
  //Serial.print("Duration: ");
  //Serial.println(sonar1());
  Serial.print("Distance1: ");
  Serial.println(sonar1());
  Serial.print("Distance2: ");
  Serial.println(sonar2());
  Serial.print("Distance3: ");
  Serial.println(sonar3());
  //Serial.println("mm\n");

  motor_A_control(HIGH, 75);
  motor_B_control(HIGH, 75);
  
  delay(500);
}
