#include "Vehicle.hpp"
#include "iostream"

Vehicle::Vehicle(void) {
	std::cout << "\nEnter the manufacturer: ";
	std::getline(std::cin, this->manufacturer);
	std::cout << "Enter the year built: ";
	std::string line;
	std::getline(std::cin, line);
	this->year = stoi(line);
}

void Vehicle::displayInfo(void) const {
	std::cout << "Vehicle Information:\nManufacturer: " << this->manufacturer << "\nYear Built: " << this->year << "\n";
	return;
}