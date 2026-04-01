# Vehicle Rental Management System (C++ OOP Project)

## Project Description

The **Vehicle Rental Management System** is a console-based application developed in **C++** using **Object-Oriented Programming (OOP)** principles.

The system allows management of vehicles, customers, employees, and reservations within a vehicle rental company environment.

This application demonstrates important OOP concepts such as inheritance, polymorphism, encapsulation, operator overloading, exception handling, static members, dynamic memory allocation, and multiple inheritance.

---

## Features

The system supports the following operations:

* Add Car
* Add Motorcycle
* Add Luxury Electric Car
* Add Customer
* Display all vehicles
* Display available vehicles
* Display customers
* Create reservations
* Display reservations
* Update vehicle rental price
* Delete vehicle
* Display total number of vehicles (static member usage)
* Exception handling for invalid operations

---

## Object-Oriented Programming Concepts Used

### 1. Encapsulation

Each class stores its attributes as private or protected members and provides controlled access using getters and setters.

---

### 2. Inheritance

Example hierarchy:

Vehicle → Car
Vehicle → Motorcycle
Vehicle → LuxuryElectricCar

Person → Customer
Person → Employee

---

### 3. Multiple Inheritance (Diamond Structure)

LuxuryElectricCar inherits from:

Car
ElectricFeature
LuxuryFeature

This demonstrates the implementation of multiple inheritance.

---

### 4. Polymorphism

Polymorphism is implemented using virtual functions:

display()

Each derived class overrides this function.

Example:

Vehicle.display()
Car.display()
Motorcycle.display()

---

### 5. Operator Overloading

The operator << is overloaded for the Reservation class:

Example:

cout << reservation;

---

### 6. Static Member Usage

Vehicle class includes:

static int totalVehicles;

This variable keeps track of the total number of vehicles stored in the system.

---

### 7. Exception Handling

A custom exception class is implemented:

VehicleException

Used for handling situations such as:

* Vehicle ID not found
* Customer ID not found
* Invalid number of rental days
* Vehicle unavailable

Example:

throw VehicleException("Vehicle ID not found");

---

### 8. Rule of Three Implementation

The following classes implement:

* Copy constructor
* Assignment operator
* Destructor

Example:

Vehicle
Reservation
Person

---

## Classes Used in the Project

RentalEntity
Vehicle
Car
Motorcycle
ElectricFeature
LuxuryFeature
LuxuryElectricCar
Person
Customer
Employee
Reservation
RentalSystem
Menu
VehicleException

---

## Technologies Used

Language:

C++

Libraries:

iostream
vector
string
exception

Concepts:

Object-Oriented Programming
STL vector
Dynamic memory allocation
Static members
Operator overloading
Exception handling
Multiple inheritance

---

## Compilation Instructions

Use the following command:

g++ main.cpp Vehicle.cpp Car.cpp Motorcycle.cpp ElectricFeature.cpp LuxuryFeature.cpp LuxuryElectricCar.cpp Person.cpp Customer.cpp Employee.cpp Reservation.cpp VehicleException.cpp RentalSystem.cpp Menu.cpp -o main

---

## Execution Instructions

Run:

./main

or on Windows:

main.exe

---

## Example Menu Options

1. Add Car
2. Add Motorcycle
3. Add Luxury Electric Car
4. Add Customer
5. Show All Vehicles
6. Show Available Vehicles
7. Show All Customers
8. Make Reservation
9. Show All Reservations
10. Update Vehicle Rate
11. Delete Vehicle
12. Show Total Vehicles

---

## Author

Student: Alperen Soydan
Course: Object-Oriented Programming (POO)
Project: Vehicle Rental Management System







# Sistem de Management al Închirierii Vehiculelor (Proiect C++ POO)

## Descrierea Proiectului

**Sistemul de Management al Închirierii Vehiculelor** este o aplicație de tip consolă dezvoltată în **C++**, utilizând principiile **Programării Orientate pe Obiect (POO)**.

Aplicația permite gestionarea vehiculelor, clienților, angajaților și rezervărilor într-un sistem specific unei companii de închirieri auto.

Proiectul demonstrează concepte importante POO precum: moștenire, polimorfism, încapsulare, supraîncărcare de operatori, tratarea excepțiilor, membri statici, alocare dinamică a memoriei și moștenire multiplă.

---

## Funcționalități

Aplicația permite următoarele operații:

* Adăugare mașină
* Adăugare motocicletă
* Adăugare mașină electrică premium
* Adăugare client
* Afișare toate vehiculele
* Afișare vehicule disponibile
* Afișare clienți
* Creare rezervare
* Afișare rezervări
* Actualizare preț închiriere vehicul
* Ștergere vehicul
* Afișare număr total vehicule (membru static)
* Tratarea erorilor folosind excepții personalizate

---

## Concepte POO Utilizate

### 1. Încapsulare

Datele sunt protejate în interiorul claselor și accesate prin metode getter și setter.

---

### 2. Moștenire

Structura ierarhică:

Vehicle → Car
Vehicle → Motorcycle
Vehicle → LuxuryElectricCar

Person → Customer
Person → Employee

---

### 3. Moștenire Multiplă (Structură Diamond)

Clasa LuxuryElectricCar moștenește:

Car
ElectricFeature
LuxuryFeature

Aceasta demonstrează utilizarea moștenirii multiple.

---

### 4. Polimorfism

Polimorfismul este implementat prin funcția virtuală:

display()

Fiecare clasă derivată redefinește această funcție.

---

### 5. Supraîncărcare Operator

Operatorul << este supraîncărcat pentru clasa Reservation:

Exemplu:

cout << reservation;

---

### 6. Membru Static

Clasa Vehicle conține:

static int totalVehicles;

Această variabilă reține numărul total de vehicule existente în sistem.

---

### 7. Tratarea Excepțiilor

Este implementată o clasă de excepții personalizată:

VehicleException

Folosită pentru situații precum:

* ID vehicul inexistent
* ID client inexistent
* Număr invalid de zile
* Vehicul indisponibil

---

### 8. Regula celor Trei (Rule of Three)

Clasele care implementează:

* constructor de copiere
* operator de atribuire
* destructor

Exemplu:

Vehicle
Reservation
Person

---

## Clase Utilizate în Proiect

RentalEntity
Vehicle
Car
Motorcycle
ElectricFeature
LuxuryFeature
LuxuryElectricCar
Person
Customer
Employee
Reservation
RentalSystem
Menu
VehicleException

---

## Tehnologii Utilizate

Limbaj:

C++

Biblioteci:

iostream
vector
string
exception

Concepte:

Programare Orientată pe Obiect
vector STL
alocare dinamică memorie
membri statici
supraîncărcare operator
tratarea excepțiilor
moștenire multiplă

---

## Compilare

Se utilizează comanda:

g++ main.cpp Vehicle.cpp Car.cpp Motorcycle.cpp ElectricFeature.cpp LuxuryFeature.cpp LuxuryElectricCar.cpp Person.cpp Customer.cpp Employee.cpp Reservation.cpp VehicleException.cpp RentalSystem.cpp Menu.cpp -o main

---

## Rulare

Linux / Mac:

./main

Windows:

main.exe

---

## Autor

Student: Alperen Soydan
Disciplina: Programare Orientată pe Obiect (POO)
Proiect: Sistem de Management al Închirierii Vehiculelor
