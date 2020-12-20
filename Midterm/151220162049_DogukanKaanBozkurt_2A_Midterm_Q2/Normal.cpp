#include "Normal.h"
#include <iostream>
#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <stdexcept>

using namespace std;

Normal::Normal(string name_,double nX_,double nY_,double nZ_)
{
	setNX(nX_);
	setNY(nY_);
	setNZ(nZ_);
	setName(name_);
	cout << "Normal constructor: " << getName() << end;
	
}

void Normal::setNX(double nX__){
	nX=nX__;
}
void Normal::setNY(double nY__){
	nY=nY__;
}
void Normal::setNZ(double nZ__){
	nZ=nZ__;
}
void Normal::setName(string name__){
	name=name__;
}
double Normal::getNX(void) const{
	return nX;
}
double Normal::getNY(void) const{
	return nY;
}
double Normal::getNZ(void) const{
	return nZ;
}
double Normal::getName(void) const{
	return name;
}
void Normal::print(void) const{
	cout << getName() << "(" << getNX() << "," << getNY() << "," << getNZ() <<")" << endl;
}
