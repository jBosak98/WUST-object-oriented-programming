#ifndef CALC_ELEMENT_HEADER
#define CALC_ELEMENT_HEADER

#include <iostream>
#include "Tools.h"

static const int CALC_OPERATOR = 1;
static const int CALC_VALUE = 0;

class CalcElement{
public:

	CalcElement();

	CalcElement(int type, std::string value);

	int type;

	std::string value;

	int precedence;



};

#endif