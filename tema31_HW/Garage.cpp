#include "Garage.h"

Garage::Garage()
{
	items.push_back(new Car("Mitsubishi Pajero Sport", 200, 200000, Date(2020, 9, 25), "Mitsubishi"));
	items.push_back(new Bicycle("Road Bike", 60, 15000, Date(2019, 5, 12)));
	items.push_back(new Lorry("Tow truck", 130, 150000, Date(2019, 7, 2), 50000));
}

Garage::~Garage()
{
	for (auto item : items) {
		delete item;
	}
	items.clear();
}

void Garage::safeToFile() const
{
	ofstream file("garage.txt");
	if (file.is_open()) {
		for (auto item : items) {
			item->safeToFile(file);
		}
		file.close();
		std::cout << "Saved to file\n";
	}
}

void Garage::addItem(Vehicle* obj)
{
	if (obj != nullptr)
		items.push_back(obj);
}

void Garage::delItem(string name)
{
	auto result = find_if(items.begin(), items.end(),
		[name](Vehicle* item) {return item->getName() == name;});

	if (result == items.end()) {
		cout << "not found\n";
	}
	else {
		delete* result;
		items.erase(result);
		cout << "Delete item!" << endl;
	}
}

void Garage::showAll() const
{
	for (auto item : items) {
		item->showInfo();
		cout << "------------------------------------" << endl;
	}
}

void Garage::findByName(string name) 
{
	auto result = find_if(items.begin(), items.end(),
		[name](Vehicle* item) {return item->getName() == name;});

	if (result == items.end()) {
		cout << "not found\n";
	}
	else {
		cout << "\nResult: " << endl;
		(*result)->showInfo();
	}
}

void Garage::findByPrice(float price) 
{
	auto result = find_if(items.begin(), items.end(),
		[price](Vehicle* item) {return item->getPrice() == price;});

	if (result == items.end()) {
		cout << "not found\n";
	}
	else {
		cout << "\nResult: " << endl;
		(*result)->showInfo();
	}
}

void Garage::findByDate(Date date) 
{
	auto result = find_if(items.begin(), items.end(),
		[date](Vehicle* item) {return item->getDate() == date;});

	if (result == items.end()) {
		cout << "not found\n";
	}
	else {
		cout << "\nResult: " << endl;
		(*result)->showInfo();
	}
}

void Garage::editItem(string name,string newName, float newPrice)
{
	auto result = find_if(items.begin(), items.end(),
		[name](Vehicle* item) {return item->getName() == name;});

	if (result == items.end()) {
		cout << "not found\n";
	}
	else {
		(*result)->setName(newName);
		(*result)->setPrice(newPrice);
	}
}

void Garage::sortBySpeed()
{
	sort(items.begin(), items.end(),
		[](Vehicle* left, Vehicle* right) {return left->getMaxspeed() > right->getMaxspeed();});
	cout << "Sorted by max speed:\n ";
	showAll();
}
