#ifndef SEAT_HEADER
#define SEAT_HEADER

#include <iostream>
#include "Material.h"

class Seat : public Material{
public:
	Seat();
	Seat(Material material);
	Seat(Material material, std::string color);

	std::string color;
};


#endif