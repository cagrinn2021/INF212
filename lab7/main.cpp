#include <iostream>
#include "kutuphane.h"
int main() {
	Point3D z1; 
	cout<<"z1 = "; 
	z1.Print();
	Point3D z2(3,4,5); 
	cout<<"z2 = "; 
	z2.Print();
	Point3D z3(z2);
	cout<<"z3 = "; 
	z3.Print();	
	Point3D z4;
	z4=z1;
	cout<<"z4 = "; 
	z4.Print();
}
