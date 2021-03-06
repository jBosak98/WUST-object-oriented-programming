#ifndef BOAT_HEADER
#define BOAT_HEADER
#include "Vehicle.h"

class Boat:public virtual Vehicle {
public:
	Boat(float engine, 
		int weight, 
		int numberOfSeats, 
		std::string color, 
		int productionYear,
		int capacity
		);

	int getCapacity();
	

protected:
	int productionYear;
	int capacity;


};

#endif