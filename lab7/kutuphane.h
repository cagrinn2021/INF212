#ifndef kutuphane
#define kutuphane
using namespace std;
 class Point3D {
 		public:
		Point3D();
		Point3D(double x, double y,double z); 
		Point3D(const Point3D &other);
		Point3D& operator=(const Point3D &other);
		void Print();
		double mx;
		double my;
		double mz;
};
	
#endif
