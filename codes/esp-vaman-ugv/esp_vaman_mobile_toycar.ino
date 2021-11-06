#include <esp32PWMUtilities.h>

#include <DabbleESP32.h>

void _setup() {
 
  Dabble.begin("MyEsp");
}

void _loop() {
  Dabble.processInput();
}

void setup() {
  _setup();
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
   pinMode(18, OUTPUT);
}

void loop() {
  _loop();
  if (GamePad.isPressed(0)) {
    digitalWrite(16,HIGH);
    digitalWrite(17,HIGH); 
     digitalWrite(18,LOW);
  }
  else {
    if (GamePad.isPressed(1)) {
      digitalWrite(16,LOW);
      digitalWrite(17,LOW);
      digitalWrite(18,HIGH);
    }
    else {
      if (GamePad.isPressed(3)) {
        digitalWrite(16,HIGH);
        digitalWrite(17,LOW);
      }
      else {
        if (GamePad.isPressed(2)) {
         digitalWrite(16,LOW);
         digitalWrite(17,HIGH);
        }
        else {
          digitalWrite(16,HIGH);
          digitalWrite(17,HIGH);
          digitalWrite(18,HIGH);
        }
      }
    }
  }
}
