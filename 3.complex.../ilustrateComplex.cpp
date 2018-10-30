#include "ilustrateComplex.h"

void startComplex(){
	std::cout<<"WRITE THE REAL PART AND THE IMAGINARY PART OF THE COMPLEX NUMBER, \neg. 10 20 means 10+20i\n";
	Complex c1;
	Complex c2;
	std::cin>>c1;
	std::cout<<c1;
	std:: cout<<"\nWRITE WHAT YOU WANT TO DO WITH THIS NUMBER: * / + -\n";
	std::string input;
	std::cin>>input;
	std::cout<<"WRITE SECOND COMPLEX NUMBER\n";
	std::cin>>c2;
	std::cout<<c2;
	if(input == "/" && c2.imaginary == 0 && c2.real == 0){
		std::cout<<"DIVISION BY 0 is impossible, 1 IS INSERTED";
		c2.real = 1; 
	}
	Complex result;
	std::cout<<"\n\n"<<c1;
	if(input == "*"){
		std::cout<<" * ";
		result = c1 * c2;
	}else if(input == "/"){
		std::cout<<" / ";
		result = c1 / c2;
	}else if(input == "+"){
		std::cout<<" + ";
		result = c1 + c2;
	}else if(input == "-"){
		std::cout<<" - ";
		result = c1 - c2;
	}
	std::cout<<c2<<" = "<<result<<"\n";

}
