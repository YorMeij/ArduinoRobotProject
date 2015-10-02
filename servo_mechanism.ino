//Servo grabbing mechanism 
#include <servo.h>
Servo servo1;
Servo servo2;

char incomingCharacter2 = 0; // Setting up a character variable
void setup() {
    servo1.attach(3); // attaches the servo on pin 3 to the servo object
    servo2.attach(5);
    Serial.begin(9600); // opens serial port, sets data rate
}
void loop() {
  // Check if something is being received
  if (Serial.available() > 0) {
    // read the incoming character:
    incomingCharacter2 = Serial.read();
    Serial.println("OK!"); // Send OK back to laptop
    switch(incomingCharacter2)
  {
  case 'z': // Case block
  // Sweep
  // by BARRAGAN <http://barraganstudio.com>
  // This example code is in the public domain.
  // a maximum of eight servo objects can be created
  int pos = 0; // variable to store the servo position
  
    servo1.write(0);
    servo2.write(180);
    delay(15);
    servo1.write(0);
    servo2.write(180);
    delay(15);
  }
  //{
    //for(pos = 0; pos < 180; pos += 1) // goes from 0 degrees to 180 degrees
  //{ // in steps of 1 degree
    //myservo.write(pos); // tell servo to go to position in variable 'pos'
    //delay(15); // waits 15ms for the servo to reach the position
  //}
  //for(pos = 180; pos>=1; pos-=1) // goes from 180 degrees to 0 degrees  
  //{
    //myservo.write(pos); // tell servo to go to position in variable 'pos'
    //delay(15); // waits 15ms for the servo to reach the position
  //};
break;
//case 'b': // Case block
//doSomethingElse();
//break;
}
}
}

//servo precieze controle
Servo servoX;
Servo servoY;

int posY = 90;
int posX = 90;

void setup() {
  // put your setup code here, to run once:
  servoX.attach(11);
  servoY.attach(10);
  Serial.begin(9600);
  servoX.write(posX);
  servoY.write(posY);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    char Command = Serial.read();
    switch(Command)
    {
      case 'w':
        posY = posY + 5;
        servoY.write(posY);
      break;
      case 's':
        posY = posY - 5;
        servoY.write(posY);
      break;
      case 'a':
        posX = posX + 5;
        servoX.write(posX);
      break;
      case 'd':
        posX = posX - 5;
        servoX.write(posX);
      break;
    }
  }
}
