#include "ElectricFeature.h"
#include <iostream>

ElectricFeature::ElectricFeature() : batteryCapacity(0.0), chargingTime(0.0) {
}

ElectricFeature::ElectricFeature(double batteryCapacity, double chargingTime)
    : batteryCapacity(batteryCapacity), chargingTime(chargingTime) {
}

ElectricFeature::~ElectricFeature() {
}

double ElectricFeature::getBatteryCapacity() const {
    return batteryCapacity;
}

double ElectricFeature::getChargingTime() const {
    return chargingTime;
}

void ElectricFeature::setBatteryCapacity(double batteryCapacity) {
    this->batteryCapacity = batteryCapacity;
}

void ElectricFeature::setChargingTime(double chargingTime) {
    this->chargingTime = chargingTime;
}

void ElectricFeature::displayElectricInfo() const {
    std::cout << "Battery capacity: " << batteryCapacity << " kWh" << std::endl;
    std::cout << "Charging time: " << chargingTime << " hours" << std::endl;
}