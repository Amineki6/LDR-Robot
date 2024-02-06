#include <Servo.h>
Servo myservo;

#define IRsensorPin 11
#define IRledPin 10

const int RightSensor = 2;
const int LeftSensor = 0;

int IR;
int SensorLeft;
int SensorRight;
int SensorDifference;

void IR38Write() {
  for(int i = 0; i <= 384; i++) {
    digitalWrite(IRledPin, HIGH);
    delayMicroseconds(13);
    digitalWrite(IRledPin, LOW);
    delayMicroseconds(13);
  }
}
void setup() {
myservo.attach(5);
pinMode(IRledPin, OUTPUT);
digitalWrite(IRledPin, LOW);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(LeftSensor, INPUT);
pinMode(RightSensor, INPUT);
Serial.begin(9600);
Serial.println(" \nBeginning Light Seeking Behavior");
}


void loop() {
IR38Write();
IR = digitalRead(IRsensorPin);
delay(50);
SensorLeft = 1023 - analogRead(LeftSensor);
delay(1);
SensorRight = 1023 - analogRead(RightSensor); 
delay(1);
SensorDifference = abs(SensorLeft - SensorRight);

Serial.print("Left Sensor = ");
Serial.print(SensorLeft);
Serial.print("\t");
Serial.print("Right Sensor = ");
Serial.print(SensorRight);
Serial.print("\t");


if (SensorLeft > SensorRight && SensorDifference > 75 && IR == HIGH) {
Serial.println("Left");
digitalWrite(8, HIGH); 
delay(250);
  digitalWrite(8, LOW);
  delay(100);

}

if (IR == LOW){
digitalWrite(8, HIGH); 
delay(1500);
  digitalWrite(8, LOW);
  digitalWrite(8, LOW);
    delay(150);

}

if (SensorLeft < SensorRight && SensorDifference > 75 && IR == HIGH) {
digitalWrite(9, HIGH);
delay(250);
digitalWrite(9, LOW);
  delay(100);
}

else if (SensorDifference < 75 && IR == HIGH) {
Serial.println("Forward");
digitalWrite(8, HIGH);  
digitalWrite(9, HIGH);
delay(500);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
    delay(250);
}
Serial.print("\n");
}