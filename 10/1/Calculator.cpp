#include "Calculator.h"

Calculator::Calculator(){}



void Calculator::performOperation(std::string op){
	double firstNumber;
	double secondNumber;
	double result;

	numbers.pop(secondNumber);
	numbers.pop(firstNumber);
	if(op == opADD)
		result = firstNumber + secondNumber;
	else if(op == opSUB)
		result = firstNumber - secondNumber;
	else if (op == opMUL)
		result = firstNumber * secondNumber;
	else if(op == opDIV)
		result = firstNumber / secondNumber;
	else if(op == opPOW)
		result = pow(firstNumber, secondNumber);
	numbers.push(result);
}


double Calculator::calc(std::string input){
		numbers = Stack<double>();
		std::istringstream ss(input);
		std::string tmp;
		double d;
		while(!ss.eof()){
				ss>>tmp;
			if(isDouble(tmp)){
				d = stringToDouble(tmp);
				numbers.push(d);
			}else if(isOperator(tmp)){
				performOperation(tmp);
			}
		}
		if (numbers.pop(d)){
			return d;
		}else return -1;
}

double Calculator::calc(Stack<CalcElement> *outputStack){
	CalcElement e;
	double d;
		while(!outputStack->isEmpty()){
			outputStack->pop(e);
			if(e.type == CALC_VALUE){
				d = stringToDouble(e.value);
				numbers.push(d);
			}else if(e.type == CALC_OPERATOR){
				performOperation(e.value);
			}
		}
		if (numbers.pop(d)){
			return d;
		}else return -1;
}