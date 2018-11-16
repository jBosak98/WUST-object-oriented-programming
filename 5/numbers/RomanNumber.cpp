#include "RomanNumber.h"
#include <string>

RomanNumber::RomanNumber(int value){
	setValue(value);
}
RomanNumber::RomanNumber(){}

  static romandata_t const romandata[] ={
        1000, "M",  900, "CM",
        500,  "D",  400, "CD",
        100,  "C",  90,  "XC",
        50,   "L",  40,  "XL",
        10,   "X",  9,   "IX",
        5,    "V",  4,   "IV",
        1,    "I",  0,   NULL 
      };

void RomanNumber::show(){
	std::cout<<getValue()<<"\n";
}

std::string RomanNumber::getValue(){
	return this->value;
}

void RomanNumber::setValue(int arabianNumber){

  std::string result = "";
  for (romandata_t const* current = romandata; current->value > 0; ++current){
      while (arabianNumber >= current->value){
      result += current->numeral;
      arabianNumber  -= current->value;
    }
  }
  this->value = result;
}
