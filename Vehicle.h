#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include "RentalEntity.h"

using namespace std;

class Vehicle : public RentalEntity {
protected:
    int id;
    string brand;
    string model;
    int year;
    double dailyRate;
    bool available;

    static int totalVehicles;

public:
    Vehicle();
    Vehicle(int id, string brand, string model, int year, double dailyRate, bool available);
    Vehicle(const Vehicle& other);
    Vehicle& operator=(const Vehicle& other);
    virtual ~Vehicle();

    int getId() const override;
    static int getTotalVehicles();

    string getBrand() const;
    string getModel() const;
    int getYear() const;
    double getDailyRate() const;
    bool isAvailable() const;

    void setBrand(string brand);
    void setModel(string model);
    void setYear(int year);
    void setDailyRate(double dailyRate);
    void setAvailable(bool available);

    virtual double calculateRentalCost(int days) const;
    virtual void display() const override;
};

#endif