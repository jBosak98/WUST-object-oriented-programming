#include "Account.h"

Account::Account(){
	std::cout<<"CONSTRUCTOR"<<"\n";
	this->money = 0;
}

Account::Account(int money){
	std::cout<<"CONSTRUCTOR"<<"\n";
	this->money = money;
}

Account::~Account(){
	std::cout<<"DESTRUCTOR"<<"\n";

}