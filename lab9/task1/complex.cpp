#include  "complex.h"
Complex::Complex () {
	real_=0;
	imag_=0;
}
Complex::Complex (double r,double i) {
	real_=r;
	imag_=i;
}
Complex::Complex (const Complex& obj) {
	real_=obj.real_;
	imag_=obj.imag_;
}
Complex& Complex::operator=(const Complex& obj){
	real_=obj.real_;
	imag_=obj.imag_;
	return *this;	
}
double Complex::Real() {
	return real_;
}
double Complex::Imag(){
	return imag_;
}

void Complex::print(){
	cout<<"real =" <<real_<<" "<<imag_<<"i"<<endl;
}
Complex Complex::operator+ (Complex& x){
	Complex toplamcpx;
	toplamcpx.real_=real_+x.real_;
	toplamcpx.imag_=imag_+x.imag_;
	return toplamcpx;
}
Complex Complex::operator- (Complex& x){
	Complex cikarcpx;
	cikarcpx.real_=real_-x.real_;
	cikarcpx.imag_=imag_-x.imag_;
	return cikarcpx;
}
bool Complex::operator==(Complex &z){
	Complex tt;
	bool res= false;
	if(real_==z.real_&&imag_==z.imag_){
	res=true;
	}
	
	return res;
}
bool Complex::operator!=(Complex &z){
	bool res= false;
	if(real_!=z.real_&&imag_!=z.imag_){
		res = true;
	}
	return res;
}








