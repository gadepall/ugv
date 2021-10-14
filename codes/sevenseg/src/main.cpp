//Driving Seven Segment Display using esp32
#include <Arduino.h>

void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(36, a); 
  digitalWrite(39, b); 
  digitalWrite(34, c); 
  digitalWrite(35, d); 
  digitalWrite(32, e); 
  digitalWrite(33, f);     
  digitalWrite(25, g); 
}
void setup() 
{
    pinMode(36, OUTPUT);  
    pinMode(39, OUTPUT);
    pinMode(34, OUTPUT);
    pinMode(35, OUTPUT);
    pinMode(32, OUTPUT);
    pinMode(33, OUTPUT);
    pinMode(25, OUTPUT);            
}
void loop() 
{
sevenseg(1,0,0,1,1,1,1);  
}
