// Michael Kukulka
// CIS 1202 N01
// November 23, 2024

#include "commonutils.hpp"
#include "Vehicle.hpp"
#include "Car.hpp"
#include "Truck.hpp"

int main() {
	std::cout << "Vehicle Program\n";
	std::cout << "\nVehicle:";
	Vehicle v;
	v.displayInfo();
	
	std::cout << "\nCar:";
	Car c;
	c.displayInfo();

	std::cout << "\nTruck:";
	Truck t;
	t.displayInfo();

	return EXIT_SUCCESS;
}