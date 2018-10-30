#include "time.h"
#include <iostream>


Time::Time(int year, int month, int day, int hour, int minute, int second) : Date(year, month, day) {
    if (hour > MAX_HOUR) hour = MAX_HOUR;
    else if (hour < MIN_HOUR) hour = MIN_HOUR;
    seconds += hrToSec(hour);
    if (minute > MAX_MINUTE) minute = MAX_MINUTE;
    else if (minute < MIN_MINUTE) minute = MIN_MINUTE;
    seconds += minToSec(minute);
    if (second > MAX_SECOND) second = MAX_SECOND;
    else if (second < MIN_SECOND) second = MIN_SECOND;
    seconds += second;

}

int Time::getHour() {
    return static_cast<int>(seconds % (daysToSec(1)) / hrToSec(1));
}

int Time::getMinute() {
    return static_cast<int>(seconds % (hrToSec(1)) / minToSec(1));
}

int Time::getSecond() {
    return static_cast<int>(seconds % minToSec(1));
}

void Time::addHours(int hours) {
    seconds += hrToSec(hours);
}


Time Time::operator+(Time t){
    return Time(static_cast<unsigned long>(this->getSecond() + t.getSecond()));
}

Time Time::operator-(Time t){
    return Time(static_cast<unsigned long>(this->getSecond() - t.getSecond()));
}

std::ostream &operator<<(std::ostream &out, Time &t){
    return out<<t.getYear()<<"."<<t.getMonth()<<"."<<t.getDay()<<"\t"
                <<t.getHour()<<":"<<t.getMinute()<<":"<<t.getSecond()<<"\n";

}

std::istream &operator>>(std::istream &in, Time &t){
    std::string y;
    std::string m;
    std::string d;
    std::string h;
    std::string min;
    std::string s;
    in>>y>>m>>d>>h>>min>>s;
    int year = stringToInt(y);
    int month = stringToInt(m);
    int day = stringToInt(d);
    int hour = stringToInt(h);
    int minute = stringToInt(min);
    int second = stringToInt(s);
    new (&t) Time(year,month,day,hour,minute,second);
    return in;
}
