#ifndef DATE_H
#define DATE_H

#include "toolsDate.h"

#include "valuesDate.h"


class Date {
public:
	Date(){}

	void validateData(int year, int month, int day,bool up);

	Date(int year, int month, int day);

	explicit Date(long seconds);

	int diff(Date date);

	long getSeconds();

	Date getNewDate(int daysLater);

	void addDays(int days);

	void addSecond();

	void addMinute();

	int getYear();

	int getMonth();

	int getDay();

	bool operator==(Date date);

	bool operator!=(Date date);

	bool operator<=(Date date);

	bool operator>=(Date date);

	bool operator>(Date date);

	bool operator<(Date date);

	Date operator+(int days);

	int operator-(Date date);
	
	long getSecInThisMonth();

	void addSeconds(int seconds);
	
	friend std::ostream &operator<<(std::ostream &out, Date &d);





protected:

	long seconds = 0;

private:
	

	long getSecInThisYear();
};
#endif