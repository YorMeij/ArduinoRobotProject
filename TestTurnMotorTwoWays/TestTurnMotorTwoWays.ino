int IN1 = 3; // forward pin
int IN2 = 9; // zero pin

void setup() { 
	pinMode(IN1, OUTPUT);
	pinMode(IN2, OUTPUT);
}

// Turn forward for a second, repeat forever
void loop() {
	digitalWrite(IN2, LOW);
	digitalWrite(IN1, HIGH); // turn for a second
	delay(1000); 
	
	digitalWrite(IN1, LOW); // turn backwards for a second
	digitalWrite(IN2, HIGH);
	delay(1000); // wait for a second
}
