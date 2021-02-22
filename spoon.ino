#include <LowPower.h>

void setup() {
  pinMode(1,INPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);

}

void loop() {
  
  attachInterrupt(0,fuc1,RISING);
  attachInterrupt(1,fuc2,RISING);
  attachInterrupt(2,fuc3,RISING);
  
}

void fuc1()               //btn1
{
  digitalWrite(6,HIGH);
  delay(30000);           
  digitalWrite(6,LOW);;
}

void fuc2()                //btn2
{
  digitalWrite(7,HIGH);
  delay(20000);           
  digitalWrite(7,LOW);
}

void fuc3()               //btn3
{
  digitalWrite(8,HIGH);
  delay(10000);           
  digitalWrite(8,LOW);
}
