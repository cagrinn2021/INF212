#include <iostream>

using namespace std;

class Rectangle {
	
	public:
		double kisakenar,uzunkenar;
		
		void set(double kisa_kenar,double uzun_kenar){
			kisakenar=kisa_kenar;
			uzunkenar=uzun_kenar;
		}
		double area() {
			double alan=kisakenar*uzunkenar;
			//cout<<"alan = "<<alan<<endl;
			return alan;
		}
			double perimeter() {
			double cevre=2*(kisakenar+uzunkenar);
		//	cout<<"cevre = "<<cevre<<endl;
			return cevre;
		}
}; 
int main () {
   double areaa,parimeterr;
   double l=3.5,w=2.4;
   cout<<"l=3.5 ve w =2.4 oldugunda dikdortgenin alan ve cevre hesaplamasi boyledir"<<endl;
   Rectangle hesap;
   hesap.set(l,w);
   areaa=hesap.area();
   parimeterr=hesap.perimeter();
   cout<<"areaa = "<<areaa<<endl;
   cout<<"parimeterr = "<<parimeterr<<endl;
}


   

