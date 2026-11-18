#include "Bicycle.h"

Bicycle::Bicycle()
{
}

Bicycle::Bicycle(string name, float maxspeed, float price, Date date)
    :Vehicle(name, maxspeed, price, date)
{
}

Bicycle::~Bicycle()
{
    cout << "Call destructor of Bicycle class" << endl;
}

void Bicycle::showInfo() const
{
    Vehicle::showInfo();
}

void Bicycle::safeToFile(ofstream& file) const
{
    file << "Bicycle" << endl;
    file << name << endl;
    file << maxspeed << endl;
    file << price << endl;
    file << date << endl;
}
