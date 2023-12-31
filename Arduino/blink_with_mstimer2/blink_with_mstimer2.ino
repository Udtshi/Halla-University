#include <MsTimer2.h>

void flash()  // 인터럽트 시 동작할 함수
{
  static boolean output = HIGH; // 함수가 종료되어도 값 유지, output 함수를 HIGH로 정의
  
  digitalWrite(LED_BUILTIN, output);  // LED 켜기
  output = !output; // LOW로 값 변경, LED 끄기
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // LED를 출력모드로 정의

  MsTimer2::set(1000, flash); // 1000ms, 1초 간격으로 인터럽트 발생
  MsTimer2::start();  // 인터럽트 발생
}

void loop() { // 비워두기
}
