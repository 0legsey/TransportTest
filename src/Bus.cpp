#include "Bus.h"

Bus::Bus() : Vehicle("автобус", 6, 100), maxPassengers(20){}

void Bus::displayInfo()
{
    Vehicle::displayInfo();
    cout << "Максимальное кол-во пассажиров: " << maxPassengers << endl;
}
