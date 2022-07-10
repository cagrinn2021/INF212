#include <iostream>
using namespace std;
double bolunen,bolen;

void bolum(double x,double y) {
	try{
		if(y==0) throw 1;
		if(x<=0||y<=0) throw 2;
		
		cout<<"bolme isleminin sonucu = "<<x/y<<endl;
		
	}
	catch (int sayi) {
		if(sayi==1){
			cout<<"bolen sifir olamaz"<<endl;
		}
		if(sayi==2){
			cout<<"negatif degerler girmeyiniz"<<endl;
		}
	}
	
}
void al() {
	cout<<"bolmek istediginiz sayiyi girin"<<endl;
	cin>>bolunen;
	cout<<"hangi sayiya bolmek istiyorsunuz"<<endl;
	cin>>bolen;
	bolum(bolunen,bolen);
	
}

int main(){

for(int i=0;i<3;i++) {
	al();
}
}
