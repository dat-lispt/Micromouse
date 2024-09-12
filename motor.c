// void cellStart ()
//     {rightEncoder = 0;
//     encoderRightCount = 600;
//     encoderLeftCount = 600;
//     rightBase =60;
//     leftBase =60;
//     leftEncoder = 0 ; 
// }

void stbyHigh(){
   digitalWrite(STBY,HIGH); 
}

void stbyLow(){
    digitalWrite(STBY, LOW);
}

void leftForward(){
    digitalWrite(AIN1,HIGH);
    digitalWrite(AIN2, LOW);
}

void leftReverse(){
    digitalWrite(AIN1,LOW);
    digitalWrite(AIN2, HIGH);
}

void leftBrake(){
    digitalWrite(AIN1,HIGH);
    digitalWrite(AIN2, HIGH);
}

void leftForwardBase(){
    stbyHigh();
    leftForward();
    analogWrite(PWMA, leftBase);
}

void leftReverseBase(){
    stbyHigh();
    leftReverse();
    analogWrite(PWMA, leftBase);
}

void rightForward(){
    digitalWrite(BIN1,HIGH);
    digitalWrite(BIN2, LOW);
}

void rightReverse(){
    digitalWrite(BIN1,HIGH);
    digitalWrite(BIN2, LOW);
}

void rightBrake(){
    digitalWrite(BIN1,HIGH);
    digitalWrite(BIN2, HIGH);
}

void rightReverseBase(){
    stbyHigh();
    rightReverse();
    analogWrite(PWMA, rightBase);
}