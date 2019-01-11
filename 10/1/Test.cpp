#include "Test.h"


void startTest(){
	testCalcElement();
	testTools();
	std::cout<<"GJ!";
}

void testCalcElement(){
	CalcElement plus = CalcElement(CALC_OPERATOR, "+");
	assert(plus.precedence == 2);
	assert(plus.type == CALC_OPERATOR);

	CalcElement minus = CalcElement(CALC_OPERATOR, "-");
	assert(minus.precedence == 2);

	CalcElement mul = CalcElement(CALC_OPERATOR, "*");
	assert(mul.precedence == 3);
	
	CalcElement division = CalcElement(CALC_OPERATOR, "/");
	assert(division.precedence == 3);
	
	CalcElement power = CalcElement(CALC_OPERATOR, "^");
	assert(power.precedence == 4);

	CalcElement five = CalcElement(CALC_VALUE, "5");
	assert(five.value == "5");
	assert(five.type == CALC_VALUE);
	assert(five.precedence == 0);
}

void testTools(){
	assert(isDouble("2") == true);
	assert(isDouble("2.2") == true);
	assert(isDouble("-2") == true);
	assert(isDouble("0.3") == true);
	assert(isDouble("0") == true);
	assert(isDouble("2.0004") == true);

	assert(stringToDouble("2") == 2);
	assert(stringToDouble("2.2") == 2.2);
	assert(stringToDouble("-2") == -2);
	assert(stringToDouble("0.3") == 0.3);
	assert(stringToDouble("0") == 0);
	assert(stringToDouble("2.0004") == 2.0004);

	assert(isOperator("+") == true);
	assert(isOperator("-") == true);
	assert(isOperator("*") == true);
	assert(isOperator("/") == true);
	assert(isOperator("^") == true);
	assert(isOperator("x") == false);
	assert(isOperator("^r") == false);
	
	assert(isLeftBracket("(") == true);
	assert(isLeftBracket(")") == false);
	assert(isLeftBracket("{") == false);
	assert(isLeftBracket("[") == false);
	assert(isLeftBracket("((") == false);

	assert(isRightBracket(")") == true);
	assert(isRightBracket("(") == false);
	assert(isRightBracket("}") == false);
	assert(isRightBracket("]") == false);
	assert(isRightBracket("))") == false);
}