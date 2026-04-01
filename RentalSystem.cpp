#include "RentalSystem.h"
#include <iostream>

RentalSystem::RentalSystem() {
}

RentalSystem::~RentalSystem() {
    for (Vehicle* vehicle : vehicles) {
        delete vehicle;
    }
}

void RentalSystem::addVehicle(Vehicle* vehicle) {
    vehicles.push_back(vehicle);
}

void RentalSystem::addCustomer(const Customer& customer) {
    customers.push_back(customer);
}

void RentalSystem::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void RentalSystem::addReservation(const Reservation& reservation) {
    reservations.push_back(reservation);
}

void RentalSystem::showAllVehicles() const {
    if (vehicles.empty()) {
        std::cout << "No vehicles found." << std::endl;
        return;
    }

    for (const Vehicle* vehicle : vehicles) {
        vehicle->display();
        std::cout << "------------------------" << std::endl;
    }
}

void RentalSystem::showAvailableVehicles() const {
    bool found = false;

    for (const Vehicle* vehicle : vehicles) {
        if (vehicle->isAvailable()) {
            vehicle->display();
            std::cout << "------------------------" << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "No available vehicles found." << std::endl;
    }
}

void RentalSystem::showAllCustomers() const {
    if (customers.empty()) {
        std::cout << "No customers found." << std::endl;
        return;
    }

    for (const Customer& customer : customers) {
        customer.display();
        std::cout << "------------------------" << std::endl;
    }
}

void RentalSystem::showAllEmployees() const {
    if (employees.empty()) {
        std::cout << "No employees found." << std::endl;
        return;
    }

    for (const Employee& employee : employees) {
        employee.display();
        std::cout << "------------------------" << std::endl;
    }
}

void RentalSystem::showAllReservations() const {
    if (reservations.empty()) {
        std::cout << "No reservations found." << std::endl;
        return;
    }

    for (const Reservation& reservation : reservations) {
        std::cout << reservation;
        std::cout << "------------------------" << std::endl;
    }
}

Vehicle* RentalSystem::findVehicleById(int id) const {
    for (Vehicle* vehicle : vehicles) {
        if (vehicle->getId() == id) {
            return vehicle;
        }
    }
    return nullptr;
}

Customer* RentalSystem::findCustomerById(int id) {
    for (Customer& customer : customers) {
        if (customer.getId() == id) {
            return &customer;
        }
    }
    return nullptr;
}

void RentalSystem::deleteVehicle(int id) {
    for (int i = 0; i < static_cast<int>(vehicles.size()); i++) {
        if (vehicles[i]->getId() == id) {
            delete vehicles[i];
            vehicles.erase(vehicles.begin() + i);
            std::cout << "Vehicle deleted successfully." << std::endl;
            return;
        }
    }

    throw VehicleException("Vehicle ID not found.");
}

void RentalSystem::updateVehicleRate(int id, double newRate) {
    Vehicle* vehicle = findVehicleById(id);

    if (vehicle == nullptr) {
        throw VehicleException("Vehicle ID not found.");
    }

    if (newRate < 0) {
        throw VehicleException("Daily rate cannot be negative.");
    }

    vehicle->setDailyRate(newRate);
    std::cout << "Vehicle rate updated successfully." << std::endl;
}

void RentalSystem::makeReservation(int reservationId, int customerId, int vehicleId, int numberOfDays) {
    Customer* customer = findCustomerById(customerId);
    Vehicle* vehicle = findVehicleById(vehicleId);

    if (customer == nullptr) {
        throw VehicleException("Customer ID not found.");
    }

    if (vehicle == nullptr) {
        throw VehicleException("Vehicle ID not found.");
    }

    if (!vehicle->isAvailable()) {
        throw VehicleException("Vehicle is not available.");
    }

    if (numberOfDays <= 0) {
        throw VehicleException("Number of days must be greater than 0.");
    }

    Reservation reservation(reservationId, customerId, vehicleId, numberOfDays, "Confirmed");
    reservations.push_back(reservation);
    vehicle->setAvailable(false);

    std::cout << "Reservation created successfully." << std::endl;
}