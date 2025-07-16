#include <Arduino.h>
#include <Servo.h>

#define SERVO_PIN 13

Servo myServo;

void setup() {
  myServo.attach(SERVO_PIN);
}

void loop() {
  for (int pos = 0; pos <= 180; pos += 5) {
    myServo.write(pos);
    delay(100);
  }
  for (int pos = 180; pos >= 0; pos -= 5) {
    myServo.write(pos);
    delay(100);
  }
}
