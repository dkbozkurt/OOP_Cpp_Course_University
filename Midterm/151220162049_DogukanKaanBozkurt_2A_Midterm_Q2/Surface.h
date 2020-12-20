#ifndef SURFACE_H
#define SURFACE_H
#include "Normal.h"
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <stdexcept>
using namespace std;
class Surface
{
public:
	Surface(const Normal &,const Normal &,const Normal &,int direction=0,double avgX=0.0,double avgY=0.0,double avgZ=0.0);
	void print(void) const;
	void calculateAvgNormals(void);
	bool compare(const Surface &);
	
private:
	Normal const n1;
	Normal const n2;
	Normal const n3;
	double avgX,avgY,avgZ;
	int direction;
	///
	double getAvgX(void) const;
	double getAvgY(void) const;
	double getAvgZ(void) const;
	int getDirection() const;
	void determineDominantDirection(void);
	
};

#endif
