#ifndef LUXURYELECTRICCAR_H
#define LUXURYELECTRICCAR_H

#include "Car.h"
#include "ElectricFeature.h"
#include "LuxuryFeature.h"
#include <string>

using namespace std;

class LuxuryElectricCar : public Car, public ElectricFeature, public LuxuryFeature {
private:
    int autonomousLevel;

public:
    LuxuryElectricCar();
    LuxuryElectricCar(
        int id,
        string brand,
        string model,
        int year,
        double dailyRate,
        bool available,
        int doors,
        string fuelType,
        double batteryCapacity,
        double chargingTime,
        bool premiumSoundSystem,
        bool leatherSeats,
        int autonomousLevel
    );

    virtual ~LuxuryElectricCar();

    int getAutonomousLevel() const;
    void setAutonomousLevel(int autonomousLevel);

    double calculateRentalCost(int days) const override;
    void display() const override;
};

#endif