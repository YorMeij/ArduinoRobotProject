Servo myservo; // create servo object to control a servo
int pos = 0; // variable to store the servo position.
int X = 9; // pinnumber servo, currently not in machinedesign

void setup() {
	myservo.attach(X); // attaches the servo on pin X to the servo
	object
}
void loop() {
	// checks all possible turns
	for(int i =180; >=1; i--){ 		// turns backwards because of testing reasons.
		turnAndReturnToAngle(i); 	// turn to angle i, afterwards return back to 1. 
	}
}


void turnAndReturnToAngle(int i){
	// turn servo right
	for(pos = 0; pos < i; pos += 1) { 
		myservo.write(pos); 
		delay(15); 
	}
	//turn servo left
	for(pos = i; pos>=1; pos-=1){ 
		myservo.write(pos); 
		delay(15); 
	}
}