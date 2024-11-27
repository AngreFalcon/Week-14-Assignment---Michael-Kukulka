#pragma once
#include <string>

class Vehicle {
public:
	Vehicle(void);
	~Vehicle() = default;

	std::string getManufacturer(void) const;
	void setManufacturer(const std::string& manufacturer);
	int getYear(void) const;
	void setYear(const int year);
	void displayInfo(void) const;

private:
	std::string manufacturer;
	int year;

};