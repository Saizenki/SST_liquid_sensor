/*
SST.h -Library for Optomax Digital Liquid Sensor from Sparkfun
Created by Kush Manchanda (www.github.com/Saizenki)
Released into public domain
*/

#ifndef SST_h
#define SST_h
#include "Arduino.h"

class SST
{
public:
SST(int pin);
int isDry();

private:
int _pin;

};

#endif