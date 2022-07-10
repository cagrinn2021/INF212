#include "Student.h"
using namespace std ;
//=============================================
Student::Student(string n){
name = n;
average = 0;
for (int I=0; I<5; ++I){
marks[I] =0;
}
}
//===========================================
Student::Student(const Student& x){
name = x.name;
average = x.average;
for (int I=0; I<5; ++I){
marks[I] = x.marks[I];
}
cout << "I am copy ctor";
}
//========================================
Student& Student::operator=(const Student& x){
average = x.average;
name = x.name;
for (int I=0; I<5; ++I){
marks[I] = x.marks[I];
}
return *this;
cout << "I am operator=";
}
//========================================
void Student::Print() {
cout << "name: "<< name <<endl;
cout <<"average: "<< average <<endl;
for (int I=0; I<5; ++I){
cout << marks[I] <<"";
}
cout << endl;
}
//===========================================
std::string Student::Name()
{
return name;
}
//===========================================
void Student::Marks(int sc[])
{
for (int I = 0; I < 5; ++I) {
marks[I] = sc[I];
}
for (int I = 0; I < 5; ++I) {
average += marks[I];
}
average /=5;
}
//===========================================
float Student::Average()
{
return average;
}
//===========================================
void Student::LookAtThis(){
std::cout<<"I am THIS pointer "<< this << std::endl;
}
// overloaded output operator as alternative of Print() function
ostream & operator<<(ostream& out, const Student& st)
{
out << "name: "<< st.name <<endl;
out << "average: "<< st.average();<<endl;
for (int I=0; I<5; ++I){
out << st.marks[I] <<"";
}
out << endl;
return out;
}
