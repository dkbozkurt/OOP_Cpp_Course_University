//Dogukan Kaan Bozkurt

#include "V3D.h"
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <string>
using namespace std;

int V3D::count=0;	//Basina int yazmak onemli

V3D::V3D(string na, double x1, double y1, double z1)
	:	name(na)
{
	setX(x1);
	setY(y1);
	setZ(z1);
	count++;
	cout << "V3D object constructor: " << name << endl;
	
}
V3D::~V3D()
{
	count--;
	cout << "V3D object destructor:" << name << endl;
}
void V3D::setX(double x1){
	x=x1;
}
void V3D::setY(double y1){
	y=y1;
}
void V3D::setZ(double z1){
	z=z1;
}
double V3D::getX(void) const {	
	return x;
}
double V3D::getY(void)const{
	return y;
}
double V3D::getZ(void)const {
	return z;	
}
string V3D::getName(void) const{
	return name;
}
int V3D::getCount(void) {
	return count;
}
void V3D::print(void) const {
	cout<< getName() << "(" << getX() << "," 
		<< getY() << "," << getZ() << ") " << endl;
}
V3D &V3D::algebra(const V3D &b){	//V3 in adresi direkt olarak this oluyor.
	this->x=this->x-(4*b.x);	//this->x=this->x-4*b.x;	get ve setlerlede yapilabilir.
	this->y=this->y-(4*b.y);
	this->z=this->z-(4*b.z);
	
	return (*this);
}
V3D V3D::crossProduct(const V3D &v1){ 
	V3D dump("dump"); 	//& isareti olmadigindan obje uretip onun uzerinden islem yaptik
	dump.x=this->y*v1.z-this->z*v1.y;	
	dump.y=this->z*v1.x-this->x*v1.z;
	dump.z=this->x*v1.y-this->y*v1.x;

	return dump;	//this degil dump dondurduk
}
void angle(const V3D &v1,const V3D &v2){
	double angle=0.0;
	double dotproduct=0.0;
	double magV1=0.0,magV2=0.0;
	
	dotproduct=(v1.x*v2.x)+(v1.y*v2.y)+(v1.z*v2.z);
	magV1=sqrt(pow(v1.x,2)+pow(v1.y,2)+pow(v1.z,2));
	magV2=sqrt(pow(v2.x,2)+pow(v2.y,2)+pow(v2.z,2));
	
	cout << "Dot product : " << dotproduct << endl
		 << "Magnitude of V1 : " << magV1 << endl
		 << "Magnitude of V2 : " << magV2 << endl;
		 
	cout << "The angle between" << endl;
	v1.print();
	v2.print();
	cout << endl;
	cout << "vectors " << acos(dotproduct/(magV1*magV2))*180/M_PI << endl;
}

