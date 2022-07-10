#include <iostream>
using namespace std;
class Data{
	private: 
	int num;
	char ch;
	public:
		Data &setnum(int num){
			this->num=num;
			return *this;
		}
		Data &setch(char ch){
			this->num++;
			this->ch=ch;
			return *this;
		}
		void display(){
			cout<<num<<endl;
			cout<<ch;
		}
};
int main() {
	Data obj;
	obj.setnum(100);
	obj.setch('a');
	obj.display();
}


