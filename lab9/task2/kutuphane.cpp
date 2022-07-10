#include <iostream>
#include "kutuphane.h"

car::car(){
	
	brand="honda";
	model="civic";
	year=2018;
	volume=1.6;
	
}
car::car(string sb,string sm,int y,double v){
	brand=sb;
	model=sm;
	year=y;
	volume=v;
}
car::car(const car& other){
	brand=other.brand;
	model=other.model;
	year=other.year;
	volume=other.volume;
}
car& car::operator=(const car& other){
	brand=other.brand;
	model=other.model;
	year=other.year;
	volume=other.volume;
}
string car::Brand(){
	return brand;
}
string car::Model(){
	return model;
}
int car::Year(){
	return year;
}
double car::Volume(){
	return volume;
}
void car::print(){
	cout<<brand<<" "<<model<<" "<<year<<" "<<volume<<endl; 
}

bool car::operator ==(car & c1){
	bool result =false;
	if(brand==c1.brand&&model==c1.model&&year==c1.year&&volume==c1.volume){
		result=true;
	}
	return result;
}
