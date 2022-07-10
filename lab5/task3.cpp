#include <iostream>
using namespace std;
class Student {
	

	char *name;
	
	int id;
	double gpa;
	public:
		Student () {
			
			cout<<"standart ayarlar yapildi"<<endl;
			name="cagri";
			id=2283;
			gpa=4.0;
		}
		Student(char *str, int i, double d) {
			
			name=str;
			id=i;
			gpa=d;
		}
		void set(char *str,int i,double d) {
			name=str;
			id=i;
			gpa=d;
		}
		char get_name(){
			return *name;
		}
		int get_id() {
			return id;
		}
		double get_gpa() {
			return gpa;
		}
		void print(){
			cout<<"\nogrencimizin ismi = "<<name<<"\nnumarasi = "<<id<<"\nortalamasi = "<<gpa<<endl;
		}
};

int main() {
	Student s1;
	s1.print();
	s1.set("mehmet",180,4.5);
	s1.get_name();
    s1.get_id();
    s1.get_gpa();
	/*
	cout<<"isim"<<s1.get_name()<<endl;
	cout<<"id"<<s1.get_id()<<endl;
	cout<<"ortalamasi"<<s1.get_gpa();
	*/
	s1.print();
	
	Student s2("Voldemort",1,5);
	s2.print();
	
	
	
	
	
	
}













