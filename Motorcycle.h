#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {
private:
    int engineCapacity;
    bool helmetIncluded;

public:
    Motorcycle();
    Motorcycle(int id, string brand, string model, int year, double dailyRate, bool available, int engineCapacity, bool helmetIncluded);
    ~Motorcycle();

    int getEngineCapacity() const;
    bool hasHelmetIncluded() const;

    void setEngineCapacity(int engineCapacity);
    void setHelmetIncluded(bool helmetIncluded);

    double calculateRentalCost(int days) const override;
    void display() const override;
};

#endif