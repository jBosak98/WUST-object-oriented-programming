#ifndef ROMAN_NUMBER_HEADER
#define ROMAN_NUMBER_HEADER

#include <iostream>
#include <map>
class RomanNumber {
public:

	RomanNumber();

	RomanNumber(int value);

	void show();

	std::string getValue();

	void setValue(int arabianNumber);

private:
	std::string value;

};

  struct romandata_t { int value; char const* numeral; };
#endif