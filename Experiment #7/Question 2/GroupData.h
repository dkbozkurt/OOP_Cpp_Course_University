//Dogukan Kaan Bozkurt
#ifndef GROUPDATA_H
#define GROUPDATA_H
#include <iostream>
#include <string.h>
#include <cmath>
#include "DataSpec.h"
using namespace std;


class GroupData
{
public:
	GroupData(const DataSpec &,const DataSpec &,const DataSpec &,double maxX=0.0,double maxY=0.0,double maxZ=0.0);
	double getMaxX()const;
	double getMaxY()const;
	double getMaxZ()const;
	void print(void) const;
	void calculateMaxFeatures();
	bool compare(const GroupData &);

private:
	
	const DataSpec f1;
	const DataSpec f2;
	const DataSpec f3;
	double maxX;
	double maxY;
	double maxZ;
	
};

#endif
