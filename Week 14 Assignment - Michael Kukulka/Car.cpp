#include "Car.hpp"
#include "iostream"

int Car::getNumDoors(void) {
	return this->numDoors;
}

void Car::setNumDoors(const int numDoors) {
	this->numDoors = numDoors;
	return;
}

void Car::displayInfo(void) {
	Vehicle::displayInfo();
	std::cout << "Doors: " << this->numDoors << "\n";
	return;
}