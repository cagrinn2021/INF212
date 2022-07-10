#include <iostream>

using namespace std;

main ( ) {
	int a=33;
	int b=13;
	
	int c=0;
	
	c=a&b;
	cout<<"ve kapisi "<<c<<endl;
	c=a|b;
	cout<<"veya kapisi "<<c<<endl;
	c=a^b;
	cout<<"ya da kapisi "<<c<<endl;	
	c=~a;
	cout<<"degil kapisi "<<c<<endl;	
	c=a<<2;
	cout<<"2 sola kaydir "<<c<<endl;
	c=a>>2;
	cout<<"2 saga kaydir "<<c<<endl;
}
