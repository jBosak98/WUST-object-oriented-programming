#include "complex.h"
#include <cmath>

Complex::Complex(float real, float imaginary){
	this->real = real;
	this->imaginary = imaginary;
}

Complex Complex::operator+(Complex c){
	return Complex(this->real + c.real, this->imaginary + c.imaginary);
}

Complex Complex::operator-(Complex c){
	return Complex(this->real - c.real, this->imaginary - c.imaginary);
}

Complex	Complex::operator*(Complex c){
	float r = this->real * c.real - this->imaginary * c.imaginary;
	float i = this->real * c.imaginary + this->imaginary * c.real;
	return Complex(r,i);
}

Complex	Complex::operator/(Complex c){
	float r = (this->real * c.real + this->imaginary * c.imaginary)/(c.imaginary * c.imaginary + c.real * c.real);
	float i = (this->imaginary * c.real - this->real * c.imaginary)/(c.imaginary * c.imaginary + c.real * c.real);
	return Complex(r,i);
}
bool Complex::operator==(Complex c){
	return this->real == c.real && this->imaginary == c.imaginary;
}

bool Complex::operator!=(Complex c){
	return !(this->real == c.real && this->imaginary == c.imaginary);
}

float Complex::getRealPart(){
	return this->real;
}

float Complex::getImaginaryPart(){
	return this->imaginary;
}

std::ostream &operator<<(std::ostream &out, Complex &c){
	if(c.imaginary < 0){
		 float i = sqrt(c.imaginary * c.imaginary);
		return out<<c.real<<" - "<<i<<"i ";
	}
    return out<<c.real<<" + "<<c.imaginary<<"i ";

}

std::istream &operator>>(std::istream &in, Complex &c){
    int real = 0;
    int imaginary = 0;
    in>>real>>imaginary;
    new (&c) Complex(real,imaginary);
    return in;

}