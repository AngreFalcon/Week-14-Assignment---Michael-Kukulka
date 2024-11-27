#pragma once
#include "Vehicle.hpp"

class Truck : public Vehicle {
public:
	Truck(void) = default;
	~Truck() = default;

	int getTowCap(void);
	void setTowCap(const int towCap);
	void displayInfo(void);

private:
	int towCap;

};