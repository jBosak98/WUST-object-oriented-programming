#include "Bicycle.h"
#include <iostream>

int
main(){
	std::cout<<"What material is the seat made of?"<<"\n";
	std::string input;
	std::cin>>input;
	int durability = 0;
	std::cout<<"Write the durability of seat"<<"\n";
	std::cin>>durability;
	Material material = Material(durability, input);
	std::cout<<"Write the color of seat"<<"\n";
	std::cin>>input;
	Seat seat = Seat(material, input);

	Machine machine = Machine();
	Vehicle vehicle = Vehicle(machine);


	Bicycle bicycle = Bicycle(vehicle, seat);	
	bicycle.show();
}