#include <iostream>

using namespace std;

class Date {
	
	public:
		int day;
		int month;
		int year;
		
		Date() {
			cout<<"standart ayarlar\n";
			day=0;
			month=0;
			year=0;
		}
		Date(int d,int m,int y) {
			
			day=d;
			month=m;
			year=y;
		}
		
		void set(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}

		int get_day() {
			return day;
		}
		int get_month(){
			return month;
	                		}
	                		int get_year(){
	                			return year;
							}
							void printdate(){
								cout<<"date "<<day<<"."<<month<<"."<<year<<endl;
							}
	
};

int main () {
	
	Date any;
	
	any.printdate();
	any.set(1,2,2019);
	cout<<""<<any.get_day();
	cout<<"."<<any.get_month();
	cout<<"."<<any.get_year()<<endl;
	
	
	Date today(3,4,2018);
	today.printdate();
	Date yesterday(2,4,2018);
	yesterday.printdate();

	
}
