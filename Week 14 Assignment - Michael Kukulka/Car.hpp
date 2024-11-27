#pragma once
#include "Vehicle.hpp"

class Car : public Vehicle {
public:
	Car(void) = default;
	~Car() = default;

	int getNumDoors(void);
	void setNumDoors(const int numDoors);
	void displayInfo(void);

private:
	int numDoors;

};