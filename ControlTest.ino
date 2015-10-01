char incomingCharacter = 0; // Setting up a character variable
int disp = 0;
void setup() {
  Serial.begin(9600); // opens serial port, sets data rate
  pinMode(13, OUTPUT);
  digitalWrite(13,LOW);
}
void loop() {

  // Check if something is being received
  if (Serial.available() > 0) {
    // read the incoming character:
    incomingCharacter = Serial.read();
    //Serial.println("OK!"); // Send OK back to laptop
    switch(incomingCharacter){
      case 'a': // Case block
		disp = 1;
      break;
      case 'b': // Case block
		disp = 0;
      break;
    }
  } 
  
  if(disp > 0){
		digitalWrite(13,HIGH);
  } else {
	  digitalWrite(13,LOW);
  }  
}

