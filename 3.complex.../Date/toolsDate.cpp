#include "toolsDate.h"

bool isLeap(int year) {
    return year % LEAP_PERIOD == 0 || year % LEAP_PERIOD_STAGE_1 == 0 && year % LEAP_PERIOD_STAGE_2 != 0;
}

long int minToSec(long int minutes) {
    return minutes * NR_OF_SECONDS_IN_MINUTE;
}

long int hrToSec(int hours) {
    return minToSec(hours * NR_OF_MINUTES_IN_HOUR);
}

long int daysToSec(int days) {
    return hrToSec(days * NR_OF_HOURS_IN_DAY);
}

int getNrOfLeapYears(int year) {
    return (abs(year - 1) / LEAP_PERIOD_STAGE_1 - abs(year - 1) / LEAP_PERIOD_STAGE_2 +
            abs(year - 1) / LEAP_PERIOD_STAGE_3);
}

int stringToInt(std::string s){
	int ret = 0;
	std::istringstream ss(s);
    if(!(ss>>ret)){
    	std::cout<<"WRONG INPUT, 1 IS INSERTED\n";
    	ret = 1;
    }
    return ret;
}