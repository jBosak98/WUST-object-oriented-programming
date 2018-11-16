#ifndef HEADER_CUBOID
#define HEADER_CUBOID
#include <tgmath.h>

#include "Rectangle.h"

class Cuboid : public Rectangle{
public:
	Cuboid(float a, float b, float c);
	Cuboid();

	void setSide(float a, float b, float c);

	float getLateralArea();

	float getDiagonal();

	float getC();

protected:
	float c;

};


#endif