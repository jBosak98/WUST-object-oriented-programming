#include "main.h"

int
main(){
	// startTest();
	int input = 10;
	int a = 0;
	int b = 0;
	int c = 0;
	int posX = 0;
	int posY = 0;
	char fill = 'x';
	TwoDimensionalShape *shape;
	printPrompt();
	std::cin>>input;
	while(input != 0){
		std::cin>>posX>>posY;
		switch(input){
			case 0:
				exit(EXIT_SUCCESS);
				break;
			case 1:
				std::cout<<"write the radius"<<"\n";
				std::cin>>a;
				shape = new Circle(a);
				std::cout<<"area: "<<shape->getArea();
				shape->draw('x',posX,posY);
				break;
			case 2:
				std::cout<<"write the length of first and second side, then the char that will fill the rectangle"<<"\n";
				std::cin>>a>>b>>fill;
				shape = new Rectangle(a,b);
				std::cout<<"area: "<<shape->getArea();
				shape->draw(fill,posX,posY);
				break;
			case 3:
				std::cout<<"write the length of side, then the char that will fill the square"<<"\n";
				std::cin>>a>>fill;
				shape = new Square(a);
				std::cout<<"area: "<<shape->getArea();
				shape->draw(fill,posX,posY);
				break;
			case 4:
				std::cout<<"write the length of first, second and third side, then the char that will fill the rectangle"<<"\n";
				std::cin>>a>>b>>c>>fill;
				shape = new Triangle(a,b,c);
				std::cout<<"area: "<<shape->getArea();
				shape->draw(fill,posX,posY);
				break;

		}
		printPrompt();
		std::cin>>input;
	}
}

void printPrompt(){
	std::cout<<"\n";
	std::cout<<"0 - exit"<<"\n";
	std::cout<<"1 - circle"<<"\n";
	std::cout<<"2 - rectangle"<<"\n";
	std::cout<<"3 - square"<<"\n";
	std::cout<<"4 - triangle"<<"\n";
	std::cout<<"then write the offset value on X axis and Y axis"<<"\n";
}