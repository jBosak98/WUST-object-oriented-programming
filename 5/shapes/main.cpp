#include "Rectangle.h"
#include "Cuboid.h"
#include "test.h"
#include <iostream>


void showRectangle(Rectangle rec){
	std::cout<<"\nArea of base:\t\t"<<rec.getBaseField();
	std::cout<<"\nDiagonal of base:\t"<<rec.getBaseDiagonal();
}
void organizeValues(float *a, float *b, float *c){
	if(*a == 0 && *b != 0 && *c != 0){
		std::cout<<"XD";
		*a = *c;
		*c = 0;
	}
	if(*b == 0 && *a != 0 && *c != 0){
		*b = *c;
		*c = 0;
	}
}
int
main(){
	startTest();
	std::string input;
	getline(std::cin, input);
	float a = 0;
	float b = 0;
	float c = 0;
	std::istringstream ss(input);
	ss>>a>>b>>c;
	organizeValues(&a,&b,&c);
	if(c == 0){
		std::cout<<"\nRectangle:\t\t"<<a<<", "<<b;
		Rectangle rec = Rectangle(a,b);
		showRectangle(rec);
	}else{
		Cuboid cub = Cuboid(a,b,c);
		std::cout<<"\nCuboid:\t\t"<<a<<", "<<b<<", "<<c;
		showRectangle(cub);
		std::cout<<"\nLateral area:\t\t"<<cub.getLateralArea();
		std::cout<<"\nDiagonal of the cuboid:\t"<<cub.getDiagonal();
	}
	std::cout<<"\n";
	
}