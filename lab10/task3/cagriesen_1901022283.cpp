#include <iostream>
using namespace std;
class CVec {
				private:
				int x_;
				int y_;
				int z_;
				friend istream& operator>>(istream& is, CVec& cv);

	public:
		CVec(){
			x_=0;
			y_=0;
			z_=0;
			
		}
		CVec(int q,int w,int t){
			x_=q;
			y_=w;
			z_=t;
			
		}
		CVec(const CVec& other){
			x_=other.x_;
			y_=other.y_;
			z_=other.z_;
		}
		CVec& operator=(const CVec& other){
			x_=other.x_;
			y_=other.y_;
			z_=other.z_;
		return *this;
		}
		
			int X(){return x_;
			}
			int Y(){return y_;
		
			}
			int Z(){return z_;
			}

		
			
};
CVec operator*(double w,CVec& u){
	return CVec(u.X()*w, u.Y()*w, u.Z()*w);
}


ostream& operator<<(ostream& os , CVec& z ){
	
os<<z.X()<<" "<<z.Y()<<" "<<z.Z()<<endl;
return os;
}
istream& operator>>(istream& is, CVec& cv) {
	is >> cv.x_>> cv.y_>> cv.z_;
	return is;
}

int main() {
	CVec v1(-1,2,0), v2(4,-2,-2);
	cout<<v1<<endl;
	cout<<v2<<endl;
	CVec v3;
	cout<<v3<<endl;
	v3=2*v1;
	cout<<v3<<endl;
	CVec v4;
	cin>>v4;
	cout<<v4<<endl;
}
