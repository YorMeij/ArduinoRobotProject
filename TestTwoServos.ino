Servo servo1; // create servo object to control a servo
Servo servo2; // create servo object to control a servo
int pos = 0; // variable to store the servo position

int X = 9; // pinnumbers servos, currently not in machinedesign
int Y = 3;

void setup() {
	servo1.attach(X); // attaches the servo on pin X to the servo object
	servo2.attach(Y);
}
void loop() {
	// turn servo right
	for(pos = 0; pos < 180; pos += 1) { 
		servo1.write(pos); 
		servo2.write(180 - pos); // turn second servo in other direction #rebel
		delay(15); 
	}
	//turn servo left
	for(pos = 180; pos>=1; pos-=1){ 
		servo1.write(pos); 
		servo2.write(180 - pos); // turn second servo in other direction #rebel
		delay(15); 
	}
}


