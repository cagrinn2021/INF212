#include <iostream>

using namespace std;
int i;
int sayi;
int sonuc=1;

int main() {
	
	cout<<"hesaplamak istediginiz sayiyi girin = ";
	cin>>sayi;
	for(i=2;i<=sayi;i++){
		sonuc*=i;
	
	}
	cout<<"sonuc ="<<sonuc<<endl;
}
