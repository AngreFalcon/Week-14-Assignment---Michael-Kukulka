#include "Truck.hpp"
#include "iostream"

Truck::Truck() {
	std::cout << "Enter the towing capacity: ";
	std::string line;
	std::getline(std::cin, line);
	this->towCap = stoi(line);
}

int Truck::getTowCap(void) const {
	return this->towCap;
}

void Truck::setTowCap(const int towCap) {
	this->towCap = towCap;
	return;
}

void Truck::displayInfo(void) const {
	Vehicle::displayInfo();
	std::cout << "Towing Capacity: " << this->towCap << "\n";
	return;
}