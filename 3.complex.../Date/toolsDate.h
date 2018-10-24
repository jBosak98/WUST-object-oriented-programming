#ifndef TOOLS_DATE_H
#define TOOLS_DATE_H

#include <complex>

#include "date.h"

#include "valuesDate.h"


bool isLeap(int year);

int getNrOfLeapYears(int year);

long minToSec(long minutes);

long hrToSec(int hours);

long daysToSec(int days);

#endif