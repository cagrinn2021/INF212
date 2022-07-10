#include <iostream>

using namespace std;

class rectangle {
	
	public:
		double kisakenar,uzunkenar;
		
		void set(double kisa_kenar,double uzun_kenar){
			kisakenar=kisa_kenar;
			uzunkenar=uzun_kenar;
		}
		
		double area(double kisakenar,double uzunkenar) {
			double alan=kisakenar*uzunkenar;
			
			cout<<"alan = "<<alan<<endl;
			
		}
			double perimeter(double kisakenar,double uzunkenar) {
			double cevre=2*(kisakenar+uzunkenar);
			
			cout<<"cevre = "<<cevre<<endl;
			
		}
		
	
};

int main () {
	
   double area,parimeter;
   double l=3.5,w=2.4;
   
   cout<<"l=3.5 ve w =2.4 iken dikdortgenin alan ve cevre hesaplamasi"<<endl;
   rectangle hesap;
   hesap.set(l,w);
   hesap.area(l,w);
   hesap.perimeter(l,w);
}


   

