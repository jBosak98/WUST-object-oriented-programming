#include "test.h"
#include <iostream>

void startTest(){
	testRectangle();
	testCuboid();
	std::cout<<"WELL DONE\n";

}

void testRectangle(){
	Rectangle r;
	r = Rectangle();
	r.setSide(5,4);
	float diagonalR = 6.40312f;//=sqrt(5^2+4^2)
	Rectangle r2 = Rectangle(4,5);

	assert(r.getBaseField() == 20);
	assert(r.getBaseField() != 19);
	assert(r.getBaseDiagonal()-diagonalR < 0.00001f);
	

	assert(r.getBaseField() == r2.getBaseField());
	assert(r.getBaseDiagonal() == r2.getBaseDiagonal());

	Rectangle r3 = Rectangle(-5, -2);
	assert(r3.getA() != -5);
	assert(r3.getBaseField() == 0);
	assert(r3.getBaseDiagonal() == 0);
	assert(r3.getA() == 0);
	assert(r3.getB() == 0);
}

void testCuboid(){
	Cuboid c;
	c = Cuboid();
	c.setSide(10,20,30);
	float diagonalC = 37.41657f;
	float baseDiagonalC = 22.36067f;

	assert(c.getLateralArea() == 2200);
	assert(c.getDiagonal()-diagonalC < 0.00001f); 
	assert(c.getBaseDiagonal() - baseDiagonalC < 0.00001f);

	Cuboid c2 = Cuboid(10,20,0);
	assert(c2.getLateralArea() == 0);
	assert(c2.getDiagonal() == 0);
	assert(c2.getBaseDiagonal() == c.getBaseDiagonal());
}