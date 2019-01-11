#include "CalcElement.h"


CalcElement::CalcElement(){}

CalcElement::CalcElement(int type, std::string value){
	this->type = type;
	this->value = value;
	if(type == CALC_VALUE) this->precedence = 0;
	if(value == opPOW) this->precedence = 4;
	else if(value == opMUL) this->precedence = 3;
	else if(value == opDIV) this->precedence = 3;
	else if(value == opADD) this->precedence = 2;
	else if(value == opSUB) this->precedence = 2;
}
