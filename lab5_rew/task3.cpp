#include <iostream>
#include <cmath>
using namespace std;



inline double infonksiyon(double yaricap){
	return yaricap*yaricap*3.14;
}
int main(){
	double yaricap;
	cout<<"dairenin yari capini giriniz"<<endl;
	cin>>yaricap;
	cout<<infonksiyon(yaricap);
}
