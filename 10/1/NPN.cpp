#include "NPN.h"

NPN::NPN(std::string input){
	this->stack = new Stack<CalcElement>();
	Stack<CalcElement> *operatorStack = new Stack<CalcElement>();
	std::istringstream ss(input);
	std::string el;
	while(!ss.eof()){
		ss>>el;
		if(isDouble(el))
			pushDouble(el);
		else if(isOperator(el))
			pushOperator(el, operatorStack);
		else if(isLeftBracket(el))
			pushLeftBracket(operatorStack, el);
		else if(isRightBracket(el))
			pushRightBracket(operatorStack);
	}
	while(!operatorStack->isEmpty()){
		CalcElement op;
		operatorStack->pop(op);
		stack->push(op);
	}
}

void NPN::pushRightBracket(Stack<CalcElement> *operatorStack){
	CalcElement popElement;
	do{
		operatorStack->pop(popElement);
		if(popElement.value != opBRO)
			stack->push(popElement);
	}while(popElement.value != opBRO);

}

void NPN::pushLeftBracket(Stack<CalcElement> *operatorStack, std::string el){
	CalcElement op = CalcElement(CALC_OPERATOR, el);
	operatorStack->push(op);
}

void NPN::pushDouble(std::string d){
	CalcElement number = CalcElement(CALC_VALUE,d);
	stack->push(number);
}

void NPN::pushOperator(std::string el, Stack<CalcElement> *operatorStack){
	CalcElement op = CalcElement(CALC_OPERATOR, el);
	while(	operatorStack->top != NULL && operatorStack->top->value.value != opBRO 
			&& (operatorStack->top->value.precedence > op.precedence
			|| (operatorStack->top->value.precedence == op.precedence && op.value != "^"))){
		CalcElement op2;
		operatorStack->pop(op2);
		stack->push(op2);
	}
	operatorStack->push(op);
}

Stack<CalcElement>* NPN::getStack(){
	return this->stack;
}

Stack<CalcElement>* NPN::getReverseStack(){
	Stack<CalcElement> *rpn = new Stack<CalcElement>();
	Node<CalcElement> *rpnNode = stack->top;
		CalcElement e;
	do{
		e = rpnNode->value;
		rpn->push(e);
		rpnNode = rpnNode->prev;
	}while(rpnNode != NULL);
	return rpn;
}