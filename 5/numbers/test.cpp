#include "test.h"

void startTest(){
	testArabianNumber();
	testRomanNumber();
	testRomanOnebyOne();
	std::cout<<"WELL DONE\n";
}

void testArabianNumber(){
	ArabianNumber a;
	a = ArabianNumber();
	ArabianNumber a2 = ArabianNumber(5);
	ArabianNumber a3 = ArabianNumber(0);

	a.setValue(5);
	assert(a.getValue() == a2.getValue());
	a2.setValue(-5);
	assert(a.getValue() != a2.getValue());
	a = ArabianNumber();
	assert(a.getValue() == a3.getValue());	
}

void testRomanNumber(){
	RomanNumber r = RomanNumber(23);
	assert(r.getValue() == "XXIII");
	RomanNumber r2;
	assert(r2.getValue() == "");
}

void testRomanOnebyOne(){
	RomanNumber r1 = RomanNumber(1);
	assert(r1.getValue() == "I");
	RomanNumber r3 = RomanNumber(3);
	assert(r3.getValue() == "III");
	RomanNumber r4 = RomanNumber(4);
	r4.show();
	assert(r4.getValue() == "IV");
	RomanNumber r5 = RomanNumber(5);
	assert(r5.getValue() == "V");

	RomanNumber r6 = RomanNumber(6);
	assert(r6.getValue() == "VI");
	RomanNumber r9 = RomanNumber(9);
	assert(r9.getValue() == "IX");

	RomanNumber r10 = RomanNumber(10);
	assert(r10.getValue() == "X");
	RomanNumber r14 = RomanNumber(14);
	assert(r14.getValue() == "XIV");
	RomanNumber r15 = RomanNumber(15);
	assert(r15.getValue() == "XV");
	RomanNumber r19 = RomanNumber(19);
	assert(r19.getValue() == "XIX");

	RomanNumber r49 = RomanNumber(49);
	assert(r49.getValue() == "XLIX");
	RomanNumber r52 = RomanNumber(52);
	assert(r52.getValue() == "LII");
	RomanNumber r97 = RomanNumber(97);
	assert(r97.getValue() == "XCVII");
	RomanNumber r99 = RomanNumber(99);
	assert(r99.getValue() == "XCIX");
	RomanNumber r101 = RomanNumber(101);
	assert(r101.getValue() == "CI");
	RomanNumber r148 = RomanNumber(148);
	assert(r148.getValue() == "CXLVIII");

	RomanNumber r482 = RomanNumber(482);
	assert(r482.getValue() == "CDLXXXII");
	RomanNumber r547 = RomanNumber(547);
	assert(r547.getValue() == "DXLVII");
}

