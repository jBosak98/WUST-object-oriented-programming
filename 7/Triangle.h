#ifndef TRIANGLE_HEADER
#define TRIANGLE_HEADER

#include "TwoDimensionalShape.h"

#include <iostream>

#include <cmath>

class Triangle: public TwoDimensionalShape{
public:
	Triangle(float a, float b, float c);
	
	void draw(char fill) override;
	
	void draw(char fill, int positionX, int positionY) override;
	
	float getArea() override;

private:
	void validateTriangle(float *longSide, float *shortSide);
	
	bool isRight();
};

#endif