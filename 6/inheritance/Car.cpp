#include "Car.h"
#include <iostream>


	Car::Car(float engine, 
		int weight, 
		int numberOfSeats, 
		std::string color, 
		int numberOfDoors,
		std::string brand
		) : Vehicle(engine, weight, numberOfSeats, color){
		
		this->brand = brand;
		this->numberOfDoors = numberOfDoors;
	}


	int Car::getNumberOfDoors(){
		return numberOfDoors;
	}
	std::string Car::getBrand(){
		return brand;
	}
	void Car::show(){
		std::cout<<"\n"<<"CAR:	";
		std::cout<<color<<" "<<brand<<"\n";
		std::cout<<"engine: "<<engine<<"\n";
		std::cout<<"weight: "<<weight<<"\n";
		std::cout<<"numberOfDoors: "<<numberOfDoors<<"\n";
		std::cout<<"numberOfSeats: "<<numberOfSeats<<"\n\n";
	}