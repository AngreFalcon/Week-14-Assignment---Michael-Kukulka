#pragma once
#include <string.h>

class Vehicle {
public:
	Vehicle(void) = default;
	~Vehicle() = default;

	std::string getManufacturer(void);
	void setManufacturer(const std::string& manufacturer);
	int getYear(void);
	void setYear(const int year);
	void displayInfo(void);

private:
	std::string manufacturer;
	int year;

};