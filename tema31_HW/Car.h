#pragma once
#include "Vehicle.h"
class Car :
    public Vehicle
{
protected:
    string carMake;
public:
    Car();
    Car(string name, float maxspeed, float price, Date date,string carMake);
    ~Car();

    string getCarMake()const;

    void showInfo()const;
    virtual void safeToFile(ofstream& file)const override;

};

