#pragma once
#include "Vehicle.hpp"

class Car : public Vehicle {
public:
	Car(void);
	~Car() = default;

	int getNumDoors(void) const;
	void setNumDoors(const int numDoors);
	void displayInfo(void) const;

private:
	int numDoors;

};