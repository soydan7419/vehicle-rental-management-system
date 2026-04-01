#include "Menu.h"
#include <iostream>

Menu::Menu() {
}

void Menu::run() {
    int option;

    do {
        std::cout << "\n=== VEHICLE RENTAL MANAGEMENT SYSTEM ===" << std::endl;
        std::cout << "1. Add Car" << std::endl;
        std::cout << "2. Add Motorcycle" << std::endl;
        std::cout << "3. Add Luxury Electric Car" << std::endl;
        std::cout << "4. Add Customer" << std::endl;
        std::cout << "5. Show All Vehicles" << std::endl;
        std::cout << "6. Show Available Vehicles" << std::endl;
        std::cout << "7. Show All Customers" << std::endl;
        std::cout << "8. Make Reservation" << std::endl;
        std::cout << "9. Show All Reservations" << std::endl;
        std::cout << "10. Update Vehicle Rate" << std::endl;
        std::cout << "11. Delete Vehicle" << std::endl;
        std::cout << "12. Show Total Vehicles" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cout << "Choose an option: ";
        std::cin >> option;

        try {
            if (option == 1) {
                int id, year, doors;
                double dailyRate;
                bool available;
                std::string brand, model, fuelType;

                std::cout << "ID: ";
                std::cin >> id;
                std::cout << "Brand: ";
                std::cin >> brand;
                std::cout << "Model: ";
                std::cin >> model;
                std::cout << "Year: ";
                std::cin >> year;
                std::cout << "Daily rate: ";
                std::cin >> dailyRate;
                std::cout << "Available (1 for Yes, 0 for No): ";
                std::cin >> available;
                std::cout << "Doors: ";
                std::cin >> doors;
                std::cout << "Fuel type: ";
                std::cin >> fuelType;

                system.addVehicle(new Car(id, brand, model, year, dailyRate, available, doors, fuelType));
                std::cout << "Car added successfully." << std::endl;
            }
            else if (option == 2) {
                int id, year, engineCapacity;
                double dailyRate;
                bool available, helmetIncluded;
                std::string brand, model;

                std::cout << "ID: ";
                std::cin >> id;
                std::cout << "Brand: ";
                std::cin >> brand;
                std::cout << "Model: ";
                std::cin >> model;
                std::cout << "Year: ";
                std::cin >> year;
                std::cout << "Daily rate: ";
                std::cin >> dailyRate;
                std::cout << "Available (1 for Yes, 0 for No): ";
                std::cin >> available;
                std::cout << "Engine capacity: ";
                std::cin >> engineCapacity;
                std::cout << "Helmet included (1 for Yes, 0 for No): ";
                std::cin >> helmetIncluded;

                system.addVehicle(new Motorcycle(id, brand, model, year, dailyRate, available, engineCapacity, helmetIncluded));
                std::cout << "Motorcycle added successfully." << std::endl;
            }
            else if (option == 3) {
                int id, year, doors, autonomousLevel;
                double dailyRate, batteryCapacity, chargingTime;
                bool available, premiumSoundSystem, leatherSeats;
                std::string brand, model, fuelType;

                std::cout << "ID: ";
                std::cin >> id;
                std::cout << "Brand: ";
                std::cin >> brand;
                std::cout << "Model: ";
                std::cin >> model;
                std::cout << "Year: ";
                std::cin >> year;
                std::cout << "Daily rate: ";
                std::cin >> dailyRate;
                std::cout << "Available (1 for Yes, 0 for No): ";
                std::cin >> available;
                std::cout << "Doors: ";
                std::cin >> doors;
                std::cout << "Fuel type: ";
                std::cin >> fuelType;
                std::cout << "Battery capacity: ";
                std::cin >> batteryCapacity;
                std::cout << "Charging time: ";
                std::cin >> chargingTime;
                std::cout << "Premium sound system (1 for Yes, 0 for No): ";
                std::cin >> premiumSoundSystem;
                std::cout << "Leather seats (1 for Yes, 0 for No): ";
                std::cin >> leatherSeats;
                std::cout << "Autonomous level: ";
                std::cin >> autonomousLevel;

                system.addVehicle(new LuxuryElectricCar(
                    id, brand, model, year, dailyRate, available,
                    doors, fuelType, batteryCapacity, chargingTime,
                    premiumSoundSystem, leatherSeats, autonomousLevel
                ));
                std::cout << "Luxury electric car added successfully." << std::endl;
            }
            else if (option == 4) {
                int id, loyaltyPoints;
                std::string name, phone, driverLicenseNumber;

                std::cout << "Customer ID: ";
                std::cin >> id;
                std::cout << "Name: ";
                std::cin >> name;
                std::cout << "Phone: ";
                std::cin >> phone;
                std::cout << "Driver license number: ";
                std::cin >> driverLicenseNumber;
                std::cout << "Loyalty points: ";
                std::cin >> loyaltyPoints;

                system.addCustomer(Customer(id, name, phone, driverLicenseNumber, loyaltyPoints));
                std::cout << "Customer added successfully." << std::endl;
            }
            else if (option == 5) {
                system.showAllVehicles();
            }
            else if (option == 6) {
                system.showAvailableVehicles();
            }
            else if (option == 7) {
                system.showAllCustomers();
            }
            else if (option == 8) {
                int reservationId, customerId, vehicleId, numberOfDays;

                std::cout << "Reservation ID: ";
                std::cin >> reservationId;
                std::cout << "Customer ID: ";
                std::cin >> customerId;
                std::cout << "Vehicle ID: ";
                std::cin >> vehicleId;
                std::cout << "Number of days: ";
                std::cin >> numberOfDays;

                system.makeReservation(reservationId, customerId, vehicleId, numberOfDays);
            }
            else if (option == 9) {
                system.showAllReservations();
            }
            else if (option == 10) {
                int id;
                double newRate;

                std::cout << "Vehicle ID: ";
                std::cin >> id;
                std::cout << "New daily rate: ";
                std::cin >> newRate;

                system.updateVehicleRate(id, newRate);
            }
            else if (option == 11) {
                int id;

                std::cout << "Vehicle ID: ";
                std::cin >> id;
                system.deleteVehicle(id);
            }
            else if (option == 12) {
                std::cout << "Total vehicles: " << Vehicle::getTotalVehicles() << std::endl;
            }
            else if (option == 0) {
                std::cout << "Exiting program..." << std::endl;
            }
            else {
                std::cout << "Invalid option." << std::endl;
            }
        }
        catch (const VehicleException& e) {
            std::cout << "Error: " << e.what() << std::endl;
        }

    } while (option != 0);
}