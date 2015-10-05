//Servo grabbing mechanism 
#include <Servo.h>
Servo servo1;
Servo servo2;

int posY = 90;
int posX = 90;



//char incomingCharacter2 = 0; // Setting up a character variable
void setup() {
    servo1.attach(9); // attaches the servo on pin 3 to the servo object
    servo2.attach(11);
    Serial.begin(9600); // opens serial port, sets data rate
    servo1.write(posX);
    servo2.write(posY);
}
void loop() {
  // Check if something is being received
  //if (Serial.available() > 0) {
    // read the incoming character:
    //incomingCharacter2 = Serial.read();
    //Serial.println("OK!"); // Send OK back to laptop
    //switch(incomingCharacter2)
  //{
 
  // Sweep
  // by BARRAGAN <http://barraganstudio.com>
  // This example code is in the public domain.
  // a maximum of eight servo objects can be created
  //int pos = 0; // variable to store the servo position
    //standaard positie
    posY = posY + 90;
    servo2.write(posY);
    delay(1000);
    posY = posY - 90;
    servo2.write(posY);
    delay(1000);
    //camera naar rechts
    posX = posX +  90;
    servo1.write(posX);
    delay(1000);
    posY = posY + 90;
    servo2.write(posY);
    delay(1000);
    posY = posY - 90;
    servo2.write(posY);
    delay(1000);
    //camera weer naar begin positie
    posX = posX -  90;
    servo1.write(posX);
    delay(1000);
    posY = posY + 90;
    servo2.write(posY);
    delay(1000);
    posY = posY - 90;
    servo2.write(posY);
    delay(1000);
    //camera naar links
    posX = posX - 90;
    servo1.write(posX);
    delay(1000);
    posY = posY + 90;
    servo2.write(posY);
    delay(1000);
    posY = posY - 90;
    servo2.write(posY);
    delay(1000);
    //camera naar begin positie
    posX = posX + 90;
    servo1.write(posX);
    delay(1000);
    
    
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
//case 'b': // Case block
//doSomethingElse();
//break;
}


