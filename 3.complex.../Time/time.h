#ifndef TIME_H
#define TIME_H

#include "../Date/date.h"

#include "../Date/valuesDate.h"

#include "../Date/date.h"

class Time : public Date {
public:
	Time(){}

	Time(int year, int month, int day, int hour, int minute, int second);

	explicit Time(unsigned long seconds) : Date(seconds) {};

	int getHour();

	int getMinute();

	int getSecond();

	void addHours(int hour);

	Time operator+(Time t);

	Time operator-(Time t);

	friend std::ostream &operator<<(std::ostream &out, Time &t);

	friend std::istream &operator>>(std::istream &in, Time &t);

};

#endif