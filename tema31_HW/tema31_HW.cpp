#include "Garage.h"

int main()
{
    Garage itstep;
    itstep.addItem(new Bicycle("Mountain bicycle", 80, 50000, Date(2025, 10, 19)));

    itstep.findByName("Tow truck");
    itstep.findByName("Toyota");

    itstep.findByDate(Date(2026, 11, 18));
    itstep.findByDate(Date(2025, 10, 19));

    itstep.findByPrice(50000);
    itstep.findByPrice(150000);

    itstep.sortBySpeed();

    itstep.delItem("Tow truck");
    itstep.editItem("Mountain bicycle", "Off bike", 55000);
    itstep.showAll();

    
}
