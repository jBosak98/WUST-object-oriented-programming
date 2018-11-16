#ifndef ARABIAN_NUMBER_HEADER
#define ARABIAN_NUMBER_HEADER

#include <iostream>

class ArabianNumber {
public:

	ArabianNumber(int value);
	
	ArabianNumber();

	void show();


	int getValue();
	
	void setValue(int value);
	

private:
	int value;
};


#endif