#ifndef MATERIAL_HEADER
#define MATERIAL_HEADER

#include <iostream>

class Material{
public:

	Material();
	Material(int strength, std::string type);


	std::string type;
	int strength;//Force[N]/Area[m^2]
};


#endif