#include <iostream>
#include "student.h"
	Student::Student(){
			char* name="cagri";
			int i=1901022283;
			double d=3.4;
	}
	Student::Student(char* str,int ii,double dd){
			name=str;
			i=ii;
			d=dd;
	}
	Student::Student(const Student &other){
			name=other.name;
			i=other.i;
			d=other.d;
			
	}
	Student& ::Student operator=(const Student &other){
			name=other.name;
			i=other.i;
			d=other.d;
			return *this;
	}
	void Student::Print(void ) {
     <<cout<<"isim = "<<name<<" id =  "<<i<<" gpa = "d<<endl;
	}
