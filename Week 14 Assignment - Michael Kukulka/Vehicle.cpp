#include "Vehicle.hpp"
#include <iostream>
#include "commonutils.hpp"

Vehicle::Vehicle(void) {
	std::cout << "\nEnter the manufacturer: ";
	std::getline(std::cin, this->manufacturer);
	this->year = getNum<int>("Enter the year built: ", 1888, 2024);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Vehicle::displayInfo(void) const {
	std::cout << "Vehicle Information:\nManufacturer: " << this->manufacturer << "\nYear Built: " << this->year << "\n";
	return;
}