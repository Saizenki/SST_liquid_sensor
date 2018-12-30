# SST_liquid_sensor
Arduino library with example to use Optomax Digital Liquid Sensor from sparkfun (https://www.sparkfun.com/products/13835)

I created this since I was using this sensor with many others and I need a single header file for the pinMode and function.

Steps to install:
1. Download Zip file or git clone <url>
2. Open Arduino IDE
3. Go to Sketch
4. Go to Import Liibrary
5. Go to Add Library
6. Select the Zip File
7. Voila! It will be added
8. Restart Arduino IDE

Error:
If it shows error regarding ASCI, rename the zip to SLS

Usage:
Define pin number in instance of SST:-
SST sst(your_pin_number)
