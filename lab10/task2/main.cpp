#include "Complex.h"
using namespace std;
int main()
{
Complex a(6.7,0.1);
Complex b(5.6,-0.4);
cout << b.Real() << " " << b.Imag() << endl;
b += a ;
cout << b << endl;
int g(10);
double f(100.1);
Complex c;
c = a + g;
cout << c <<endl;
c = g + a;
cout << c <<endl;
c = b + f;
cout << c <<endl;
c = f + b;
cout << c <<endl;
Complex c1(-4.7,0.6);
Complex c2(1.2,0.1);
cout << (c1 == c2) << endl;
cout << (c1 != c2) << endl;
cout << endl;
Complex c3(1.2,0.1);
cout << (c3 == c2) << endl;
cout << (c3 != c2) << endl;
cout << endl;
cout << c3 << endl;
cout << "Enter real and imaginary part values: ";
cin >> c1;
cout << c1;
return 0;
}
//===============================================
