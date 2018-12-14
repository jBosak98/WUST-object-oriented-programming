#ifndef THREE_DIMENSIONAL_SHAPE_HEADER
#define THREE_DIMENSIONAL_SHAPE_HEADER

#include "Shape.h"

class ThreeDimensionalShape: public Shape{
public:
	ThreeDimensionalShape();
	
	void draw(char fill) = 0;
	
	void draw(char fill, int positionX, int positionY) = 0;
	
	float getArea() = 0;
	
	float a;
	
	float b;
	
	float c;

};


#endif