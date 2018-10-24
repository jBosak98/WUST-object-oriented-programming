#include "date.h"

 Date::Date(long seconds){
    this->seconds = seconds;
}

Date::Date(int year, int month, int day) {
    validateData(year,month,day, false);
}

void Date::validateData(int year, int month, int day, bool up){
    if(year < 1) year = 1;
    if(month > MAX_MONTH) month = MAX_MONTH;
    else if (month < MIN_MONTH) month = MIN_MONTH;
    if(day < MIN_DAY) day = MIN_DAY;


    switch(month){
        case MONTH_NR_JAN:
        case MONTH_NR_MAR:
        case MONTH_NR_MAY:
        case MONTH_NR_JUL:
        case MONTH_NR_AUG:
        case MONTH_NR_OCT:
        case MONTH_NR_DEC:
            if(day > NR_OF_DAYS_DEC) {
                day = NR_OF_DAYS_DEC;
            }
            break;
        case MONTH_NR_APR:
        case MONTH_NR_JUN:
        case MONTH_NR_SEP:
        case MONTH_NR_NOV:
            if(day > NR_OF_DAYS_NOV) 
                day = NR_OF_DAYS_NOV;
            break;
        case MONTH_NR_FEB:
            if(isLeap(year)){
                if( day > NR_OF_DAYS_LEAP_FEB){
                        day = NR_OF_DAYS_LEAP_FEB;
                }
            }
        default:
            break;

    }
    int days = day - 1;
    switch (month) {
        case MONTH_NR_DEC:
            days += NR_OF_DAYS_NOV;
        case MONTH_NR_NOV:
            days += NR_OF_DAYS_OCT;
        case MONTH_NR_OCT:
            days += NR_OF_DAYS_SEP;
        case MONTH_NR_SEP:
            days += NR_OF_DAYS_AUG;
        case MONTH_NR_AUG:
            days += NR_OF_DAYS_JUL;
        case MONTH_NR_JUL:
            days += NR_OF_DAYS_JUN;
        case MONTH_NR_JUN:
            days += NR_OF_DAYS_MAY;
        case MONTH_NR_MAY:
            days += NR_OF_DAYS_APR;
        case MONTH_NR_APR:
            days += NR_OF_DAYS_MAR;
        case MONTH_NR_MAR:
            days += isLeap(year) ? NR_OF_DAYS_LEAP_FEB : NR_OF_DAYS_FEB;
        case MONTH_NR_FEB:
            days += NR_OF_DAYS_JAN;
        default:
            break;
    }
    int leapYears = getNrOfLeapYears(year);
    days += leapYears * NR_OF_DAYS_IN_LEAP_YEAR + (year - 1 - leapYears) * NR_OF_DAYS_IN_YEAR;
    seconds = daysToSec(days);
}
long int Date::getSeconds(){
	return seconds;
}

Date Date::getNewDate(int daysLater){
    return Date(seconds + daysToSec(daysLater));
}



int Date::getYear() {
    long secs = seconds;
    int year = 1;
    while (isLeap(year) ? secs >= daysToSec(NR_OF_DAYS_IN_LEAP_YEAR) : secs >= daysToSec(NR_OF_DAYS_IN_YEAR)) {
        isLeap(year) ? secs -= daysToSec(NR_OF_DAYS_IN_LEAP_YEAR) : secs -= daysToSec(NR_OF_DAYS_IN_YEAR);
        year++;
    }

    return year;
}

int Date::getMonth() {
    int result = 0;
    int daysInMonths[NR_OF_MONTHS_IN_YEAR] = {NR_OF_DAYS_JAN, NR_OF_DAYS_FEB,
                                              NR_OF_DAYS_MAR, NR_OF_DAYS_APR,
                                              NR_OF_DAYS_MAY, NR_OF_DAYS_JUN,
                                              NR_OF_DAYS_JUL, NR_OF_DAYS_AUG,
                                              NR_OF_DAYS_SEP, NR_OF_DAYS_OCT,
                                              NR_OF_DAYS_NOV, NR_OF_DAYS_DEC};
    if (isLeap(getYear()))
        daysInMonths[1] = NR_OF_DAYS_LEAP_FEB;

    long int remnantSec = getSecInThisYear();
    bool found = false;
    for (int i = 0; i < NR_OF_MONTHS_IN_YEAR && !found; i++) {
        auto secInMonth = static_cast<int>(daysToSec(daysInMonths[i]));
        if (remnantSec >= secInMonth) {
            remnantSec -= secInMonth;
        } else {
            result = i + 1;
            found = true;
        }
    }

    return result;
}
int Date::getDay() {
    return static_cast<int>(getSecInThisMonth() / daysToSec(1) + 1);
}

long Date::getSecInThisMonth() {
    long remnantSec = (getSecInThisYear());
    int daysInMonths[NR_OF_MONTHS_IN_YEAR] = {NR_OF_DAYS_JAN, NR_OF_DAYS_FEB,
                                              NR_OF_DAYS_MAR, NR_OF_DAYS_APR,
                                              NR_OF_DAYS_MAY, NR_OF_DAYS_JUN,
                                              NR_OF_DAYS_JUL, NR_OF_DAYS_AUG,
                                              NR_OF_DAYS_SEP, NR_OF_DAYS_OCT,
                                              NR_OF_DAYS_NOV, NR_OF_DAYS_DEC};
    if (isLeap(getYear()))
        daysInMonths[1] = NR_OF_DAYS_LEAP_FEB;

    for (int i = 0; i < NR_OF_MONTHS_IN_YEAR; i++) {
        auto secInMonth = static_cast<int>(daysToSec(daysInMonths[i]));
        if (remnantSec >= secInMonth) {
            remnantSec -= secInMonth;
        } else {
            i = NR_OF_MONTHS_IN_YEAR;
        }
    }
    return remnantSec;
}

long Date::getSecInThisYear() {
    int year = getYear();
    int leapYears = getNrOfLeapYears(year);
    return seconds - daysToSec(leapYears * NR_OF_DAYS_IN_LEAP_YEAR + (year - 1 - leapYears) * NR_OF_DAYS_IN_YEAR);
}

bool Date::operator==(Date date) {
    return seconds == date.getSeconds();
}

bool Date::operator!=(Date date) {
    return seconds != date.getSeconds();
}

bool Date::operator<=(Date date) {
    return seconds <= date.getSeconds();
}

bool Date::operator>=(Date date) {
    return seconds >= date.getSeconds();
}

bool Date::operator<(Date date) {
    return seconds < date.getSeconds();
}

bool Date::operator>(Date date) {
    return seconds > date.getSeconds();
}

void Date::addDays(int days) {
    // seconds += daysToSec(days);
        seconds += daysToSec(days);
}

void Date::addMinute() {
    seconds += NR_OF_SECONDS_IN_MINUTE;
}

void Date::addSecond() {
    seconds++;
}

void Date::addSeconds(int seconds) {
    this->seconds+= seconds;
}

int Date::diff(Date date) {
    long result = this->seconds - date.seconds;
    result = abs(static_cast<int>(result / (NR_OF_SECONDS_IN_MINUTE * NR_OF_MINUTES_IN_HOUR * NR_OF_HOURS_IN_DAY)));
    return static_cast<int>(result);
}

Date Date::operator+(int days) {
    return getNewDate(days);
}

int Date::operator-(Date date) {
    return diff(date);
}

std::ostream &operator<<(std::ostream &out, Date &d){
    return out<<d.getYear()<<"."<<d.getMonth()<<"."<<d.getDay()<<"\n";
}