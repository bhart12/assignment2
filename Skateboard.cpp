//
// Created by Bryce Hart on 10/4/19.
//

#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model) {//, int gearCount) {
    setBrand(brand);
    setModel(model);
    //setGearCount(gearCount);
}

Skateboard::~Skateboard() = default;

/*int Skateboard::getGearCount() {
    return myGearCount;
}*/

/*void Bicycle::setGearCount(int gearCount) {
    myGearCount = gearCount;
}*/

double Skateboard::mileageEstimate(double mileTime) {
    srand(time(0));
    double mileage = (((rand() % 5) + 1) / 10) * mileTime;
    //mileage += mileage * (myGearCount * 0.1);
    if(mileTime > 25 && mileTime < 250)
    {
	mileage += ((rand() % (int)(mileTime / 3.0)) + 1.0);
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();// + "\n\tGears: " + to_string(myGearCount);
}
