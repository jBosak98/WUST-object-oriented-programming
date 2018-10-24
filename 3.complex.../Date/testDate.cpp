#include "testDate.h"

void startTestDate() {
    Date d1(4, 1, 1);
    d1.addDays(365);
    assert(d1.getSeconds() == Date(4, 12, 31).getSeconds());
    assert((Date(4,1,1) + 365).getSeconds() == Date(4,12,31).getSeconds());
    assert(Date(1,1,1).operator-(Date(1,1,3)) == 2);

    Date d2(2018,10,32);
    assert(d2.getDay() == 31);
    assert(d2.getDay() != 32);
    assert(d2.getDay() != 1);
    d2.addDays(1);
    assert(d2.getDay() == 1);
    assert(d2.getDay() != 32);
    assert(d2.getDay() != 31);

    Date d4(2018,11,1);
    assert(d4.getDay() == 1);
    assert(d4.getMonth() == 11);
    assert(d4.getDay() != 31);
    assert(d4.getDay() != 32);



    testDate();
}

void testDate() {
    testDateConstruction();
    testDateDiff();
    testDateAddDays();
    testDateGetters();
    testDateOperators();
    customTest();
}

void testDateDiff() {
    assert(Date(2000, 1,1).diff(Date(2018,1,1)) == 6575);
}

void customTest() {
    assert(Date(1,1,1).getSeconds() == 0);
    assert(Date(1,1,1).getYear() == 1);
    assert(Date(2,1,1).getSeconds() == daysToSec(365));
    assert(Date(2,1,1).getYear() == 2);
    assert(Date(3,1,1).getSeconds() == 2 * daysToSec(365));
    assert(Date(3,1,1).getYear() == 3);
    assert(Date(4,1,1).getSeconds() == 3 * daysToSec(365));
    assert(Date(4,1,1).getYear() == 4);
    assert(Date(4,12,31).getSeconds() == 4 * daysToSec(365));
    assert(Date(4,12,31).getYear() == 4);
    assert(Date(5,1,1).getSeconds() == 4 * daysToSec(365) + daysToSec(1));
    assert(Date(5,1,1).getYear() == 5);
    assert(Date(1999, 01, 1).getYear() == 1999);
    assert(Date(1999, 12, 30).getYear() == 1999);
    assert(Date(2000, 01, 1).getYear() == 2000);
    assert(Date(2001, 01, 1).getYear() == 2001);
}

void testDateOperators() {
    assert(Date(4000, 02, 29) == Date(4000, 02, 29));
    assert(Date(4000, 02, 29) <= Date(4000, 02, 29));
    assert(Date(4000, 03, 1) >= Date(4000, 02, 29));
    assert(Date(4000, 03, 1) > Date(4000, 02, 29));
    assert(Date(4000, 01, 1) < Date(4000, 02, 29));
}

void testDateGetters() {
    Date d1 = Date(4000, 02, 29);
    assert(d1.getYear() == 4000);
    assert(d1.getMonth() == 2);
    assert(d1.getDay() == 29);

    assert(Date(1, 01, 1).getYear() == 1);
    assert(Date(2, 01, 1).getYear() == 2);
    assert(Date(3, 01, 1).getYear() == 3);
    assert(Date(4, 01, 1).getYear() == 4);
    assert(Date(5, 01, 1).getYear() == 5);

    Date time1 = Date(2001, 12, 31);
    assert(time1.getYear() == 2001);
    assert(time1.getMonth() == 12);
    assert(time1.getDay() == 31);


    Date time2 = Date(346, 11, 24);

    assert(time2.getYear() == 346);
    assert(time2.getMonth() == 11);
    assert(time2.getDay() == 24);

}

void testDateAddDays() {
    Date date1 = Date(1, 1, 1);
    assert(date1.getNewDate(1).getSeconds() == daysToSec(1));

    Date date2 = Date(1, 1, 1);
    assert(date2.getNewDate(238796).getSeconds() == daysToSec(238796));
}

void testDateConstruction() {
    assert(Date(-435, -1, -768) == Date(1,1,1));

    assert(Date(1, 1, 1).getSeconds() == 0);

    assert(Date(1, 1, 2).getSeconds() == daysToSec(1));

    assert(Date(1, 2, 25).getSeconds() == daysToSec(NR_OF_DAYS_JAN + 24));

    assert(Date(2, 1, 1).getSeconds() == daysToSec(NR_OF_DAYS_IN_YEAR));

    assert(Date(4, 1, 1).getSeconds() == daysToSec(3 * NR_OF_DAYS_IN_YEAR ));

    assert(Date(4, 3, 1).getSeconds() == daysToSec(3 * NR_OF_DAYS_IN_YEAR + NR_OF_DAYS_JAN + NR_OF_DAYS_LEAP_FEB));

    assert(Date(5, 1, 1).getSeconds() == daysToSec(3 * NR_OF_DAYS_IN_YEAR + 1 * NR_OF_DAYS_IN_LEAP_YEAR));

    assert(Date(2001, 1, 1).getSeconds() == daysToSec(730485));

    assert(Date(2001, 12, 31).getSeconds() == daysToSec(5 * NR_OF_LEAP_IN_PERIOD * NR_OF_DAYS_IN_LEAP_YEAR + 5 * (LEAP_PERIOD - NR_OF_LEAP_IN_PERIOD) * NR_OF_DAYS_IN_YEAR + NR_OF_DAYS_IN_YEAR - 1));
}
