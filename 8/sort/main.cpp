#include "sort.h"
#include <iostream>
#include <sstream>


void generatePoints(Point *pointArray, int size){
	srand(time(NULL));
	for(int i = 0; i<size;i++){
		pointArray[i] = Point(rand()%100-50, rand()%100-50);
	}
}
int getSize(int argc, char* argv){
	int s = 10;
	if(argc > 1){
		std::istringstream ss(argv);
		if(!(ss>>s))
			s = 10;
		
	}
	return s;
}
int
main(int argc, char *argv[]){
	int size = getSize(argc, argv[1]);
	Point *points = new Point[size];
	
	generatePoints(points, size);
	show(points, size);


	std::cout<<"\n"<<"sort according to X"<<"\n";
	mySort(points, size, &compX);
	show(points, size);

	std::cout<<"\n"<<"sort according to Y"<<"\n";
	mySort(points, size, &compY);
	show(points, size);
}