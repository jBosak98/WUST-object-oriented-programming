#ifndef BUS_HEADER
#define BUS_HEADER
#include "Vehicle.h"

class Bus{
public:
	Bus(float engine, 
		int weight, 
		int numberOfSeats, 
		std::string color, 
		int numberOfDoors,
		std::string brand,
		int productionYear
		);
	int getNumberOfDoors();
	std::string getBrand();
	void show();
private:
	std::string brand;
	int numberOfDoors;
	int productionYear;
	Vehicle* vehicle;



};

#endif