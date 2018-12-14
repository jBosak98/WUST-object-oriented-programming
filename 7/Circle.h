#ifndef CIRCLE_HEADER
#define CIRCLE_HEADER

#include "TwoDimensionalShape.h"

#include <cmath>

#include <iostream>

class Circle: public TwoDimensionalShape{
public:
	Circle(float r);
	
	void draw(char fill) override;
	
	void draw(char fill, int positionX, int positionY) override;
	
	float getArea() override;
};

#endif