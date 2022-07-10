#include <iostream>
 using namespace std; 
 class Test { 
 private: 
 int num; 
 float *ptr;
  public: 
  Test() { 
  cout << "Enter total number of students: ";
   cin >> num; 
   ptr = new float[num]; 
   cout << "Enter GPA of students." << endl; 
   for (int i = 0; i < num; ++i) { 
   cout << "Student" << i + 1 << ": "; cin >> ptr[i]; } } 
   Test(const Test& t) { // copy constructor 
   num = t.num; 
   ptr = new float[num]; 
   for (int i = 0; i < num; ++i) { 
   ptr[i]=t.ptr[i]; } } // assigment operator 
   Test operator=(const Test& t) {
    num = t.num; 
	delete [] ptr; 
	ptr = new float[num]; 
	for (int i = 0; i < num; ++i) { 
	ptr[i]=t.ptr[i]; } return *this; }
  ~Test() { delete[] ptr; }
  void Display() { 
  cout << "\nDisplaying GPA of students." << endl;
   for (int i = 0; i < num; ++i) { 
   cout << "Student" << i+1 << " :" << *(ptr + i) << endl; 
   } 
   }
   };
int main() {
Test s; 
s.Display();
 Test t;
 t=s; 
 t.Display(); // how programm works correct 
 s.Display(); 
 return 0;
   }
  
