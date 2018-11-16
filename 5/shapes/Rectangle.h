#ifndef RECTANGLE_HEADER
#define RECTANGLE_HEADER
#include <tgmath.h>

class Rectangle {

public:

	Rectangle(float a, float b);
	Rectangle();
	
	float getBaseField();
	float getBaseDiagonal();
	float getA();
	float getB();

	void setSide(float a, float b);


protected:
	float a;
	float b;

};



#endif