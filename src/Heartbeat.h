/*
  Heartbeat.h code
 */
#ifndef Heartbeat_h

#define Heartbeat_h  // the #include statement and code go here...

#include "Arduino.h"

class Heartbeat
{
   public:
	Heartbeat(int pin, uint32_t maxt, uint32_t mint);
	void begin();
	void chk();
   private:
    static bool ledOn;
    int _pin;
	uint32_t _maxt;
	uint32_t _dely;
	uint32_t _min;
};


#endif
