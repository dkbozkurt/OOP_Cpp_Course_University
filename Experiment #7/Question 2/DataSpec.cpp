//Dogukan Kaan Bozkurt

#include <iostream>
#include <string.h>
#include <cmath>
#include "DataSpec.h"
using namespace std;

DataSpec::DataSpec(string n,double x,double y,double z)
{
	setName(n);
	setFX(x);
	setFX(y);
	setFX(z);
	cout << "DataSpec constructor :" << getName() << endl;
	
}

void DataSpec::setFX(double x1){
	featureX=x1;
}
void DataSpec::setFY(double y1){
	featureY=y1;
}
void DataSpec::setFZ(double z1){
	featureZ=z1;
}
void DataSpec::setName(string n1){
	dataName=n1;
}
double DataSpec::getFX(void) const{
	return featureX;
}
double DataSpec::getFY(void) const{
	return featureY;
}
double DataSpec::getFZ(void) const{
	return featureZ;
}
string DataSpec::getName(void) const{
	return dataName;
}
void DataSpec::print(void) const{
	cout << getName() << "(" << getFX() << "," << getFY() << "," 
		 << getFZ() << ")" << endl; 
}
