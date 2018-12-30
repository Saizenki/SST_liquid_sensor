/*Created by Kush Manchanda (github.com/Saizenki)
Download library from gihtub= https://github.com/Saizenki/SST_liquid_sensor

Liquid level detection using an SST sensor:Optomax Digital Liquid Sensor

 When a liquid touches the tip of the sensor,
 an LED at pin 13 turns on.
 
 Hardware:
     Sensor    | Arduino
  -------------|---------
    Vs (RED)   |    5V
   Out (GREEN) |   pin 7
   GND (BLUE)  |    GND
*/
#include <SST.h>

SST sst(6);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int val= sst.isDry();
  if (val){
    Serial.println("No Water");
  }  else {
    Serial.println("Water present");
  }
delay(500);
}

