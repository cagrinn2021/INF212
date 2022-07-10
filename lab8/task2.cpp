#include <iostream>
using namespace std;
class Data{
	private:
		int num;
		char ch;
		public:
			Data() {
				num=999;
				ch='X';
			}
			void setmyvalues(int num,char ch){
				ch=ch;
				num=num;
			}
			void displaymyvalues(){
				cout<<num<<endl;
				cout<<ch;
			}
};
int main() {
	Data obj;
	obj.setmyvalues(100,'A');
	obj.displaymyvalues();
}
