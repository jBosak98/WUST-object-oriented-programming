#include "ilustrateTime.h"


Time getTimeFromSTD(){
	std::cout<<"WRITE THE TIME, EG. \n 2018 10 26\n";
	Time t;
	std::cin>>t;
	std::cout<<t;
	return t;
}

void compareTime(Time d1, Time d2){
	if (d1 == d2){
		std::cout<<"TIMES ARE THE SAME!\n";
	} else{
		std::string x = "";
		if(d1 < d2){
			x = "earlier";
		}if(d1 > d2){
			x = "later";
		}
		Time difference = d1-d2;
		std::cout<<"Time 1 is "<<x<<" than Time 2 by "<<difference.getSecond()<<"seconds\n";
	}
	
}
void startTime(){
	int input;
	Time time1 = getTimeFromSTD();
	writePrompt();
	std::cin>>input;
	while(input != -1){
		if(input == 1){
			Time time2 = getTimeFromSTD();
			compareTime(time1,time2);
		}else if(input == 2){
			std::cout<<"write the number of seconds\n";
			std::cin>>input;
			time1.addSeconds(input);
		}else if(input == 3){
			std::cout<<time1;
		}else if(input == 4){
			if(isLeap(time1.getYear()))
				std::cout<<time1.getYear()<<" is a leap year"<<"\n";
			else
				std::cout<<time1.getYear()<<" is not a leap year"<<"\n";
		}else if(input == 5){
			std::cout<<"write the number of days";
			std::cin>>input;
			time1.addDays(input);
		}
		std::cin>>input;
		writePrompt();

	}
	writePrompt();
		
}

void writePrompt(){
	std::cout<<"<<WRITE WHAT U WANT TO DO:\n<<-1 - exit\n<< 1 - compare\n<< 2 - add some number of seconds\n<< 3 - write the date\n<< 4 - check if it is leap year\n<< 5 - add some years\n";
}
