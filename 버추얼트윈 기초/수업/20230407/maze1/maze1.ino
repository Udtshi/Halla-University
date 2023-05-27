//////////////////////// sonar ///////////////////////
#include <NewPing.h>

#define SONAR_NUM 3      // Number of sensors.
#define MAX_DISTANCE 150 // Maximum distance (in cm) to ping.

#define Front 0
#define Left  1
#define Right 2

#define TRIG1 2  //  1번 초음파 센서 Trig 핀 번호
#define ECHO1 3  //  1번 초음파 센서 Echo 핀 번호

#define TRIG2 4  //  2번 초음파 센서 Trig 핀 번호
#define ECHO2 5  //  2번 초음파 센서 Echo 핀 번호

#define TRIG3 6  //  3번 초음파 센서 Trig 핀 번호
#define ECHO3 7  //  3번 초음파 센서 Echo 핀 번호

NewPing sonar[SONAR_NUM] = {   // Sensor object array.
  NewPing(TRIG1, ECHO1, MAX_DISTANCE), // Each sensor's trigger pin, echo pin, and max distance to ping.
  NewPing(TRIG2, ECHO2, MAX_DISTANCE),
  NewPing(TRIG3, ECHO3, MAX_DISTANCE)
};

float front_sonar, left_sonar, right_sonar = 0.0;

////////////////////// Maze Status ////////////////////
int maze_status = 0;


void setup() {
  Serial.begin(115200); // 통신 속도를 115200으로 정의
}

void check_maze_status(void){
  if((left_sonar>= 0) && (left_sonar <= 200) && (right_sonar >= 0) && (right_sonar <= 200) && (front_sonar >= 0) && (front_sonar <= 200)){
    maze_status = 4;
    Serial.println("maze_status = 4"); 
  }
  else if ((left_sonar>= 0) && (left_sonar <= 200) && (right_sonar >= 0) && (right_sonar <= 200)){
    maze_status = 1;
    Serial.println("maze_status = 1");   
  }
  else if((left_sonar>= 0) && (left_sonar <= 200) && (front_sonar >= 0) && (front_sonar <= 200)){
    maze_status = 2;
    Serial.println("maze_status = 2"); 
  }
  else if((right_sonar>= 0) && (right_sonar <= 200) && (front_sonar >= 0) && (front_sonar <= 200)){
    maze_status = 3;
    Serial.println("maze_status = 3"); 
  }
  else {
    maze_status = 0;
    Serial.println("maze_status = 0");
  }
}

void loop() {
  front_sonar = sonar[Front].ping_cm()*10;  // 전방 센서 측정
  left_sonar = sonar[Left].ping_cm()*10;    // 좌측 센서 측정
  right_sonar = sonar[Right].ping_cm()*10;  // 우측 센서 측정
  
  if(front_sonar == 0.0)  front_sonar = MAX_DISTANCE;
  if(left_sonar == 0.0)  left_sonar = MAX_DISTANCE;
  if(right_sonar == 0.0)  right_sonar = MAX_DISTANCE;

  Serial.print("L: ");Serial.print(left_sonar);   Serial.print("  ");
  Serial.print("F: ");Serial.print(front_sonar);  Serial.print("  ");
  Serial.print("R: ");Serial.println(right_sonar);

  check_maze_status();
  delay(1000);
}
