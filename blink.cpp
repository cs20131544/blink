#include "blink.h"

Blink::Blink(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}
void Blink::on()
{
  digitalWrite(_pin,HIGH);
  delay(500);
}
void Blink::off()
{
  digitalWrite(_pin,LOW);
  dealy(300);
}
