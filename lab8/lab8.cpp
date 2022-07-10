#include <iostream>
using namespace std;

class Add{
	private:
		double num;
	public:
	Add& sum(int a){
		this->num=this->num+a;
		return *this;
	}
	
	Add& sum(double a){
		this->num=this->num+a;
			return *this;
	}
	
	Add& sum(int a, int b){
		this->num=this->num+a+b;
			return *this;
	}
	
	void print(){
		cout<<this->num<<endl;
	}
		
};


int main(){
	Add obj;
	obj.sum(10).sum(20.5).sum(81,100);
	obj.print();
	
	return 0;
	
}
