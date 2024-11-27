#include "Vehicle.hpp"
#include "iostream"

std::string Vehicle::getManufacturer(void) {
	return this->manufacturer;
}

void Vehicle::setManufacturer(const std::string& manufacturer) {
	this->manufacturer = manufacturer;
	return;
}

int Vehicle::getYear(void) {
	return this->year;
}

void Vehicle::setYear(const int year) {
	this->year = year;
	return;
}

void Vehicle::displayInfo(void) {
	std::cout << "Vehicle Information:\nManufacturer: " << this->manufacturer << "\nYear Built: " << this->year << "\n";
	return;
}