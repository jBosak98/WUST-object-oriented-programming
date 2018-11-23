#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"
#include "AmphibiousCar.h"


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

	Car *car = createCar();

	int year = 0;
	int capacity = 0;
	std::cout<<"WRITE THE YEAR OF PRODUCTION"<<"\n";
	std::cin>>year;
	std::cout<<"WRITE THE CAPACITY"<<"\n";
	std::cin>>capacity;

	AmphibiousCar aCar = AmphibiousCar(*car,year, capacity);
	aCar.Car::show();
	aCar.Boat::show();
	// AmphibiousCar ampCar = AmphibiousCar(2,150,5,"red",2018,30,"VOLVO",4);
	// ampCar.Car::show();
	// ampCar.Boat::show();
}

