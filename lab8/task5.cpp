#include <iostream>
#include <string>
using namespace std;
	
class HeartRates{
	public:
	char *isim;
	char *soyisim;
	int gun,ay,yil;
	int maksatis;
	int kisiyasi;
	
	HeartRates() {
		isim="cagri";
		soyisim="esen";
		gun=29;
		ay=6;
		yil=1996;
	}
	
	HeartRates(int a,int b,int c) {
		
		
		
		
	}
	void setHeartRatesisim(char *str1){
		isim=str1;
	}
	void setHeartRatessoyisim(char *str2){
		soyisim=str2;
	}
	void setHeartRatesgun(int d){
		gun=d;
	}
	void setHeartRatesay(int m){
		ay=m;
	}
	void setHeartRatesyil(int y) {
		yil=y;
	}
	
	string getHeartRatesisim(){
	return isim;
	}
 	string getHeartRatessoyisim(){
	return soyisim;
	}
	int getHeartRatesgun(){
	return	gun;
	}
	int getHeartRatesay(){
	return	ay;
	}
	int getHeartRatesyil() {
	return	yil;
	}
	int yazdir(){
		
		cout<<"\nisim:"<<isim<<"\nsoyisim:"<<soyisim<<"\ngun:"<<gun<<"\nay:"<<ay<<"\nyil:"<<yil;
	}
	int getAge(){
		
		kisiyasi=2021-yil;
		cout<<"kisinin yasi = "<<kisiyasi<<endl;
		cout<<"\n";
		return kisiyasi;
	}
void	getmaxatis() {
		maksatis=220-kisiyasi;
		cout<<"kisinin maks kalp atis hizi ="<<maksatis<<endl;
	}
	void	gethedefatis(){
		double hedefatismin=(maksatis*50)/(100);
		double hedefatismax=(maksatis*85)/(100);
		
		cout<<"kisinin %50 min atisi = "<<hedefatismin<<endl;
		cout<<"kisinin %85 max atisi = "<<hedefatismax<<endl;
	}
	
	
};

int main( ){
	
	HeartRates hasta1;
	hasta1.setHeartRatesisim("ramazn\n");

	hasta1.setHeartRatessoyisim("ozturk\n");
	
	hasta1.setHeartRatesgun(9);

	hasta1.setHeartRatesay(11);
	
	hasta1.setHeartRatesyil(1999);
 hasta1.yazdir();
	cout<<"\nkisinin yasi = "<<hasta1.getAge();
	hasta1.getmaxatis();
	hasta1.gethedefatis();
}
