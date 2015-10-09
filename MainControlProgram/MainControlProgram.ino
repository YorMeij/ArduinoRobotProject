void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

//TODO: initilise function

// input:   the tilt servo
// action:  tilts the arm
// return:  1 when done
int tilt(Servo servo){
  int degrees = 180;  // determines how many degrees the servo should turn in order to pinch. 
            // defined in this manner because of tweakability
  return turnServoTo(servo, degrees);
  
}

// input:   the tilt servo
// action:  returns the arm to normal
// return:  1 when done
int lower(Servo servo){
  int degrees = 0;  // determines how many degrees the servo should turn in order to pinch. 
            // defined in this manner because of tweakability
  return turnServoTo(servo, degrees);
}

// input:   the two pinch servos: servo left and servo right, both in outer position
// action:  pinches an object
// return:  1 when done
int pinch(Servo left, Servo right){
  int degrees = 180;  // determines how many degrees the servo should turn in order to pinch. 
            // defined in this manner because of tweakability
  int positionLeft = left.read();
  int positionRight = right.read();
  for(int i =0 ; i < degrees; i++){
    turnServoTo(left, positionLeft+i);
    turnServoTo(right, positionRight-i);
  }
  return 1;
}

// input:   the two pinch servos: servo left and servo right, both in inner position
// action:  opens the pinch servos
// return:  1 when done
int open(Servo left, Servo right){
  int degrees = 180;  // determines how many degrees the servo should turn in order to pinch. 
            // defined in this manner because of tweakability
  int positionLeft = left.read();
  int positionRight = right.read();
  for(int i =1 ; i < degrees; i++){
    turnServoTo(left, positionLeft-i);
    turnServoTo(right, positionRight+i);
  }
  return 1;
  
}

// input:   a servo and a position that that servo must go to.
// action:  tuns the servo to that position
// return:  a 1 when done
int turnServoTo(Servo servo, int position){
  int previous = servo.read();
  int move = 1;
  if (position < previous){
    move = -1;
  }   
  // turn servo
  int i = previous;
  while(i != position){
    servo.write(i);
    i += move;
    delay(lag);
  }
  return 1;
}

