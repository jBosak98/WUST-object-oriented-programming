#include "Rectangle.h"

Rectangle::Rectangle(float a, float b){
	if (a>0 && b>0){
		this->a = a;
		this->b = b;
	}else{
		this->a = 0;
		this->b = 0;
	}
}


Rectangle::Rectangle(){
	this->a = 0;
	this->b = 0;
}

float Rectangle::getBaseField(){
	return a*b;
}

float Rectangle::getBaseDiagonal(){
	return sqrt(a*a+b*b);
}

void Rectangle::setSide(float a, float b){
	if(a>0 && b>0){
		this->a = a;
		this->b = b;
	}
}

float Rectangle::getA(){
	return a;
}

float Rectangle::getB(){
	return b;
}