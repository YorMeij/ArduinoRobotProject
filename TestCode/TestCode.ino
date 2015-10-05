char oldInput
char newInput
setup(){
	 Serial.begin(9600);
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
}

int proccesInput(char input){
	switch(input){
		case 'w':
			// do action associated with key w 
		break;
		case default:
			//set all pins to zero
		break;
	}
}

char getInput(){
	return Serial.read();
}
