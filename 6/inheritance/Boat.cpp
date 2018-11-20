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

	void Boat::show(){
		std::cout<<"BOAT:	";
		std::cout<<color<<" "<<"\n";
		std::cout<<"engine: "<<engine<<"\n";
		std::cout<<"weight: "<<weight<<"\n";
		std::cout<<"load capacity: "<<capacity<<"\n";
		std::cout<<"numberOfSeats: "<<numberOfSeats<<"\n";
		std::cout<<"production year: "<<productionYear<<"\n";
	}