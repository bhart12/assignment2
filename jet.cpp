//
// Created by Bryce Hart on 10/4/19.
//

#include "Jet.h"

Jet::Jet() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, string engineSize) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Jet::~Jet() = default;

string Jet::getEngineSize() {
    return myEngineSize;
}

void Jet::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Jet::mileageEstimate(double time) {
	srand(time(0));
	
    double mileage = ((rand() % 60) + 40) * time;
    if (fuelType == "Rocket" && numberOfEngines > 2) {
        mileage += mileage * 0.055;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}