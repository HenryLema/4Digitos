#include<Wire.h>
char dato;
void setup() {
  // put your setup code here, to run once:
Wire.begin();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){//
  dato=Serial.read();
  Wire.beginTransmission(4);
  Wire.write(dato);
  Wire.endTransmission();
  }
}
