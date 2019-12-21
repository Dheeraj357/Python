#include <Servo.h>
Servo myservo; 
int pos = 0; 
int state; int flag=0;
void setup() 
{ 
myservo.attach(7); 
//Begin Is Function Push Motar 
Serial.begin(9600);
myservo.write(180); 
delay(10); }
void loop()
{ 
if(Serial.available() > 0)
{ 
state = Serial.read();
flag=0; 
}     // if the state is '0' the DC motor will turn off 
if (state == '0')
{ 
myservo.write(180); 
delay(10);  
} 
else if (state == '1') 
{ 
myservo.write(55); 
delay(10); 

} // if The State Is '1' The Dc Motor Will Turn On   
}
