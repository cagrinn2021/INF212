#include <iostream>
using namespace std;

class Date {
	public:
		Date(){
			day=1;
			month=1;
			year=2000;
			
		}
		Date(int d,int m,int y){
			day=d;
			month=m;
			year=y;
			}
		Date(const Date& other)
		{
			day=other.day;
			month=other.month;
		}
		Date& operator=(const Date& other){
			day=other.day;
			month=other.month;
			year=other.year;
			return *this; 
		}
		int Day(){
			return day;
		}
		int Month(){
			return month;
		}
		int Year(){
			return year;
		}
		void print(){	
			cout<<"day="<<day<<" month="<<month<<" year="<<year<<endl;
		}
		bool operator !=(Date& d1){
			bool res=false;
			if(day!=d1.day&&month!=d1.month&&year!=d1.year ){
				res=true;
			}
			return res;
		}
		private:
			int day;
			int month;
			int year;	
};
int main(){
	
	Date d1(3,4,2018);
	d1.print();
	Date d2;
	d2.print();
	if(d2!=d1) {
		cout<<"d2!=d1\n";
	}
	else {
		cout<<"d2=d1\n";
	}
	Date d3;
	d3=d2;
	d3.print();
	if(d2!=d3) {
		cout<<"d2!=d3\n";
	}
	else { 
		cout<<"d2=d3\n";
	} 
	return 0;
}
