#ifndef NPN_HEADER
#define NPN_HEADER 

#include <iostream>
#include "Stack.h"
#include "CalcElement.h"
#include <string>
#include <sstream>
#include "Tools.h"

class NPN{
public:

	NPN(std::string input);
	
	Stack<CalcElement>* getStack();
	
	Stack<CalcElement>* getReverseStack();

public:
	Stack<CalcElement> *stack;

	void pushOperator(std::string el, Stack<CalcElement> *operatorStack);

	void pushRightBracket(Stack<CalcElement> *operatorStack);

	void pushDouble(std::string d);

	void pushLeftBracket(Stack<CalcElement> *operatorStack, std::string el);


};


#endif