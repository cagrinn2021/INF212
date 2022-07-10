#ifndef  COMPLEXV5_H_INCLUDED 
#define  COMPLEXV5_H_INCLUDED
#include  <iostream> 
#include  <cmath>
using namespace std;

class Complex {

public:
Complex ();
Complex (double r,double i);
Complex (const Complex& obj);
Complex& operator=(const Complex& obj);
double Real();
double Imag();
void print();
Complex operator+ (Complex& x);
Complex operator- (Complex& x);

bool operator==(Complex& z);
bool operator!=(Complex& z);

double real_;
double imag_;
};




#endif  //  COMPLEXV5_H_INCLUDED

