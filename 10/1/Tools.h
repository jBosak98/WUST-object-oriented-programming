#ifndef TOOLS_HEADER
#define TOOLS_HEADER 

#include <iostream>
#include <istream>
#include <string>
#include <sstream>


const std::string opADD = "+";
const std::string opSUB = "-";
const std::string opMUL = "*";
const std::string opDIV = "/";
const std::string opBRC = ")";
const std::string opBRO = "(";
const std::string opPOW = "^";

bool isDouble(std::string inputString);

double stringToDouble(std::string s);

bool isOperator(const std::string input);

bool isLeftBracket(const std::string input);

bool isRightBracket(const std::string input);

#endif