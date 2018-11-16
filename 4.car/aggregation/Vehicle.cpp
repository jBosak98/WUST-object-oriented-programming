#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(float engine, int weight, int numberOfSeats, std::string color){
	this->engine = engine;
	this->weight = weight;
	this->numberOfSeats = numberOfSeats;
	this->color = color;
}
Vehicle::Vehicle(){

}


// void Vehicle::show(){
// 	std::cout<<"color: "<<" "<<color<<"\n";
// 	std::cout<<"engine: "<<engine<<"\n";
// 	std::cout<<"weight: "<<weight<<"\n";
// 	std::cout<<"numberOfSeats: "<<numberOfSeats<<"\n";
// }


int Vehicle::getWeight(){
	return weight;
}
int Vehicle::getNumberOfSeats(){
	return numberOfSeats;
}

float Vehicle::getEngine(){
	return engine;
}
std::string Vehicle::getColor(){
	return color;
}