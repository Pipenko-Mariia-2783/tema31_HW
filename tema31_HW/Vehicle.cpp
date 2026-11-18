#include "Vehicle.h"

Vehicle::Vehicle()
{
    name = "undefined";
    maxspeed = 0;
    price = 0;
    date = Date();
}

Vehicle::Vehicle(string name, float maxspeed, float price, Date date)
{
    this->name = name;
    this->maxspeed = maxspeed;
    this->price = price;
    this->date = date;
}

Vehicle::~Vehicle()
{
    cout << "Call destructor of Vehicle class" << endl;
}

string Vehicle::getName() const
{
    return name;
}

void Vehicle::setName(string name)
{
    this->name = name;

}

float Vehicle::getMaxspeed() const
{
    return maxspeed;
}

float Vehicle::getPrice() const
{
    return price;
}

void Vehicle::setPrice(float price)
{
    this->price = price;

}

Date Vehicle::getDate() const
{
    return date;
}

void Vehicle::showInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Max speed: " << maxspeed << endl;
    cout << "Price: " << price << endl;
    cout << "Date of manufacture: " << date << endl;
}
