#include "Sine.h"
#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <stdexcept>
using namespace std;

Sine::Sine(double a1,double v1)
{
	angle=a1;
	value=v1;
}
bool Sine::operator ==(const Sine& e){	//e=n2,this=n1
	
	if((*this).angle==e.angle && (*this).value==e.value)
		return true;
	else
		return false;
}

bool Sine::operator !=(const Sine& ne){
	
	if((*this).angle!=ne.angle && (*this).value!=ne.value)
		return true;
	else
		return false;
}

bool Sine::operator <(const Sine& l){
	
	if((*this).value < l.value)
		return true;
	else
		return false;	
}
bool Sine::operator >(const Sine& g){
	
	if((*this).value >g.value)
		return true;
	else
		return false;	
}
Sine operator+(const Sine& a1,const Sine& a2){
    Sine temp;
    //a1.angle=(M_PI*a1.angle)/180;
    //a2.angle=(M_PI*a2.angle)/180;
    temp.value=sin(a1.angle)*cos(a2.angle)+cos(a1.angle)*sin(a2.angle);
    temp.angle=a1.angle+a2.angle;
    temp.angle=(M_PI*temp.angle)/180;
    return temp;									

}
Sine operator-(const Sine& s1,const Sine& s2){
	Sine temp;
    
    temp.value=sin(s1.angle)*cos(s2.angle)-cos(s1.angle)*sin(s2.angle);
    temp.angle=s1.angle-s2.angle;
    temp.angle=(M_PI*temp.angle)/180;
    return temp;	 
}
Sine operator*(const Sine& m1,const Sine& m2){
    Sine temp;
    temp.value=(sin(90-(m1.angle-m2.angle))-sin(90-(m1.angle+m2.angle)))/2;
    temp.angle=(M_PI*temp.angle)/180;
    return temp;
}

Sine& operator--(Sine& dd)
{
    dd.angle = dd.angle- 1;
    return dd;
}

Sine operator--(Sine& dd,int dis)
{
	Sine temp(dd.angle,dd.value);
	dd.angle = dd.angle - 1;
	return temp;
}
ostream &operator<<(ostream &output,const Sine &out)
{
	double x=sin(out.angle);
	
	output<<"sin("<<out.angle<<")= "<<x<<endl;
	return output;	
}
istream &operator>>(istream &inp,Sine &in)
{
	cout << "sine value ";
	inp>>in.angle;
	if(in.angle<90 && in.angle>180)
		throw invalid_argument("Invalid argument");
	return inp;
}


