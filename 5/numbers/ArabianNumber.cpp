#include "ArabianNumber.h"


	ArabianNumber::ArabianNumber(int value){
		this->value = value;
	}
	ArabianNumber::ArabianNumber(){
		this->value = 0;
	}

	int ArabianNumber::getValue(){
		return value;
	}

	void ArabianNumber::setValue(int value){
		this->value = value;
	}

	void ArabianNumber::show(){
		std::cout<<value<<"\n";
	}