#include <iostream>
#include "Complex.h"

	Complex::Complex(){
			real_=9;
			imag_=7;
	}
	Complex::Complex(double re, double im){
			real_=re;
			imag_=im;
	}
	Complex::Complex(const Complex &other){
			real_=other.real_;
			imag_=other.imag_;
	}
	Complex& Complex::operator=(const Complex &other){
			real_=other.real_;
			imag_=other.imag_;
			return *this;
	}
	void Complex::Print(void ) {
		if(imag_>0)
			std::cout << real_ << "+" << imag_ <<"i"<< std::endl;
		else
			std::cout << real_ << imag_ <<"i"<< std::endl;
	}
	
