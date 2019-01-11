#ifndef CALCULATOR_HEADER
#define CALCULATOR_HEADER

#include <math.h>
#include "Stack.h"
#include <iostream>
#include <string>
#include <sstream>
#include "CalcElement.h"
#include "Tools.h"


class Calculator{
public:
	Stack<double> numbers;
	
	Calculator();
	double calc(std::string input);
	double calc(Stack<CalcElement> *outputStack);
private:

	Stack<std::string> *allElements;

	void performOperation(std::string op);

	int numberOfOperators(std::string input);

};

#endif