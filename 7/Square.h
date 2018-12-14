#ifndef SQUARE_HEADER
#define SQUARE_HEADER

#include "TwoDimensionalShape.h"

#include <iostream>

class Square: public TwoDimensionalShape{
public:
	Square(float a);
	
	Square();
	
	void draw(char fill) override;
	
	void draw(char fill, int positionX, int positionY) override;
	
	float getArea() override;

};

#endif