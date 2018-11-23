#include "Boat.h"
#include <iostream>


	Boat::Boat(float engine, 
		int weight, 
		int numberOfSeats, 
		std::string color, 
		int productionYear,
		int capacity
		) : Vehicle(engine, weight, numberOfSeats, color){
		
		this->productionYear = productionYear;
		this->capacity = capacity;
	}


	int Boat::getCapacity(){
		return capacity;
	}
