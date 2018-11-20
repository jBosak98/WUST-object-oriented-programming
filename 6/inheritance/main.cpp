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

void testBoat(){
	Boat b = Boat(1.7, 250, 60, "white", 2007, 300);
	b.show();
}

void testAmphibiousCar(){

}
		
int
main(){
	std::string typeOfVehicle;
	// std::cout<<"BUS OR CAR?"<<"\n";
	// std::cin>>typeOfVehicle;

	Boat b = Boat(1.7, 250, 60, "white", 2007, 300);
	b.show();


	AmphibiousCar ampCar = AmphibiousCar(2,150,5,"red",2018,30,"VOLVO",4);
	ampCar.Car::show();
	ampCar.Boat::show();
	// if(typeOfVehicle == "CAR"){
	// 	Car *c = createCar();
	// 	c->show();
	// }
}

