#include "sort.h"

bool compX(Point i, Point j){
	return i.getX()<j.getX();
}

bool compY(Point i, Point j){
	return i.getY()<j.getY();
}

void show(Point *pointArray, int size){
	std::cout<<"point\t"<<"X"<<"\t"<<"Y"<<"\n";

	for(int i = 0; i<size;i++){
		std::cout<<"p:"<<i<<"\t"<<pointArray[i].getX()<<"\t"<<pointArray[i].getY()<<"\n";
	}

	std::cout<<"\n";
}