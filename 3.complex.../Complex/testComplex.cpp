#include "testComplex.h"


void startTestComplex(){
	testComplexConstruction();
	testComplexGetters();
	testComplexOperators();
	testComplexAddition();
	testComplexSubtraction();
	testComplexMultiplication();
	testComplexDivision();
}

void testComplexConstruction(){
	assert(Complex(54,36) == Complex(54,36));
	assert(Complex(54,36) != Complex(55,36));
	assert(Complex(54,36) != Complex(-54,36));
}
void testComplexGetters(){
	Complex c(4000, 2);
	assert(c.getRealPart() == 4000);
	assert(c.getImaginaryPart() == 2);

	assert(Complex(0,0).getRealPart() == 0);
	assert(Complex(0,0).getImaginaryPart() == 0);
	assert(Complex(-1,0).getRealPart() != 0);
	assert(Complex(-1,0).getRealPart() == -1);
	assert(Complex(23,25).getImaginaryPart() == 25);
}

void testComplexOperators(){
	assert(Complex(4000, 02) == Complex(4000, 02));
	assert(Complex(0, 0) == Complex(0, 0));
	assert(Complex(-5, 5) != Complex(5, 5));
	assert(Complex(0, -5) != Complex(0, 5));
	assert(Complex(3,2) != Complex(-3,2));
}

void testComplexAddition(){
	assert(Complex(0,0) + Complex(2,2) == Complex(2,2));
	assert(Complex(-5,0) + Complex(2,2) == Complex(-3,2));
	assert(Complex(0,0) + Complex(0,0) == Complex(0,0));
	assert(Complex(-1,-1) + Complex(10,8) == Complex(9,7)); 
}

void testComplexSubtraction(){
	assert(Complex(0,0) - Complex(2,2) == Complex(-2,-2));
	assert(Complex(-5,0) - Complex(2,2) == Complex(-7,-2));
	assert(Complex(0,0) - Complex(0,0) == Complex(0,0));
	assert(Complex(-1,-1) - Complex(10,8) == Complex(-11,-9)); 

	Complex c(5,4);
	Complex c2(2,2);
	assert(Complex(3,2) == c-c2);
}

void testComplexMultiplication(){
	assert(Complex(0,0) * Complex(2,2) == Complex(0,0));
	assert(Complex(-5,0) * Complex(2,2) == Complex(-10,-10));
	assert(Complex(0,0) * Complex(0,0) == Complex(0,0));
	assert(Complex(-1,-1) * Complex(10,8) == Complex(-2,-18)); 

}
void testComplexDivision(){
	assert(Complex(0,0) / Complex(2,2) == Complex(0,0));
	assert(Complex(-5,0) / Complex(2,2) == Complex(-1.25,1.25));
	assert(Complex(0,0) / Complex(0,1) == Complex(0,0));
	assert(Complex(-1,-1) / Complex(10,8) == Complex(-9.0f/82.0f,-1.0f/82.0f)); 
}