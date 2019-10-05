//
// Created by Bryce Hart on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"
#include <string>
#include <time.h>

class Skateboard : public Vehicle {

private:
    //int myGearCount;

public:
    explicit Skateboard(string brand, string model);//, int gearCount = 1);

    virtual ~Skateboard();
    //int getGearCount();
    //void setGearCount(int gearCount);
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_SKATEBOARD_H
