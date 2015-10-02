//Moter vooruit
char incomingCharacter1 = 0; // Setting up a character variable 
int motorForwardPin = 10;
void setup() {
  Serial.begin(9600); // opens serial port, sets data rate
  pinMode(motorForwardPin, OUTPUT);
}
void loop() {
  // Check if something is being received
  if (Serial.available() > 0) {
    // read the incoming character:
    incomingCharacter1 = Serial.read();
    Serial.println("OK!"); // Send OK back to laptop
    switch(incomingCharacter1)
    {
      case 'q': // Case block
       //Turn M1
       //Turns on the DC motor connected to M1 every second
      // Pin 10 should be connected to IN1 on the Motor Shield.
      // give it a name:
    
      // the setup routine runs once when you press reset:
      // the loop routine runs over and over again forever:
        digitalWrite(motorForwardPin, HIGH); // turn M1 on (HIGH is the voltage level)
        delay(1000); // wait for a second
        digitalWrite(motorForwardPin, LOW); // turn M1 off by making the voltage LOW
        delay(1000); // wait for a second
      break;
//case 'w': // Case block
//doSomethingElse();
//break;
}
}
}
