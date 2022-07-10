#include <iostream>
#include <bitset>
#include <string>
using namespace std;
main ( ) { 

bitset<4> b;	
b[0]=1;
b[1]=0;
b[2]=1;
b[3]=1;

cout<<"b : "<<b<<endl<<endl;
cout <<"set bitin sayisi = "<<b.count()<<endl;
cout <<"toplam bitin sayisi = "<<b.size()<<endl;
cout <<"resetset bitin sayisi = "<<b.size() - b.count()<<endl<<endl<<endl;

cout<<"karsiti \n"<<endl;
b.flip();
cout<<"b = "<<b<<endl<<endl;
b=b<<1;
cout<<"b sola kaydir\n"<<b<<endl;
b=b<<2;
cout<<"b sola 2 kaydir\n"<<b<<endl;

cout<<"set the third bit \n";
b=b.set(3);
cout<<"b : "<<b<<endl<<endl;
b=b.set(0);
cout<<"1. set"<<b<<endl;
b=b.reset();
cout<<"b komple reset"<<b<<endl;
// komple bir yapma bilinmiyor
b=b.flip();
cout<<"b = "<<b<<endl;









}


