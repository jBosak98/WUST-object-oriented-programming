#include "Cuboid.h"

Cuboid::Cuboid(float a, float b, float c) : Rectangle(a, b){
	if(a>0 && b>0 && c>0)
		this->c = c;
}

Cuboid::Cuboid() : Rectangle(a, b){
	this->c = 0;
}

void Cuboid::setSide(float a, float b, float c){
	this->a = a;
	this->b = b;
	this->c = c;
}

float Cuboid::getLateralArea(){
	if(a<=0 || b<=0 || c<=0)
		return 0;
	return 2*(a*b+a*c+b*c);
}

float Cuboid::getDiagonal(){
	if(a<=0 || b<=0 || c<=0)
		return 0;
	return sqrt(a*a+b*b+c*c);
}

float Cuboid::getC(){
	return c;
}