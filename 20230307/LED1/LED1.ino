//주석
/*
  2023.03.07 아두이노 프로그램
 */


void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); // Set pin 3 to output
  pinMode(4, INPUT); // set oun 4 to input
  
}

void loop() {
  digitalWrite(3, HIGH); //3번 핀 출력을 HIGH로
  delay(1000);  //1000 msec 지연
  digitalWrite(3, LOW); //3번 핀 출력을 LOW로
  delay(1000);  //1000 msec 지연

  
  // put your main code here, to run repeatedly:

}
