#include <Arduino.h>
#include <trig.h>
class Motor
{

public:
    Motor();
    void Move(double robotAngle,int orientation);

private:
    int speedRR;
    int speedFR;
    int speedFL;
    int speedRL;
    int controlRR;
    int controlFR;
    int controlFL;
    int controlRL;
    void GetMotorDirectionAndSpeed(int &direction, double &power,double maxValue );
};