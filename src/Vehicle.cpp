#include "Vehicle.h"

Vehicle::Vehicle(string name, int wheelNum, int maxSpeed)
{
    this->name = name;
    this->wheelNum = wheelNum;
    this->maxSpeed = maxSpeed;
}

void Vehicle::displayInfo()
{
    cout << "Наименование транспорта: " << name << endl;
    cout << "Кол-во колёс: " << wheelNum << endl;
    cout << "Максимальная скорость: " << maxSpeed << "км/ч" << endl;
}