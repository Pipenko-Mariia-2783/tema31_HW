#include "Car.h"

Car::Car()
{
    carMake = "undefined";
}

Car::Car(string name, float maxspeed, float price, Date date, string carMake)
    :Vehicle(name,maxspeed,price,date)
{
    this->carMake = carMake;
}

Car::~Car()
{
    cout << "Call destructor of Car class" << endl;
}

string Car::getCarMake() const
{
    return carMake;
}

void Car::showInfo() const
{
    Vehicle::showInfo();
    cout << "Car make: " << carMake << endl;
}

void Car::safeToFile(ofstream& file) const
{
    file << "Car" << endl;
    file << name << endl;
    file << maxspeed << endl;
    file << price << endl;
    file << date << endl;
    file << carMake << endl;
}
