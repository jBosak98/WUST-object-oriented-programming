#include "Bicycle.h"

Bicycle::Bicycle(){

}

Bicycle::Bicycle(Vehicle vehicle, Seat seat) : Vehicle(vehicle), Seat(seat){
	
}

void Bicycle::show(){
	std::cout<<"Bicycle:"<<"\n";
	std::cout<<"\tVehicle:"<<"\n";
	std::cout<<"\t\tMachine:"<<"\n";
	std::cout<<"\tSeat:"<<"\n";
	std::cout<<"\t\tColor:"<<"\n";
	std::cout<<"\t\t\t"<<this->color<<"\n";
	std::cout<<"\t\tMaterial:"<<"\n";
	std::cout<<"\t\t\tStrength: "<<"\n";
	std::cout<<"\t\t\t\t"<<this->strength<<"\n";
	std::cout<<"\t\t\tType: "<<"\n";
	std::cout<<"\t\t\t\t"<<this->type<<"\n";
}