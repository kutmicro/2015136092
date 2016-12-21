#include<Wire.h>
#include<Keyboard.h>
int r = 8;
int a = 9;
int w = 10;
int s = 11;
int d = 12;
void setup(){
  Serial.begin(9600);
  pinMode(r,INPUT_PULLUP);
  pinMode(w,INPUT_PULLUP);
  pinMode(a,INPUT_PULLUP);
  pinMode(s,INPUT_PULLUP);
  pinMode(d,INPUT_PULLUP);
}
void loop(){


  if(digitalRead(r)==LOW)
    Keyboard.press('r');
  else
  Keyboard.release('r');
  if(digitalRead(w)==LOW)
    Keyboard.press('w');
  else
  Keyboard.release('w');
  if(digitalRead(a)==LOW)
    Keyboard.press('a');
  else
  Keyboard.release('a');
  if(digitalRead(s)==LOW)
    Keyboard.press('s');
  else
  Keyboard.release('s');
  if(digitalRead(d)==LOW)
    Keyboard.press('d');
  else
  Keyboard.release('d');
  delay(3);
}
