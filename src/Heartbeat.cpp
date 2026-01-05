// heartbeat libaray
// send the pin to pluse in constructor
// pluse hearbeat every 2 seconds

#include "Arduino.h"

#include "Heartbeat.h"

#include <elapsedMillis.h>

elapsedMillis ledBlink;

Heartbeat::Heartbeat(int pin, uint32_t maxt, uint32_t mint)
{
  _pin = pin;
  _dely = maxt;
  _min = mint;
}


void Heartbeat::begin()
{
  ledBlink=0;
  pinMode(_pin, OUTPUT);
}


void Heartbeat::chk()
{
	static bool ledOn;
  if(ledBlink > _dely){
    digitalWrite(_pin, HIGH);
    ledBlink = 0;
    ledOn=true;
  }
  
  if(ledBlink > _min && ledOn){
    digitalWrite(_pin, LOW);
    ledOn=false;
  }

}
