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

float Rectangle::getArea(){
	return a*b;
}
void Rectangle::draw(char fill){

	int a = (int)this->a;
	int b = (int)this->b;
	std::cout<<"\nRectangle:"<<a<<", "<<b<<"\n";

	for(int i = 0;i < a; i++){
		for(int j = 0;j < b; j++){
			std::cout<<fill;
		}
		std::cout<<"\n";
	}
	
}

void Rectangle::draw(char fill, int positionX, int positionY){
	int a = (int)this->a;
	int b = (int)this->b;
	std::cout<<"\nRectangle:"<<a<<", "<<b<<"\n";

	for(int i = 0;i<positionY;i++){
		std::cout<<"\n";
	}

	for(int i = 0;i < a; i++){
		drawSpace(positionX);
		for(int j = 0;j < b; j++){
			std::cout<<fill;
		}
		std::cout<<"\n";
	}
}