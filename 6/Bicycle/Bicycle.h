#ifndef BICYCLE_HEADER
#define BICYCLE_HEADER

#include <iostream>

#include "Vehicle.h"
#include "Seat.h"


class Bicycle : public Vehicle, public Seat{
public:
	Bicycle();
	Bicycle(Vehicle vehicle, Seat seat);

	void show();
};


#endif