#pragma once
#include "Vehicle.hpp"

class Truck : public Vehicle {
public:
	Truck(void);
	~Truck() = default;

	int getTowCap(void) const;
	void setTowCap(const int towCap);
	void displayInfo(void) const;

private:
	int towCap;

};