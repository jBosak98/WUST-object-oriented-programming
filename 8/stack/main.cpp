#include "Stack.h"
// #include <String>
int
main(){
	Stack<std::string> *stack = new Stack<std::string>(5);
	std::string input;
	std::string stackElement;
	std::cin>>input;
	while(input != "exit"){
		stackElement = "";
		if(input == "push"){
			std::cin>>stackElement;
			if(stack->push(stackElement))
				std::cout<<"true"<<"\n";
			else 
				std::cout<<"false"<<"\n";
		}else if(input == "pop"){
			if(stack->pop(stackElement)){
				std::cout<<"true, ";
				std::cout<<stackElement<<"\n";
			}else
				std::cout<<"false"<<"\n";
		}else if(input == "show"){
			stack->show();
		}
		std::cin>>input;
	}
	return 0;
}