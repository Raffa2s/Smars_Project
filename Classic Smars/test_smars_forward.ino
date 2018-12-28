#include <AFMotor.h>

// test smars

AF_DCMotor R_motor(2); // defines Right motor connector
AF_DCMotor L_motor(1); // defines Left motor connector


void setup() {
  Serial.begin(9600); // sets up Serial library at 9600 bps
  L_motor.setSpeed(500); // sets L motor speed
  R_motor.setSpeed(500); // sets R motor speed
  R_motor.run(RELEASE); //turns R motor on
  L_motor.run(RELEASE); //turns L motor on
  }

void loop() {
  delay(2000); // wait 2 sec before start
   R_motor.run(FORWARD);
    L_motor.run(FORWARD);
    
}
