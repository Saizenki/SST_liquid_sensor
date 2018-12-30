#include "Arduino.h"
#include "SST.h"

SST::SST(int pin)
{
pinMode(pin,INPUT);
_pin=pin;
}

int SST::isDry()
{
 int val=digitalRead(_pin);
  if ( val ) {
 	return 1;
  } else {
	return 0;
  }
}