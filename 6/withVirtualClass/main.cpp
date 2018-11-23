#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"
#include "AmphibiousCar.h"


AmphibiousCar* createAmpCar(){
	std::cout<<"WRITE THE BRAND"<<"\n";
	std::string brand;
	std::cin>>brand;
	std::cout<<"WRITE THE COLOR"<<"\n";
	std::string col;
	std::cin>>col;
	std::cout<<"WRITE THE ENGINE"<<"\n";
	float engine;
	std::cin>>engine;
	std::cout<<"WRITE THE WEIGHT"<<"\n";
	int weight;
	std::cin>>weight;

	std::cout<<"WRITE THE NUMBER OF SEATS"<<"\n";
	int numberOfSeats;
	std::cin>>numberOfSeats;

	std::cout<<"WRITE THE NUMBER OF DOORS"<<"\n";
	int numberOfDoors;
	std::cin>>numberOfDoors;

	int year = 0;
	int capacity = 0;
	std::cout<<"WRITE THE YEAR OF PRODUCTION"<<"\n";
	std::cin>>year;
	std::cout<<"WRITE THE CAPACITY"<<"\n";
	std::cin>>capacity;
	return new AmphibiousCar(engine, weight,numberOfSeats,col,year,capacity,brand,numberOfDoors);
}
		
int
main(){
	AmphibiousCar *ampCar = createAmpCar();
	ampCar->show();
}

