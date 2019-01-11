#include "main.h"

int 
main(){
	// startTest();
	std::string input;
	std::getline(std::cin,input);
	NPN *npn = new NPN(input);
	Calculator calc = Calculator();
	// npn->getReverseStack()->show();
	double res = calc.calc(npn->getReverseStack());
	std::cout<<"\nResult: "<<res<<"\n";
		

	return 0;
}