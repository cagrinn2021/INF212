#include <iostream>
using namespace std;
	double real;
	double imag;
	
class complex {
	
	public:
	Complex () {
		cout<<"standart degerler\n";
		real=0.0;
		imag=0.0;
		
	}
	
	Complex(double r, double i) {
		cout<<"ctor with argument called\n";
		
		real=r;
		imag=i;
	}
	

	void set(double r,double i){
		real=r;
		imag=i;
		
	}
	
	void set_real(double r) {
		real =r;
		
	}
	void set_imag(double i) {
		imag=i;
		
	}
	double get_real() {
		
	return real;	
	}
	double get_imag() {
		
	return imag;	
	}
	
	void Print() {
		cout<<"z = "<<real;
		cout<<"+"<<imag;
		cout<<"i"<<endl;
		
	}
	
	
};

int main() {
	
	complex z1;
	z1.Print();
	z1.set(5,3);
	z1.set_real(5);
	z1.set_imag(3);
	z1.Print();
	z1.get_real();
	z1.get_imag();


}
