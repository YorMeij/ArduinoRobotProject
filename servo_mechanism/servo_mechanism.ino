//Servo grabbing mechanism 
#include <Servo.h>
Servo servo1;
Servo servo2;

char incomingCharacter2 = 0; // Setting up a character variable
void setup() {
    servo1.attach(3); // attaches the servo on pin 3 to the servo object
    servo2.attach(5);
    Serial.begin(9600); // opens serial port, sets data rate
    Serial.println("Initialised");
}
void loop() {
  // Check if something is being received
  if (Serial.available() > 0) {
    incomingCharacter2 = Serial.read();
    switch(incomingCharacter2)
  {
  case 'z': // Case block
  
    servo1.write(0);
    servo2.write(180);
    delay(15);
    servo1.write(180);
    servo2.write(0);
    break;
}
}
}
