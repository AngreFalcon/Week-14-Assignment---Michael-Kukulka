#include "Car.hpp"
#include <iostream>
#include "commonutils.hpp"

Car::Car() {
	this->numDoors = getNum<int>("Enter the number of doors: ", 2);
	if (std::cin.peek() == '\n') std::cin.get();
}

void Car::displayInfo(void) const {
	Vehicle::displayInfo();
	std::cout << "Doors: " << this->numDoors << "\n";
	return;
}