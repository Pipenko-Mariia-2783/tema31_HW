#pragma once
#include "Vehicle.h"
class Lorry :
    public Vehicle
{
protected:
    float capacity;
public:
    Lorry();
    Lorry(string name, float maxspeed, float price, Date date,float capacity);
    ~Lorry();

    float getCapacity()const;

    void showInfo()const;
    void safeToFile(ofstream& file)const override;
};

