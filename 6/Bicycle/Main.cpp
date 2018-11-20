#include "Bicycle.h"


int
main(){
	Machine machine = Machine();
	Vehicle vehicle = Vehicle(machine);

	Material material = Material(150, "aluminum");
	Seat seat = Seat(material, "RED");

	Bicycle bicycle = Bicycle(vehicle, seat);	
	bicycle.show();
}