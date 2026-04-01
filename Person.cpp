#include "Person.h"

Person::Person() : id(0), name("Unknown"), phone("Unknown") {
}

Person::Person(int id, string name, string phone)
    : id(id), name(name), phone(phone) {
}

Person::Person(const Person& other)
    : id(other.id), name(other.name), phone(other.phone) {
}

Person& Person::operator=(const Person& other) {
    if (this != &other) {
        id = other.id;
        name = other.name;
        phone = other.phone;
    }
    return *this;
}

Person::~Person() {
}

int Person::getId() const {
    return id;
}

string Person::getName() const {
    return name;
}

string Person::getPhone() const {
    return phone;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setPhone(string phone) {
    this->phone = phone;
}

void Person::display() const {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
}