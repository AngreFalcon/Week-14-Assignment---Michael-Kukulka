#pragma once
#include <string>

class Vehicle {
public:
	Vehicle(void);
	~Vehicle() = default;

	void displayInfo(void) const;

private:
	std::string manufacturer;
	int year;

};