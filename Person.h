#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "RentalEntity.h"

using namespace std;

class Person : public RentalEntity {
protected:
    int id;
    string name;
    string phone;

public:
    Person();
    Person(int id, string name, string phone);
    Person(const Person& other);
    Person& operator=(const Person& other);
    virtual ~Person();

    int getId() const override;
    string getName() const;
    string getPhone() const;

    void setName(string name);
    void setPhone(string phone);

    virtual void display() const override;
};

#endif