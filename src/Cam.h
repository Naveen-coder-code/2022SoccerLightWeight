#include <Arduino.h>
#include <string>
#include <Adafruit_I2CDevice.h>
#include <iostream>

class Cam {
	public:
        Cam();
        int *angleAverage;
        double dist;
        double buff;
        double camVal;
        double camAverage();
        int *distAverage;
        double camSend(String role);
    private:
        
        double CamCalc();
        std::string buffer;
        char read;

};