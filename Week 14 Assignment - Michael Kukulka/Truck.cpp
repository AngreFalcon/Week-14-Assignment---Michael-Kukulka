#include "Truck.hpp"
#include <iostream>
#include "commonutils.hpp"

Truck::Truck() {
	this->towCap = getNum<int>("Enter the towing capacity: ", 0);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Truck::displayInfo(void) const {
	Vehicle::displayInfo();
	std::cout << "Towing Capacity: " << this->towCap << "\n";
	return;
}