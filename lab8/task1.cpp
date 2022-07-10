#include <iostream>
using namespace std;
class printDate {
	public:
		void print(int i){
			cout<<"int i ="<<i<<endl;
		}
		void print(double i){
			cout<<"double i ="<<i<<endl;
		}
		void print(char *c){
			cout<<"char  ="<<c<<endl;
		}
		void print(double arr[],int n){
			for(int i=0;i<n;i++){
				cout<<i+1<<". eleman = "<<arr[i]<<endl;
			}
		}
};
int main() {
	printDate pd;
	pd.print(2);
	pd.print(3.4);
	pd.print("selam ");
	double arr[]={1.0,2.2,3.4};
	pd.print(arr,3);   
}
