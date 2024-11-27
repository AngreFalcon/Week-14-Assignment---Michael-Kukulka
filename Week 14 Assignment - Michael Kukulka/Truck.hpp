#pragma once
#include "Vehicle.hpp"

class Truck : public Vehicle {
public:
	Truck(void);
	~Truck() = default;

	void displayInfo(void) const;

private:
	int towCap;

};