#include <iostream>
#include <sstream>
#include "test.h"
#include "ArabianNumber.h"
#include "RomanNumber.h"


int stringToInt(std::string input){
	int ret;
	std::istringstream ss(input);
	if(!(ss>>ret)){
		ret = 0;
	}
	return ret;
}

int
main(){
	startTest();
	std::string input;
	ArabianNumber ara;
	RomanNumber rom;
	int number;
	std::cin>>input;
	while(input != "exit"){
		number = stringToInt(input);
		if(number > 3999)
			number = 3999;
		ara = ArabianNumber(number);
		std::cout<<"ARABIAN NUMBER:\t";
		ara.show();
		
		rom = RomanNumber(ara.getValue());
		std::cout<<"ROMAN NUMBER:\t";
		rom.show();
		
		std::cout<<"\n";
		std::cin>>input;
	}
	
}