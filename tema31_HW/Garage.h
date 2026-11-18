#pragma once
#include "Car.h"
#include "Lorry.h"
#include "Bicycle.h"
#include "Vehicle.h"
#include <vector>
#include <algorithm>
#include <typeinfo>
class Garage
{
	vector<Vehicle* >items;
public:
	Garage();
	~Garage();

	void safeToFile()const;
	void addItem(Vehicle* obj);
	void delItem(string name);
	void showAll()const;
	void findByName(string name);
	void findByPrice(float price);
	void findByDate(Date date);
	void editItem(string name, string newName, float newPrice);
	void sortBySpeed();
};

