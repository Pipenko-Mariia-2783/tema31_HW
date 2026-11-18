#include "Lorry.h"

Lorry::Lorry()
{
    capacity = 0;
}

Lorry::Lorry(string name, float maxspeed, float price, Date date, float capacity)
    :Vehicle(name, maxspeed, price, date)
{
    this->capacity = capacity;
}

Lorry::~Lorry()
{
    cout << "Call destructor of Lorry class" << endl;
}

float Lorry::getCapacity() const
{
    return capacity;
}

void Lorry::showInfo() const
{
    Vehicle::showInfo();
    cout << "Load capacity: " << capacity << endl;
}

void Lorry::safeToFile(ofstream& file) const
{
    file << "Lorry" << endl;
    file << name << endl;
    file << maxspeed << endl;
    file << price << endl;
    file << date << endl;
    file << capacity << endl;
}
