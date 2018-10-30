#include "testTime.h"


void startTestTime() {

    testTime();
    Time t1(2018,10,31,100,100,100);
    assert(t1 == Time(2018,10,31,23,59,59));
    t1.addSeconds(2);
    assert(t1 == Time(2018,11,1,0,0,1));
    assert(t1 != Time(2018,11,1,0,0,0));

}

void testTime() {
    testTimeConstruction();
    testTimeGetters();
    testTimeOperators();

}

void testTimeOperators() {
    assert(Time(346, 11, 24, 23, 35, 16) == Time(346, 11, 24, 23, 35, 16));
    assert(Time(346, 11, 24, 23, 35, 15) <= Time(346, 11, 24, 23, 35, 16));
    assert(Time(346, 11, 24, 23, 36, 16) >= Time(346, 11, 24, 23, 35, 16));
    assert(Time(346, 11, 25, 23, 35, 16) >  Time(346, 11, 24, 23, 35, 16));
    assert(Time(346, 11, 23, 23, 35, 16) <  Time(346, 11, 24, 23, 35, 16));
}



void testTimeConstruction() {
    assert(Time(1,1,1,235,643,234) == Time(1,1,1,23,59,59));
    assert(Time(1,1,1,235,643,0) == Time(1,1,1,23,60,0));
    assert(Time(1, 1, 1, 12, 12, 12).getSeconds() == 43932);
    assert(Time(2001, 12, 31, 12, 12,0).getSeconds() == 63145397520);
}

void testTimeGetters() {
    Time time1 = Time(2001, 12, 31, 12, 12, 12);
    assert(time1.getYear() == 2001);
    assert(time1.getMonth() == 12);
    assert(time1.getDay() == 31);
    assert(time1.getHour() == 12);
    assert(time1.getMinute() == 12);
    assert(time1.getSecond() == 12);

    Time time2 = Time(346, 11, 24, 23, 35, 16);
    assert(time2.getYear() == 346);
    assert(time2.getMonth() == 11);
    assert(time2.getDay() == 24);
    assert(time2.getSecond() == 16);
    assert(time2.getMinute() == 35);
    assert(time2.getHour() == 23);
}

