#include <Servo.h>

Servo myServo;

void setup() {
  Serial.begin(9600);       // initialize serial communications
  myServo.attach(9);
} 
 

void loop(){
  int sensor = analogRead(A0);
  int angle = map(sensor, 0, 1023, 0, 180);
  myServo.write(angle);
  delay(20);
}

