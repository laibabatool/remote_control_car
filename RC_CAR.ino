#include <AFMotor.h>

#include <AFmotor.h>

AF_DCMotor motor1(1, MOTOR12_1KHZ);
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);

char command;
void setup() {
  Serial.begin(9600);
  }

void loop() {
  if(Serial.available()>0)
  {
    command = Serial.read();
    Stop();

    switch(command)
    {
      case 'F':
      motor1.setSpeed(255);
      motor1.run(FORWARD);
      motor2.setSpeed(255);
      motor2.run(FORWARD);
      motor3.setSpeed(255);
      motor3.run(FORWARD);
      motor4.setSpeed(255);
      motor4.run(FORWARD);
      
      break;
      case 'B':
      motor1.setSpeed(255);
      motor1.run(BACKWARD);
      motor2.setSpeed(255);
      motor2.run(BACKWARD);
      motor3.setSpeed(255);
      motor3.run(BACKWARD);
      motor4.setSpeed(255);
      motor4.run(BACKWARD); 
      
      break;
      case 'L':
      motor1.setSpeed(255);
      motor1.run(FORWARD);
      motor2.setSpeed(255);
      motor2.run(BACKWARD);
      motor3.setSpeed(255);
      motor3.run(BACKWARD);
      motor4.setSpeed(255);
      motor4.run(FORWARD); 
      break;
      case 'R':
      motor1.setSpeed(255);
      motor1.run(BACKWARD);
      motor2.setSpeed(255);
      motor2.run(FORWARD);
      motor3.setSpeed(255);
      motor3.run(FORWARD);
      motor4.setSpeed(255);
      motor4.run(BACKWARD); 
      break;
    }
  }

}

void Stop()
{
      motor1.setSpeed(0);
      motor1.run(RELEASE);
      motor2.setSpeed(0);
      motor2.run(RELEASE);
      motor3.setSpeed(0);
      motor3.run(RELEASE);
      motor4.setSpeed(0);
      motor4.run(RELEASE); 
}
