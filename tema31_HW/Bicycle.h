#pragma once
#include "Vehicle.h"
class Bicycle :
    public Vehicle
{
public:
    Bicycle();
    Bicycle(string name, float maxspeed, float price, Date date);
    ~Bicycle();

    void showInfo()const;
    void safeToFile(ofstream& file)const override;
};

