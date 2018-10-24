#include "ilustrateComplex.h"
#include "Date/testDate.h"
#include "Complex/testComplex.h"
#include "Time/testTime.h"
#include "ilustrateDate.h"
#include "ilustrateTime.h"
#include <iostream>
#include <sstream>
#include "Date/date.h"
#include "Date/toolsDate.h"
#include "Time/time.h"

int main(){
	startTestDate();
	startTestComplex();
	startTestTime();
	std::cout<<"GOOD JOB !\n";
	std::string input;
	std::cout<<"WRITE WHICH CLASS YOU WANT TO USE:DATE, COMPLEX OR TIME\n";
	std::cin>>input;
	if(input == "DATE"){
		startDate();
	}else if(input == "COMPLEX"){
		startComplex();
	}else if(input == "TIME"){
		startTime();  
	}
	return 0;
}


