#include "Truck.hpp"
#include "iostream"

Truck::Truck() {
	std::cout << "Enter the towing capacity: ";
	std::string line;
	std::getline(std::cin, line);
	this->towCap = stoi(line);
}

void Truck::displayInfo(void) const {
	Vehicle::displayInfo();
	std::cout << "Towing Capacity: " << this->towCap << "\n";
	return;
}