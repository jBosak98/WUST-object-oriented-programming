#include "Bus.h"
#include <iostream>


	Bus::Bus(float engine, 
		int weight, 
		int numberOfSeats, 
		std::string color, 
		int numberOfDoors,
		std::string brand,
		int productionYear
		) {
		vehicle = new  Vehicle(engine, weight, numberOfSeats, color);
		this->brand = brand;
		this->numberOfDoors = numberOfDoors;
		this->productionYear = productionYear;
	}


	int Bus::getNumberOfDoors(){
		return numberOfDoors;
	}
	std::string Bus::getBrand(){
		return brand;
	}
	void Bus::show(){
		std::cout<<"BUS:	";
		std::cout<<vehicle->getColor()<<" "<<brand<<"\n";
		std::cout<<"engine: "<<vehicle->getEngine()<<"\n";
		std::cout<<"weight: "<<vehicle->getWeight()<<"\n";
		std::cout<<"numberOfDoors: "<<numberOfDoors<<"\n";
		std::cout<<"numberOfSeats: "<<vehicle->getNumberOfSeats()<<"\n";
		std::cout<<"production year: "<<productionYear<<"\n";
	}