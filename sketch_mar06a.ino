int red1=13;
int yellow1=12;
int green1=11;
int red2=7;
int yellow2=6;
int green2=5;
int red3=52;
int green3=48;
int yellow3=50;
int red4=40;
int green4=36;
int yellow4=38;
int sensor1=10;
int sensor2=4;
int sensor3=46;
int sensor4=34;

void setup(){
pinMode(red1,OUTPUT);
pinMode(red2,OUTPUT);
pinMode(red3,OUTPUT);
pinMode(red4,OUTPUT);
pinMode(yellow1,OUTPUT);
pinMode(yellow2,OUTPUT);
pinMode(yellow3,OUTPUT);
pinMode(yellow4,OUTPUT);
pinMode(green1,OUTPUT);
pinMode(green2,OUTPUT);
pinMode(green3,OUTPUT);
pinMode(green4,OUTPUT);
}


void loop() {

if( digitalRead(sensor1) && !digitalRead(sensor2) && !digitalRead(sensor3) && !digitalRead(sensor4) ){
digitalWrite(red1,LOW);
digitalWrite(red2,LOW);
digitalWrite(red3,LOW);
digitalWrite(red4,LOW);
digitalWrite(yellow1,LOW);
digitalWrite(yellow2,LOW);
digitalWrite(yellow3,LOW);
digitalWrite(yellow4,LOW);
digitalWrite(green1,HIGH);
digitalWrite(green2,LOW);
digitalWrite(green3,LOW);
digitalWrite(green4,LOW);
delay(1000);
digitalWrite(green1,LOW);
digitalWrite(yellow1,HIGH);

}

else if(!digitalRead(sensor1) && digitalRead(sensor2) && !digitalRead(sensor3) && !digitalRead(sensor4)){
digitalWrite(red1,LOW);
digitalWrite(red2,LOW);
digitalWrite(red3,LOW);
digitalWrite(red4,LOW);
digitalWrite(yellow1,LOW);
digitalWrite(yellow2,LOW);
digitalWrite(yellow3,LOW);
digitalWrite(yellow4,LOW);
digitalWrite(green1,LOW);
digitalWrite(green2,HIGH);
digitalWrite(green3,LOW);
digitalWrite(green4,LOW);
delay(2000);
digitalWrite(green2,LOW);
digitalWrite(yellow2,HIGH);
}

else if(!digitalRead(sensor1) && !digitalRead(sensor2) && digitalRead(sensor3) && !digitalRead(sensor4)){
digitalWrite(red1,LOW);
digitalWrite(red2,LOW);
digitalWrite(red3,LOW);
digitalWrite(red4,LOW);
digitalWrite(yellow1,LOW);
digitalWrite(yellow2,LOW);
digitalWrite(yellow3,LOW);
digitalWrite(yellow4,LOW);
digitalWrite(green1,LOW);
digitalWrite(green2,LOW);
digitalWrite(green3,HIGH);
digitalWrite(green4,LOW);
delay(2000);
digitalWrite(green3,LOW);
digitalWrite(yellow3,HIGH);
}


else if(!digitalRead(sensor1) && !digitalRead(sensor2) && !digitalRead(sensor3) && digitalRead(sensor4)){
digitalWrite(red1,LOW);
digitalWrite(red2,LOW);
digitalWrite(red3,LOW);
digitalWrite(red4,LOW);
digitalWrite(yellow1,LOW);
digitalWrite(yellow2,LOW);
digitalWrite(yellow3,LOW);
digitalWrite(yellow4,LOW);
digitalWrite(green1,LOW);
digitalWrite(green2,LOW);
digitalWrite(green3,LOW);
digitalWrite(green4,HIGH);
delay(2000);
digitalWrite(green4,LOW);
digitalWrite(yellow4,HIGH);
}
}
