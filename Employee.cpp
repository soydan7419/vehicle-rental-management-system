#include "Employee.h"

Employee::Employee() : Person(), position("Unknown"), salary(0.0) {
}

Employee::Employee(int id, string name, string phone, string position, double salary)
    : Person(id, name, phone), position(position), salary(salary) {
}

Employee::~Employee() {
}

string Employee::getPosition() const {
    return position;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::setPosition(string position) {
    this->position = position;
}

void Employee::setSalary(double salary) {
    this->salary = salary;
}

void Employee::display() const {
    Person::display();
    cout << "Position: " << position << endl;
    cout << "Salary: " << salary << endl;
}