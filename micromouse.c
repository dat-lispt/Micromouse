#define PWMA PB8
#define AIN2 PA12
#define AIN1 PA7
#define STBY PA11
#define BIN1 PB0
#define BIN2 PB1
#define PWMB P89

#define leftOut PB12
#define leftOut2 PB13
#define rightOut1 PB14
#define rightOut2 PB15

#define buzzer PB11

void motorDiver(){
    pinMode(PWMA,OUTPUT);
    pinMode( AIN2, OUTPUT);
    pinMode( AIN1, OUTPUT);
    pinMode( STBY, OUTPUT);
    pinMode( BIN1, OUTPUT);
    pinMode( BIN2, OUTPUT);
    pinMode( PWMB, OUTPUT);
}

void motorInterrupt(){
    pinMode( leftOut , INPUT);
    pinMode( leftOut2 , INPUT);
    pinMode( rightOut1, INPUT);
    pinMode( rightOut2, INPUT);
}

void buzz(){
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    delay(2002);
}

void buzzTwice(){
    digitalWrite(buzzer, HIGH);
    delay(60);
    digitalWrite(buzzer,LOW);
    delay(75);
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
}

void buzzDone(){
    digitalWrite(buzzer, HIGH);
    delay(75);
    digitalWrite(buzzer,LOW);
    delay(50);
    digitalWrite(buzzer, HIGH);
    delay(75);
    digitalWrite(buzzer,LOW);
    delay(50);
    digitalWrite(buzzer, HIGH);
    delay(150);
    digitalWrite(buzzer,LOW);
}
