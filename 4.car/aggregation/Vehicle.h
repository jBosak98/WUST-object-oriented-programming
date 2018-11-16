#ifndef VEHICLE_HEADER
#define VEHICLE_HEADER
#include <iostream>


class Vehicle{	
public:
	Vehicle(float engine,int weight,int numberOfSeats, std::string color);
	Vehicle();
	int getWeight();
	int getNumberOfSeats();
	float getEngine();
	std::string getColor();
	// virtual void show() = 0;
protected:
	std::string color;
	float engine;
	int weight;
	int numberOfSeats;

	
 };

#endif