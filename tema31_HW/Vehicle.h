#pragma once
#include <iostream>t
#include <string>
#include <fstream>
#include "Date.h"
using namespace std;

class Vehicle
{
protected:
	string name;
	float maxspeed;
	float price;
	Date date;
public:
	Vehicle();
	Vehicle(string name,float maxspeed,float price,Date date);
	virtual ~Vehicle();

	string getName()const;
	void setName(string name);
	float getMaxspeed()const;
	float getPrice()const;
	void setPrice(float price);
	Date getDate()const;

	virtual void showInfo()const;
	virtual void safeToFile(ofstream& file)const = 0;
};

