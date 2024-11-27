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

std::string Vehicle::getManufacturer(void) const {
	return this->manufacturer;
}

void Vehicle::setManufacturer(const std::string& manufacturer) {
	this->manufacturer = manufacturer;
	return;
}

int Vehicle::getYear(void) const {
	return this->year;
}

void Vehicle::setYear(const int year) {
	this->year = year;
	return;
}

void Vehicle::displayInfo(void) const {
	std::cout << "Vehicle Information:\nManufacturer: " << this->manufacturer << "\nYear Built: " << this->year << "\n";
	return;
}