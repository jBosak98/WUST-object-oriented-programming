#include "Tools.h"

bool isDouble(std::string inputString) {
    try{
        std::stod(inputString);
    }catch(...){
        return false;
    }
    return true;
}

double stringToDouble(std::string s){
	std::istringstream ss(s);
	double result = 0;
	ss>>result;
	return result;
}

bool isOperator(const std::string input){
	static const std::string operators ="-+*/^"; 
	if (input.length() == 1) 
		return operators.find_first_of(input[0]) != std::string::npos;
	return false;
}

bool isLeftBracket(const std::string input){
	static const std::string operators = opBRO; 
	if (input.length() == 1) 
		return operators.find_first_of(input[0]) != std::string::npos;
	return false;
}

bool isRightBracket(const std::string input){
	static const std::string operators = opBRC; 
	if (input.length() == 1) 
		return operators.find_first_of(input[0]) != std::string::npos;
	return false;
}