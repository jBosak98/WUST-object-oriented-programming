#include "complex.h"



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
	if(c.imaginary == 0 && c.real == 0){
		c.real = 1;
	}
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
    float real = getFloatfromSTD();
    float imaginary = getFloatfromSTD();
    c.real = real;
    c.imaginary = imaginary;
    return in;

}

float getFloatfromSTD(){
	float ret = 0;
	std::string s;
	std::cin>>s;
	std::istringstream ss(s);
    if(!(ss>>ret)){
    	std::cout<<"WRONG INPUT, 0 IS INSERTED\n";
    	ret = 0;
    }
    return ret;
}