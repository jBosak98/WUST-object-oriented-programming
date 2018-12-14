#ifndef SHAPE_HEADER
#define SHAPE_HEADER

class Shape{
public:
	Shape();
	virtual void draw(char fill) = 0;
	virtual void draw(char fill, int positionX, int positionY) = 0;
	virtual float getArea() = 0;

};


#endif