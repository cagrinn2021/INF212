#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class car {

	public:
		car();
		car(string sb,string sm,int y,double v);
		car(const car& other);
		car& operator=(const car& other);
		string Brand();
		string Model();
		int Year();
		double Volume();
		void print();
		bool operator ==(car & c1);
		private:
		string brand;
		string model;
		int year;
		double volume;	

};

#endif
