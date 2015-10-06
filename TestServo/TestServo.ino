#include <Servo.h>;   // include nessesary libs

Servo myservo;        // create servo object to control a servo
int pos = 0;          // variable to store the servo position.
int X = 9;            // pinnumber servo, currently not in machinedesign

void setup() {
	myservo.attach(X);  // attaches the servo on pin X to the servo object
}
void loop() {
	
	// turn servo right
	for(pos = 0; pos < 180; pos += 1) { 
		myservo.write(pos); 
		delay(15); 
	}
	//turn servo left
	for(pos = 180; pos>=1; pos-=1){ 
		myservo.write(pos); 
		delay(15); 
	}
}


