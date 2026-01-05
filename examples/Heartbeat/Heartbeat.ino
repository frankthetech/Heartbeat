/*
  Heartbeat libaray code, just a visual of the code still running. Flash the LED
  Constructor  Heartbeat name (pin#, time between pulses, pulse on time)
 */

#include <Heartbeat.h>
//constructor
Heartbeat pulse(25, 2000, 100);  //set the pin# to pulse and max time between pulses, pulse on time

void setup() {
  pulse.begin();
}

void loop() {
  pulse.chk();  //check it in loop
  delay(10);
  
}
