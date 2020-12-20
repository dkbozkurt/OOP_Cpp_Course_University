#include "Surface.h"
#include "Normal.h"
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <stdexcept>
using namespace std;

Surface::Surface(const Normal &x,const Normal &y,const Normal &z,int direction_,double avgX_,double avgY_,double avgZ_)
	:	a(x),
		b(y),
		c(z),
{
	//
}
void Surface::print(void) const
{
	cout << "avgX= "<< getAvgX() << endl;
	cout << "avgY= "<< getAvgY() << endl;
	cout << "avgZ= "<< getAvgZ() << endl;
	
}
void Surface::calculateAvgNormals(void){
	
	double X=a.getNX();
	avgX=;
	avgY=;
	avgZ=;
	
	determineDominantDirection();
}
bool Surface::compare(const Surface &){
	
}

double Surface::getAvgX(void) const{
	return avgX;
}
double Surface::getAvgY(void) const{
	return avgZ;
}
double Surface::getAvgZ(void) const{
	return avgZ;
}
int Surface::getDirection() const{
	return direction;
}
void Surface::determineDominantDirection(void){
	if (avgX>avgY && avgX>avgZ)
		direction=1;
	else if (avgY>avgX && avgY>avgZ)
		direction=2;
	else if (avgZ>avgX && avgZ>avgY)
		direction=3;	
}
