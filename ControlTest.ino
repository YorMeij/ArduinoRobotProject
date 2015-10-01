char incomingCharacter = 0; // Setting up a character variable
void setup() {
  Serial.begin(9600); // opens serial port, sets data rate
  pinMode(13, OUTPUT);
  digitalWrite(13,LOW);
}
void loop() {
  delay(1000);
  // Check if something is being received
  if (Serial.available() > 0) {
    // read the incoming character:
    incomingCharacter = Serial.read();
    //Serial.println("OK!"); // Send OK back to laptop
    switch(incomingCharacter){
      case 'a': // Case block
      digitalWrite(13,HIGH);
      break;
      case 'b': // Case block
      digitalWrite(13,LOW);
      break;
    }
  } 
}

