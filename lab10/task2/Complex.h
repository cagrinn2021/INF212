#ifndef COMPLEXV5_H_INCLUDED
#define COMPLEXV5_H_INCLUDED
#include <iostream>
#include <cmath>
class Complex {
friend std::istream& operator>>(std::istream& is, Complex& obj);
public:
Complex(double re, double im);
Complex();
Complex(const Complex& obj);
Complex& operator=(const Complex& obj);
double Real();
double Imag();
// unary operators members of class
Complex& operator+=(Complex& z);
Complex& operator-=(Complex& z);
private:
double real_;
double imag_;
};
// binary operators non-members of class
Complex operator+ (Complex& z, Complex& w);
Complex operator- (Complex& z, Complex& w);
// overloading operator + for supporting of operations with int & double
Complex operator+ (Complex& z, double& w);
Complex operator+ (double& z, Complex& w);
Complex operator+ (Complex& z, int& w);
Complex operator+ (int& z, Complex& w);
// overloading logical operators
bool operator== (Complex& z, Complex& w);
bool operator!= (Complex& z, Complex& w);
// overloading input output operators
std::ostream& operator<<(std::ostream& os, Complex& z);
std::istream& operator>>(std::istream& is, Complex& z);
#endif // COMPLEXV5_H_INCLUDEDs
