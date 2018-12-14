#include "Triangle.h"

float Triangle::getArea(){
	float p = 0.5*(this->a + this->b + this->c);
	return sqrt(p*(p - this->a)*(p - this->b)*(p - this->c));
}

Triangle::Triangle(float a, float b, float c){
	validateTriangle(&a, &b);
	validateTriangle(&a, &c);
	validateTriangle(&b, &c);

	if(c > 0 && b+c > a){
		this->a = a;
		this->b = b;
		this->c = c;
	}else{
		this->a = 0;
		this->b = 0;
		this->c = 0;
	}
}

void Triangle::validateTriangle(float *longSide, float *shortSide){
	if(*shortSide > *longSide){
		float tmp = *shortSide;
		*shortSide = *longSide;
		*longSide = tmp;
	}
}
void Triangle::draw(char fill){

	std::cout<<"\nTriangle:"<<this->a<<", "<<this->b<<"\n";
	if(!isRight()){
		std::cout<<"I'm very sorry, but I can't draw this triangle.\n";
		return;
	}

	int c = (int)this->c;
	int b = (int)this->b;

	for(int i = 0;i < c; i++){
		for(int j = i;j < b; j++){
			std::cout<<fill;
		}
		std::cout<<"\n";
	}
	
}


bool Triangle::isRight(){
	float check =  pow(this->a, 2) - pow(this->b, 2) - pow(this->c, 2);
	return(check < 0.1 && check > -0.1);
}

void Triangle::draw(char fill, int positionX, int positionY){
	std::cout<<"\nTriangle:"<<this->a<<", "<<this->b<<", "<<this->c<<"\n";
	if(!isRight()){
		std::cout<<"I'm very sorry, but I can't draw this triangle.\n";
		return;
	}

	for(int i = 0;i<positionY;i++){
		std::cout<<"\n";
	}

	int c = (int)this->c;
	int b = (int)this->b;

	for(int i = 0;i < c; i++){
		drawSpace(positionX);

		for(int j = i;j < b; j++){
			std::cout<<fill;
		}
		std::cout<<"\n";
	}
	
}