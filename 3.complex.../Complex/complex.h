#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex{
public:
	Complex(){}

	Complex(float real, float imaginary);

	Complex operator+(Complex c);

	Complex operator-(Complex c);

	Complex operator/(Complex c);

	Complex operator*(Complex c);

	bool operator==(Complex c);

	bool operator!=(Complex c);

	friend std::ostream &operator<<(std::ostream &out, Complex &c);

	friend std::istream &operator>>(std::istream &in, Complex &c);

	float getRealPart();

	float getImaginaryPart();

protected:
	float real = 0;
	float imaginary = 0;
private:

};

#endif