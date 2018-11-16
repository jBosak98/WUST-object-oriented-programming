#include "Bus.h"
#include <iostream>


	Bus::Bus(float engine, 
		int weight, 
		int numberOfSeats, 
		std::string color, 
		int numberOfDoors,
		std::string brand,
		int productionYear
		) : Vehicle(engine, weight, numberOfSeats, color){
		
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
		std::cout<<color<<" "<<brand<<"\n";
		std::cout<<"engine: "<<engine<<"\n";
		std::cout<<"weight: "<<weight<<"\n";
		std::cout<<"numberOfDoors: "<<numberOfDoors<<"\n";
		std::cout<<"numberOfSeats: "<<numberOfSeats<<"\n";
		std::cout<<"production year: "<<productionYear<<"\n";
	}