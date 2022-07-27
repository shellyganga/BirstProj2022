#include <Wire.h>

#include "SparkFunBME280.h"
BME280 mySensor;

#include "I2C_32Bit.h"


void setup() {
  //init devices
  //specify addresses
  //initalize time with 1 secound period
  //initalize heater boolean
  Timer1.attatch(det_heat)

}

void det_heat(int deltime){
  
}

void start_pressure_sensor(){
                            
}


void loop() {
  start_pressure_sensor()
  if(timeTriggered){
    det_heat(int deltime)
  }
  
   
}
