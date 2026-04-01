#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <string>

using namespace std;

class Car : virtual public Vehicle {
protected:
    int doors;
    string fuelType;

public:
    Car();
    Car(int id, string brand, string model, int year, double dailyRate, bool available, int doors, string fuelType);
    virtual ~Car();

    int getDoors() const;
    string getFuelType() const;

    void setDoors(int doors);
    void setFuelType(string fuelType);

    double calculateRentalCost(int days) const override;
    void display() const override;
};

#endif