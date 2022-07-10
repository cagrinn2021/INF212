#include "Complex.h"
Complex::Complex(double r, double i) {
real_ = r; // constructor
imag_ = i;
}
//============================================

Complex::Complex() { // default constructor
real_ = 0.0;
imag_ = 0.0;
}
//============================================
Complex::Complex(const Complex& obj){
real_ = obj.real_;
imag_ = obj.imag_;
}
//====================================
Complex& Complex::operator=(const Complex& obj){
real_ = obj.real_;
imag_ = obj.imag_;
return (*this);
}
//============================================
double Complex::Real() {return real_;}
double Complex::Imag() {return imag_;}
//==============================================
Complex operator+ (Complex& z, Complex& w) {
// students version of op+ is below
// double r=z.Real()+w.Real();
// double i=z.Imag()+w.Imag();
// Complex res(r,i);
// return res;
return Complex(z.Real()+w.Real(), z.Imag()+w.Imag());
}
//=========================================================
Complex operator- (Complex& z, Complex& w) {
return Complex(z.Real()-w.Real(), z.Imag()-w.Imag());
}
//========================================================
Complex& Complex::operator+=(Complex& z){
real_=real_+z.Real(); // this->re_=this->re_+z.Real();
imag_=imag_+z.Imag(); // this->im_=this->im_+z.Imag();
return (*this);
}
//========================================================
Complex& Complex::operator-=(Complex& z) {
real_=real_-z.Real(); // this->re_=this->re_-z.Real();
imag_=imag_-z.Imag(); // this->im_=this->im_-z.Imag();
return (*this);
}
//=====================================================
//============= FAMILY OF OPERATORS FOR ARITHMETICS ========
Complex operator+ (Complex& z, double& w) {
return Complex(z.Real()+w, z.Imag());
}
//=====================================================
Complex operator+ (double& z, Complex& w){
return Complex(z+w.Real(), w.Imag());
}
//=====================================================
Complex operator+ (Complex& z, int& w) {
return Complex(z.Real()+static_cast<int>(w), z.Imag());
}

//=====================================================
Complex operator+ (int& z, Complex& w){
return Complex(w.Real()+static_cast<int>(z), w.Imag());
}
//============= LOGICAL OPS ==========================
bool operator== (Complex& z, Complex& w) {
bool res = false;
if (z.Real()==w.Real() && z.Imag()==w.Imag()){
res = true;
}
return res;
}
//======================================================
bool operator!= (Complex& z, Complex& w) {
bool res = false;
if (!(z == w)) {res = true;}
return res;
}
//======================================================
std::ostream& operator<<(std::ostream& os, Complex& z)
{
os << z.Real()<<" "<<z.Imag();
return os;
}
//===============================================================
std::istream& operator>>(std::istream& is, Complex& z)
{
is >> z.real_ >> z.imag_;
return is;
}
//=======================================================================
