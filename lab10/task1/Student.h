#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
#include <string>
class Student {
public:
Student(std::string name); //1-arg const
Student(const Student& x); //copy const
Student& operator=(const Student& x); //assign op
std::string Name();
void Marks(int []);
float Average();
void Print();
void LookAtThis();
private:
int marks[5];
std::string name;
float average;
friend std::ostream & operator<<(std::ostream& out, const Student& st);
};
std::ostream & operator<<(std::ostream& out, const Student& st);


#endif // STUDENT_H_INCLUDED
