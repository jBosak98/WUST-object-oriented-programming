#include "test.h"

void startTest(){
	testSquare();
	testRectangle();
	testCircle();
	testTriangle();
}


void testSquare(){
	Square s = Square(1);
	assert(s.getArea() == 1);
	
	Square s2 = Square(5);
	assert(s2.getArea() == 25);
	s.draw('u');
	s2.draw('/');
}

void testRectangle(){
	Rectangle r = Rectangle(5,4);

	assert(r.getArea() == 20);
	assert(r.getArea() != 19);
	assert(r.getArea() == Rectangle(5,4).getArea());
	r.draw('a');

	Rectangle r3 = Rectangle(-5, -2);
	assert(r3.getArea() == 0);


}

void testCircle(){
	Circle c = Circle(5);
	assert(c.getArea() - M_PI * 5 * 5 < 0.00001);

	Circle c2 = Circle(1);
	c2.draw('x');
	Circle c3 = Circle(2);
	c3.draw('x',4,8);
	Circle c4 = Circle(3);
	c4.draw('x',7,4);
	Circle c5 = Circle(4);
	c5.draw('5',5,4);
	Circle c6 = Circle(5);
	c6.draw('x',4,1);
	Circle c7 = Circle(6);
	c7.draw('x', 3,2);


}

void testTriangle(){
	Triangle t = Triangle(1.5,3,2);
	assert(t.a == 3);
	assert(t.b == 2);
	assert(t.c == 1.5);
	t.draw('t');

	Triangle t2 = Triangle(3,4,5);
	assert(t2.getArea() == 6);
	t2.draw('^');
}