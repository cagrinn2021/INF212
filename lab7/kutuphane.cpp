#include <iostream>
#include "kutuphane.h"

	Point3D::Point3D(){
		mx=0;
		my=0;
		mz=0;
	}
	Point3D::Point3D(double x, double y,double z){
		mx=x;
		my=y;
		mz=z;
	}
	Point3D::Point3D(const Point3D &other){
		mx=other.mx;
		my=other.my;
		mz=other.mz;
		
	}
	Point3D& Point3D::operator=(const Point3D &other){
		mx=other.mx;
		my=other.my;
		mz=other.mz;
		return *this;
	}
	void Point3D::Print( ) {
		cout<<"x= "<<mx<<"y= "<<my<<cout<<"z= "<<mz<<endl;
	
	}
	
