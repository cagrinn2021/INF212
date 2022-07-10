#ifndef kutup
#define kutup
using namespace std;
class Student {
	public:
		Student(); 
		Student(double re, double im); 
		Student(const Student &other); 
		Student& operator=(const Student &other); 
		void Print();
		private:
		char* name[50];
		int i;
		double d;	
};

#endif
