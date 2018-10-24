#include "ilustrateDate.h"


Date getDateFromSTD(){
	std::cout<<"WRITE THE DATE, EG. \n 2018 10 26\n";
	int day = 0;
	int month = 0;
	int year = 0;
	std::cin>>year;
	std::cin>>month;
	std::cin>>day;
	return Date(year,month,day);
}

void compare(Date d1, Date d2){
	if (d1 == d2){
		std::cout<<"DATES ARE THE SAME!\n";
	} else{
		std::string x = "";
		if(d1 < d2){
			x = "earlier";
		}if(d1 > d2){
			x = "later";
		}
		std::cout<<"Date 1 is "<<x<<" than Date 2 by "<<d1.diff(d2)<<" days\n";
	}
	
}
void startDate(){
		int input;
	Date date = getDateFromSTD();
	std::cout<<"WRITE WHAT U WANT TO DO:\n-1 - exit\n 1 - compare\n 2 - add some number of days\n 3 - write the date\n 4 - check if it is leap year\n";
	std::cin>>input;
	while(input != -1){
		if(input == 1){
			Date date2 = getDateFromSTD();
			compare(date,date2);
		}else if(input == 2){
			std::cout<<"write the number of days";
			std::cin>>input;
			date.addDays(input);

		}else if(input == 3){
			std::cout<<date<<"\n";
		}else if(input == 4){
			if(isLeap(date.getYear()))
				std::cout<<date.getYear()<<" is a leap year"<<"\n";
			else
				std::cout<<date.getYear()<<" is not a leap year"<<"\n";

		}
	std::cout<<"WRITE WHAT U WANT TO DO:\n-1 - exit\n 1 - compare\n 2 - add some number of days\n 3 - write the date\n 4 - check if it is leap year\n";
		std::cin>>input;
	}
}