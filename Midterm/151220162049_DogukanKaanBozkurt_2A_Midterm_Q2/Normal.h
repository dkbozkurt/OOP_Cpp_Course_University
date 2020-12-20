#ifndef NORMAL_H
#define NORMAL_H
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

class Normal
{
public:
	Normal(string,double nX=0.0,double nY=0.0,double nZ=0.0);
	void setNX(double);
	void setNY(double);
	void setNZ(double);
	void setName(string);
	double getNX(void) const;
	double getNY(void) const;
	double getNZ(void) const;
	double getName(void) const;
	void print(void) const;
	
private:
	double nX,nY,nZ;
	string name;
	
};

#endif
