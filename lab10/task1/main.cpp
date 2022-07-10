#include <iostream>
#include <string>
#include "Student.h"
using namespace std;
int main()
{
int arr[5] = {78, 80, 85, 70, 65};
Student st1("Fatma");
st1.Print();
st1.Marks(arr);
Student st2("Ali");
st2 = st1;
st2.Print();
st1.LookAtThis(); // for explanation what pointer this keeps
cout << "I am address of class c1 " << &st1 << endl;// it keeps addres of the object
st2.LookAtThis();
cout << "I am address of class c2 " << &st2 << endl;
cout << endl;
//usage of overloaded operators
cout<<"overloaded operator << is used\n" ;
cout<<st1;
return 0;
}
