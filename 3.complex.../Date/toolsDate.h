#ifndef TOOLS_DATE_H
#define TOOLS_DATE_H

#include <complex>

#include "date.h"

#include "valuesDate.h"

#include <iostream>


bool isLeap(int year);

int getNrOfLeapYears(int year);

long minToSec(long minutes);

long hrToSec(int hours);

int stringToInt(std::string s);

long daysToSec(int days);

#endif