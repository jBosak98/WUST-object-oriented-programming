#ifndef SPARSE_VECTOR_HEADER
#define SPARSE_VECTOR_HEADER

#include <iostream>
#include <sstream>
#include <cmath>

#include "VectorElement.h"

class SparseVector{
public:
	SparseVector(std::string vector);

	int scalarProduct(SparseVector *secondVector);
	
	int orderVector;

	VectorElement *head;

private:

	bool valueExist(int orderVector, int i);
	
	int insertHead(std::istringstream *stream);
	
	int length;
};


#endif