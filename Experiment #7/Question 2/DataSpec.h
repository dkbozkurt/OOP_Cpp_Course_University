//Dogukan Kaan Bozkurt

#ifndef DATASPEC_H
#define DATASPEC_H
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

class DataSpec
{
public:
	DataSpec(string n,double x=0.0,double y=0.0,double z=0.0);
	void setFX(double);
	void setFY(double);
	void setFZ(double);
	void setName(string);
	double getFX(void) const;
	double getFY(void) const;
	double getFZ(void) const;
	string getName(void) const;
	void print(void) const;
	
private:
	double featureX;
	double featureY;
	double featureZ;
	string dataName;
};

#endif
