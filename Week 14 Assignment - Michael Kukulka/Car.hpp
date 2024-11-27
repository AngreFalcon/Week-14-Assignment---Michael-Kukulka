#pragma once
#include "Vehicle.hpp"

class Car : public Vehicle {
public:
	Car(void);
	~Car() = default;

	void displayInfo(void) const;

private:
	int numDoors;

};