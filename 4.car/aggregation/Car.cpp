#include "Car.h"
#include <iostream>


	Car::Car(float engine, 
		int weight, 
		int numberOfSeats, 
		std::string color, 
		int numberOfDoors,
		std::string brand){
		vehicle = new Vehicle(engine, weight, numberOfSeats, color);
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

		std::cout<<"CAR:	";
		std::cout<<vehicle->getColor()<<" "<<brand<<"\n";
		std::cout<<"engine: "<<vehicle->getEngine()<<"\n";
		std::cout<<"weight: "<<vehicle->getWeight()<<"\n";
		std::cout<<"numberOfDoors: "<<getNumberOfDoors()<<"\n";
		std::cout<<"numberOfSeats: "<<vehicle->getNumberOfSeats()<<"\n\n";
	}