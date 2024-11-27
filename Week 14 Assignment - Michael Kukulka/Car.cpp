#include "Car.hpp"
#include <iostream>
#include "commonutils.hpp"

Car::Car() {
	this->numDoors = getNum<int>("Enter the number of doors: ", 2);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Car::displayInfo(void) const {
	Vehicle::displayInfo();
	std::cout << "Doors: " << this->numDoors << "\n";
	return;
}