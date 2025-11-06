#pragma once

#include <iostream>

using namespace std;

class Vehicle{
protected:
    string name;
    int wheelNum;
    int maxSpeed;
public:
    Vehicle(string name, int wheelNum, int maxSpeed);
    virtual ~Vehicle() = default;

    virtual void displayInfo();
};
