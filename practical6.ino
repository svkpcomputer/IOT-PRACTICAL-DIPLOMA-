#include <Servo.h>
#include <Stepper.h>

const int stepsPerRevolution = 2048;

Stepper myStepper(stepsPerRevolution, 8, 10, 11, 12);

Servo myServo;

void setup()
{
  Serial.begin(9600);

  myServo.attach(9);

  myStepper.setSpeed(10);
}

void loop()
{
  // Servo Position Control

  Serial.println("Servo at 0 Degree");
  myServo.write(0);
  delay(1000);

  Serial.println("Servo at 90 Degree");
  myServo.write(90);
  delay(1000);

  Serial.println("Servo at 180 Degree");
  myServo.write(180);
  delay(1000);

  // Stepper Clockwise

  Serial.println("Stepper Clockwise");
  myStepper.step(2048);
  delay(1000);

  // Stepper Anticlockwise

  Serial.println("Stepper Anticlockwise");
  myStepper.step(-2048);
  delay(1000);
}