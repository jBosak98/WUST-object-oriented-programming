#include "Circle.h"

Circle::Circle(float r){
	if (r>0){
		this->a = r;
	}else
		this->a = 0;

}

float Circle::getArea(){
	return M_PI * this->a * this->a;
}
void Circle::draw(char fill){
	int a = (int)this->a;
	std::cout<<"\nCircle: r = "<<a<<"\n";
	if(a > 6){
		std::cout<<"I'm very sorry, but I can't draw this circle.\n";
		return;
	}
	switch(a){
		case 1:
			std::cout<<"o";
			break;
		case 2:
			std::cout<<" _"<<'\n';
			std::cout<<"(_)";
			break;
		case 3:
			std::cout<<" __"<<"\n";
			std::cout<<"/  \\"<<"\n";
			std::cout<<"\\__/"<<"\n";
			break;
		case 4:
			std::cout<<" ___"<<"\n";
			std::cout<<"/   \\"<<"\n";
			std::cout<<"|   |"<<"\n";
			std::cout<<"\\___/"<<"\n";
			break;
		case 5:
			std::cout<<"  ____"<<"\n";
			std::cout<<" /    \\"<<"\n";
			std::cout<<"/      \\"<<"\n";
			std::cout<<"\\      /"<<"\n";
			std::cout<<" \\____/"<<"\n";
			break;
		case 6:
			std::cout<<"   _____"<<"\n";
			std::cout<<"  /     \\"<<"\n";
			std::cout<<" /       \\"<<"\n";
			std::cout<<"(         )"<<"\n";
			std::cout<<" \\       /"<<"\n";
			std::cout<<"  \\_____/"<<"\n";
			break;
	}
}

void Circle::draw(char fill, int positionX, int positionY){
	int a = (int)this->a;
	std::cout<<"\nCircle: r = "<<a<<"\n";
	if(a > 6){
		std::cout<<"I'm very sorry, but I can't draw this circle.\n";
		return;
	}
	for(int i = 0;i<positionY;i++){
		std::cout<<"\n";
	}
	drawSpace(positionX);
	switch(a){
		case 1:
			std::cout<<"o";
			break;
		case 2:
			std::cout<<" _"<<'\n';
			drawSpace(positionX);
			std::cout<<"(_)";
			break;
		case 3:
			std::cout<<" __"<<"\n";
			drawSpace(positionX);
			std::cout<<"/  \\"<<"\n";
			drawSpace(positionX);
			std::cout<<"\\__/"<<"\n";
			break;
		case 4:
			std::cout<<" ___"<<"\n";
			drawSpace(positionX);
			std::cout<<"/   \\"<<"\n";
			drawSpace(positionX);
			std::cout<<"|   |"<<"\n";
			drawSpace(positionX);
			std::cout<<"\\___/"<<"\n";
			break;
		case 5:
			std::cout<<"  ____"<<"\n";
			drawSpace(positionX);
			std::cout<<" /    \\"<<"\n";
			drawSpace(positionX);
			std::cout<<"/      \\"<<"\n";
			drawSpace(positionX);
			std::cout<<"\\      /"<<"\n";
			drawSpace(positionX);
			std::cout<<" \\____/"<<"\n";
			break;
		case 6:
			std::cout<<"   _____"<<"\n";
			drawSpace(positionX);
			std::cout<<"  /     \\"<<"\n";
			drawSpace(positionX);
			std::cout<<" /       \\"<<"\n";
			drawSpace(positionX);
			std::cout<<"(         )"<<"\n";
			drawSpace(positionX);
			std::cout<<" \\       /"<<"\n";
			drawSpace(positionX);
			std::cout<<"  \\_____/"<<"\n";
			break;
	}
}

