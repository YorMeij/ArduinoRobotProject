char oldInput
char newInput

int disp =0;

setup(){
	 Serial.begin(9600);
	 pinMode(13,OUTPUT);
}

loop(){
	//check if the input has changed
	oldInput = newInput;
	newInput = getInput();
	int delta = oldInput - newInput;
	
	if(delta != 0){
		// do the thing
		proccesInput(newInput);
	}	
	output();
}

int proccesInput(char input){
	switch(input){
		case 'a':
			// do action associated with key a
			disp = 1;
		break;
		case 'b':
			disp = 0;
		break;
		case default:
			//set all pins to zero
		break;
	}
}

char getInput(){
	return Serial.read();
}

int output(){
	if(disp > 1) {
		digitalWrite(13,HIGH)
	} else {
		digitalWrite(13,LOW);
	}
}