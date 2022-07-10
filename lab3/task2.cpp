#include <iostream>
#include <bitset>
#include <string>
using namespace std;

main ( ) {


cout <<"binnumbers:\n";
bitset<4> x=32;
cout <<"x= " <<x<<endl;

bitset<6> y=32;
cout <<"y= " <<y<<endl;

bitset<8> z=32;
cout <<"z= " <<z<<endl;
cout<<endl;
cout<<"inte cevirme\n"<<endl;

cout<<"x= " <<x.to_ulong()<<endl;
cout<<"y= " <<y.to_ulong()<<endl;
cout<<"z= " <<z.to_ulong()<<endl;

cout<<endl;
cout<<"stringe donusturme\n";
string sx=x.to_string();
string sy=y.to_string();
string sz=z.to_string();

cout<<"x = "<<sx<<endl;
cout<<"y = "<<sy<<endl;
cout<<"z = "<<sz<<endl;
 }
