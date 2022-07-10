#include <iostream>
#include "kutuphane.h"

int main() {
	car c1("honda","crv",2016,1.6);
	c1.print();
	car c2("honda","crv",2016,1.6);
	c2.print();
	car c3("honda","crv",2015,1.6);
	c3.print();
	car c4;
	c4=c3;
	c4.print();
	
if(c1==c2) cout<<"c1 = c2 \n";
else cout<<"c1 != c2 \n";
if(c1==c3) cout<<"c1 = c3 \n";
else cout<<"c1 != c3 \n";
if(c3==c4) cout<<"c3 = c4 \n";
else cout<<"c3 != c4 \n";
return 0;
}
