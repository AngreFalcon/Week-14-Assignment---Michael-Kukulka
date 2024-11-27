#include "Truck.hpp"
#include "iostream"

int Truck::getTowCap(void) {
	return this->towCap;
}

void Truck::setTowCap(const int towCap) {
	this->towCap = towCap;
	return;
}

void Truck::displayInfo(void) {
	Vehicle::displayInfo();
	std::cout << "Towing Capacity: " << this->towCap << "\n";
	return;
}