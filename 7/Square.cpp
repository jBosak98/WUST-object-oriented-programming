#include "Square.h"

Square::Square(float a){
	this->a = a;
}
Square::Square(){
	
}

void Square::draw(char fill){
	int a = (int)this->a;
	std::cout<<"\nSquare:"<<a<<"\n";

	for(int i = 0;i < a; i++){
		for(int j = 0;j < a; j++){
			std::cout<<fill;
		}
		std::cout<<"\n";
	}
	
}


float Square::getArea(){
	return a*a;
}

void Square::draw(char fill, int positionX, int positionY){
	int a = (int)this->a;
	std::cout<<"\nSquare:"<<a<<"\n";

	for(int i = 0;i<positionY;i++){
		std::cout<<"\n";
	}
	
	for(int i = 0;i < a; i++){
		drawSpace(positionX);
		for(int j = 0;j < a; j++){
			std::cout<<fill;
		}
		std::cout<<"\n";
	}
}