#ifndef TWO_DIMENSIONAL_SHAPE_HEADER
#define TWO_DIMENSIONAL_SHAPE_HEADER

#include <iostream>

#include "Shape.h"

class TwoDimensionalShape: public Shape{
public:
	// TwoDimensionalShape();
	void draw(char fill)=0;
	
	void draw(char fill, int positionX, int positionY) = 0;
	
	void drawSpace(int space);
	
	float getArea()=0;
	
	float a;
	
	float b;
	
	float c;

};


#endif