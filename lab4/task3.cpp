#include <iostream>

using namespace std;

class Date {
	
	public:
		int day,month,year;
		
		void setDate(int date_day,int date_month,int date_year){
			day=date_day;
			month=date_month;
			year=date_year;
		}
		
		void getdate() {
			cout<<"gun "<<day<<endl;
			cout<<"ay  "<<month<<endl;
			cout<<"yil  "<<year<<endl;
			
		}
	
	
};

int main () {
	
	int day,month,year;
	cout<<" gunu girin"<<endl;
	cin>>day;
	cout<<"ayi girin"<<endl;
	cin>>month;
	cout<<"yili girin"<<endl;
	cin>>year;
	
	Date today;
	today.setDate(day,month,year);
	today.getdate();
	
	cout<<"dunun tarihi"<<endl;
	Date yestardey;
	yestardey.setDate(day-1,month,year);
	yestardey.getdate();
	

	
}
