#ifndef SORT_HEADER
#define SORT_HEADER


#include <iostream>
#include <algorithm>
#include "Point.h"

bool compX(Point i, Point j);

bool compY(Point i, Point j);

void show(Point *pointArray, int size);

template <class T>
void mySort(Point *pointArray, int size, bool (*cmp) (const T , const T)){
	std::sort(&pointArray[0], &pointArray[size], cmp);
}


#endif