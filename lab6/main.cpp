#include <iostream>
#include "Complex.h"

using namespace std;

 int main() {
	Complex z1; 
	cout<<"z1 = "; z1.Print();
	
	Complex z2(5.6,-0.4); 
	cout<<"z2 = "; z2.Print();
	
	Complex z3=z2; 
	cout<<"z3 = "; z3.Print();
		
	Complex z4=z1; 
	cout<<"z4 = "; z4.Print();
	return 0;
}
