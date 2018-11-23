#ifndef AMPHIBIOUS_CAR_HEADER
#define AMPHIBIOUS_CAR_HEADER
#include <iostream>

#include "Boat.h"
#include "Car.h"

class AmphibiousCar : public Car, public Boat{
public:
	AmphibiousCar(float engine, 
		int weight, 
		int numberOfSeats, 
		std::string color, 
		int productionYear,
		int capacity,
		std::string brand,
		int numberOfDoors
		);

	AmphibiousCar(Car car, int productionYear, int capacity);
};

#endif