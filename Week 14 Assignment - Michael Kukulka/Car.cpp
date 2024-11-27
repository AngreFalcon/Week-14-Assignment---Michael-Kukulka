#include "Car.hpp"
#include "iostream"

Car::Car() {
	std::cout << "Enter the number of doors: ";
	std::string line;
	std::getline(std::cin, line);
	this->numDoors = stoi(line);
}

void Car::displayInfo(void) const {
	Vehicle::displayInfo();
	std::cout << "Doors: " << this->numDoors << "\n";
	return;
}