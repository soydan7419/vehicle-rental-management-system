#ifndef ELECTRICFEATURE_H
#define ELECTRICFEATURE_H

#include "Vehicle.h"

class ElectricFeature : virtual public Vehicle {
protected:
    double batteryCapacity;
    double chargingTime;

public:
    ElectricFeature();
    ElectricFeature(double batteryCapacity, double chargingTime);
    virtual ~ElectricFeature();

    double getBatteryCapacity() const;
    double getChargingTime() const;

    void setBatteryCapacity(double batteryCapacity);
    void setChargingTime(double chargingTime);

    void displayElectricInfo() const;
};

#endif