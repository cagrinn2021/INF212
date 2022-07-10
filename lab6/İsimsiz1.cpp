#include <iostream>
using namespace std;


class Date {
	int day,month,year;
	public:
		
		
		Date() {
			cout<<"degerler sifira tanimlandi ^^ \n"<<endl;
			day=0;
			month=0;
			year=0;
		}
		Date(int d,int m,int y)
		{
			cout<<"gelen degerler tanimlandi gun/ay/yil  \n"<<endl;
			day=d;
			month=m;
			year=y;
		}
		
		Date(const Date& other) {
			cout<<"copy cotr called\n";
			day=other.day;
			month=other.month;
			year=other.year;
		}
		Date& operator=(const Date& other){
			cout<<"assigment operator called\n";
			day=other.day;
			month=other.month;
			year=other.year;
			return *this;
		}
		void printdate() {
	cout<<""<<day<<"."<<month<<"."<<""<<year<<endl;
}
private:
		
};


int main () {
	
	Date anyday;
	anyday.printdate();
	
	Date today(14,4,2020);
	today.printdate();
	
	Date yourday(today);
	yourday.printdate();
	
	anyday=yourday;
	anyday.printdate();
	return 0;
}
