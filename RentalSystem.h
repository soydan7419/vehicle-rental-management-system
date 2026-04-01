#ifndef RENTALSYSTEM_H
#define RENTALSYSTEM_H

#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "LuxuryElectricCar.h"
#include "Customer.h"
#include "Employee.h"
#include "Reservation.h"
#include "VehicleException.h"

class RentalSystem {
private:
    std::vector<Vehicle*> vehicles;
    std::vector<Customer> customers;
    std::vector<Employee> employees;
    std::vector<Reservation> reservations;

public:
    RentalSystem();
    ~RentalSystem();

    void addVehicle(Vehicle* vehicle);
    void addCustomer(const Customer& customer);
    void addEmployee(const Employee& employee);
    void addReservation(const Reservation& reservation);

    void showAllVehicles() const;
    void showAvailableVehicles() const;
    void showAllCustomers() const;
    void showAllEmployees() const;
    void showAllReservations() const;

    Vehicle* findVehicleById(int id) const;
    Customer* findCustomerById(int id);

    void deleteVehicle(int id);
    void updateVehicleRate(int id, double newRate);
    void makeReservation(int reservationId, int customerId, int vehicleId, int numberOfDays);
};

#endif