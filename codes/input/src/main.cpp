//Code released under GNU GPL.  Free to use for anything.
//Driving Seven Segment Display using esp32 with binary inputs
#include <Arduino.h>

void sevenseg(int a,int b,int c,int d,int e,int f,int g)
{
  digitalWrite(32, a); 
  digitalWrite(33, b); 
  digitalWrite(25, c); 
  digitalWrite(26, d); 
  digitalWrite(27, e); 
  digitalWrite(14, f);     
  digitalWrite(12, g); 

}

void binsevenseg(int A, int B, int C, int D)
{
	int a, b, c, d, e, f, g;
	
a = A&&!B&&!C&&!D || !A&&!B&&C&&!D;
b = A&&!B&&C&&!D || !A&&B&&C&&!D;
c = !A&&B&&!C&&!D;
d = A&&!B&&!C&&!D || !A&&!B&&C&&!D || A&&B&&C&&!D;
e = A&&!B&&!C&&!D || A&&B&&!C&&!D || !A&&!B&&C&&!D || A&&!B&&C&&!D || A&&B&&C&&!D || A&&!B&&!C&&D;
f = A&&!B&&!C&&!D || !A&&B&&!C&&!D || A&&B&&!C&&!D || A&&B&&C&&!D;
g = !A&&!B&&!C&&!D || A&&!B&&!C&&!D || A&&B&&C&&!D;
sevenseg( a, b, c, d, e, f, g);
}
void setup() 
{
    pinMode(32, OUTPUT);  
    pinMode(33, OUTPUT);
    pinMode(25, OUTPUT);
    pinMode(26, OUTPUT);
    pinMode(27, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(12, OUTPUT);            
    pinMode(36, INPUT);  
    pinMode(39, INPUT);
    pinMode(34, INPUT);
    pinMode(35, INPUT);

}

// the loop function runs over and over again forever
void loop() {
int A,B,C,D;  
A = digitalRead(36);//LSB  
B = digitalRead(39);  
C = digitalRead(34);  
D = digitalRead(35);//MSB  
  
binsevenseg(A,B,C,D);
}
