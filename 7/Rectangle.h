#ifndef RECTANGLE_HEADER
#define RECTANGLE_HEADER

#include "TwoDimensionalShape.h"

#include <iostream>

class Rectangle: public TwoDimensionalShape{
public:
	Rectangle(float a, float b);
	
	void draw(char fill) override;

	void draw(char fill, int positionX, int positionY) override;
	
	float getArea() override;
};

#endif