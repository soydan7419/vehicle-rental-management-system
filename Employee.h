#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

class Employee : public Person {
private:
    string position;
    double salary;

public:
    Employee();
    Employee(int id, string name, string phone, string position, double salary);
    ~Employee();

    string getPosition() const;
    double getSalary() const;

    void setPosition(string position);
    void setSalary(double salary);

    void display() const override;
};

#endif