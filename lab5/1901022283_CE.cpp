#include <iostream>
using namespace std;
class kordinat{
	public:
		double xkord;
		double ykord;	
	kordinat(){
			cout<<"standart konumlar atama yapilcak\n";
			xkord=3.3;
			ykord=4.4;
			cout<<"standart ayarlar yapildi\n";
		}
		kordinat(double x,double y){
			cout<<"degerler atandi\n";
			xkord=x;
			ykord=y;
		}
	void set(double x,double y){
	xkord=x;
	ykord=y;	
	}
	double get_x(){
		return xkord;
	}
	double get_y(){
		return ykord;
	}	
	void print(){
			cout<<"X = "<<xkord<<"\nY = "<<ykord<<endl;
		}
};
int main(){
	kordinat ilk;
	ilk.print();
	cout<<"set fonksiyonuna 10 ve 20 gönderildi"<<endl;
	ilk.set(3,5);
	ilk.print();
	kordinat ikinci(99,11);
	ikinci.print();	
}
