#include <iostream>
using namespace std;
int kup1,kup2;


int kup1hesap(int kup1){
	kup1=kup1*kup1*kup1;
	cout<<"kup1 sonucu = "<<kup1<<endl;	
}
int kup2hesap(int &kup2){
	kup2=kup2*kup2*kup2;
	cout<<"kup2 sonucu = "<<kup2<<endl;
}
int main() {
	cout<<"kupunu hesaplamak istediginiz sayinin degerini girin";
	
	cin>>kup1;
	kup1hesap(kup1);
	cout<<"xxxxxxxxxx="<<kup1<<endl;
	
	cin>>kup2;
	kup2hesap(kup2);
	cout<<"xxxxxxxxxx="<<kup2<<endl;
	
}
