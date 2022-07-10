#include <iostream>
#include "myException.h"
#include <locale.h>
#include <string>
using namespace std;
int sayi_atama();
double sayi_bolme(int);
int main()
{
setlocale(LC_ALL, "Turkish");
bool flag=false;
do{
try
{
int number=sayi_atama();
float result=sayi_bolme(number);
flag=true;
cout<<"sayý :"<<number<<" bölüm sonucu :"<<result<<endl;
return 0;
}
catch (myException myExceptionObj)
{
cout << "main fonksiyonu: "<< myExceptionObj.what() <<
endl;
cin.clear();
cin.ignore(100, '\n');
}
}while (!flag);
}
int sayi_atama()
{
int ustlimit=100;
int altlimit=9;
int sayi;
string err_message="hata sayi_atama ";
try
{
cout <<ustlimit<<" ile "<<altlimit<<" arasýnda bir sayý girin:";
cin >> sayi;
if (!sayi)
throw myException(0, err_message);
if (sayi >ustlimit)
throw myException(1, err_message);
if (sayi <altlimit)
throw myException(2, err_message);
cout << endl;
return sayi;
}
catch (myException)
{
throw;
}
}
double sayi_bolme(int sayi)
{
int bolen;
bool flag_=false;
do
{
try{
cout << "Bölmek için bir tamsayý girin :";
cin >> bolen;
if (bolen==0)
throw myException(0, "hata sayi_bolme ");
flag_=true;
return double(sayi)/double(bolen);
}
catch (myException myExceptionObj)
{
cout << "sayi_bolme fonksiyonu : "<<
myExceptionObj.what() << endl;
cin.clear();
cin.ignore(100, '\n');
}
}while (!flag_);
}
