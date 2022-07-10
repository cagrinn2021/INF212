#include <iostream>
#include "student.h"


 int main() {
	Student z1; 
	cout<<"z1 = "; z1.Print();
	Student z2("cagri",5,4.2); 
	cout<<"z2 = "; z2.Print();
	Student z3=z2; 
	cout<<"z3 = "; z3.Print();
	Student z4=z1;
	cout<<"z4 = "; z4.Print();	
}
