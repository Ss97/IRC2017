/*
Sufyan Saori
Servo Murni
*/
#include <Servo.h>

Servo ganteng;
const int pinServo = A0;

void setup() {
  // put your setup code here, to run once:
  ganteng.attach(pinServo);
}

void loop() {
  // put your main code here, to run repeatedly:
  ganteng.write(90);
  delay(3000);
  ganteng.write(45);
  delay(3000);  
  ganteng.write(180);
  delay(1000);
}
