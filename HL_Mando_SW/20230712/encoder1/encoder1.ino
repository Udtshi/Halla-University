const int EncoderAPin = 2;
const int EncoderBPin = 3;

volatile int counter = 0;
volatile int encoderB;

unsigned long enc_time;
unsigned long enc_time_old;
unsigned long enc_time_diff;

/*
  digitalWrite(2, HIGH);
  Serial.println(2);
  digitalWrite(2, LOW);
*/
//width:247us, period:255us
//pulse:410

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

  pinMode(EncoderAPin, INPUT_PULLUP);
  pinMode(EncoderBPin, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(EncoderAPin), Encoder, RISING);
}

void loop()
{
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
