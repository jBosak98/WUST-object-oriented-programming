#ifndef CAR_HEADER
#define CAR_HEADER
#include <iostream>
#include "Vehicle.h"

class Car:public virtual Vehicle{
public:
	Car(float engine, 
		int weight, 
		int numberOfSeats, 
		std::string color, 
		int numberOfDoors,
		std::string brand
		);
	int getNumberOfDoors();
	std::string getBrand();
	void show();
private:
	std::string brand;
	int numberOfDoors;


};

#endif