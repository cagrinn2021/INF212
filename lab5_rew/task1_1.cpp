#include <iostream>
using namespace std;
int dizi[9];
int main () {	
	cout<<"10 tane sayi giriniz\n";	
	for(int i=0;i<=9;i++){
		cin>>dizi[i];
	}
	for(int i=0;i<=9;i++){
		cout<<i+1<<".sayi = "<<dizi[i]<<endl;
	}
	
	int enkucuk=dizi[0];
	for(int i=0;i<=9;i++) {
		if(enkucuk>dizi[i]){
			enkucuk=dizi[i];
		}
	}
	cout<<"en kucuk sayi = "<<enkucuk<<endl;
		int enbuyuk=dizi[0];
	for(int i=0;i<=9;i++) {
		if(enbuyuk<dizi[i]){
			enbuyuk=dizi[i];
		}
	}
	cout<<"en buyuk sayi"<<enbuyuk<<endl;
	
	

}
