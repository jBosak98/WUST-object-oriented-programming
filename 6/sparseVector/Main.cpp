#include "SparseVector.h"
#include "test.h"
#include <iostream>


int
main(){
	startTest();
	std::string input;
	std::cout<<"Vector 1: ";
	getline(std::cin, input);
	SparseVector v1 = SparseVector(input);
	
	std::cout<<"Vector 2: ";
	getline(std::cin, input);
	SparseVector v2 = SparseVector(input);

	std::cout<<"Scalar product: "<<v1.scalarProduct(&v2)<<"\n";
}