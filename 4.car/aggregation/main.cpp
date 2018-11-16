#include "Vehicle.h"
#include "Car.h"
#include <iostream>
#include "Bus.h"

Bus* createBus(){
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

	std::cout<<"WRITE THE YEAR OF PRODUCTION"<<"\n";
	int productionYear;
	std::cin>>productionYear;
	return new Bus(engine,weight,numberOfSeats,col, numberOfDoors, brand, productionYear);
}

Car* createCar(){
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
	return new Car(engine,weight,numberOfSeats,col, numberOfDoors, brand);
}
int
main(){
	std::string typeOfVehicle;
	std::cout<<"BUS OR CAR?"<<"\n";
	std::cin>>typeOfVehicle;
	if(typeOfVehicle == "CAR"){
		Car *c = createCar();
		c->show();
	}
	else if(typeOfVehicle == "BUS"){
		Bus *b = createBus();
		b->show();
		
	}
	
	// v->show();
}

