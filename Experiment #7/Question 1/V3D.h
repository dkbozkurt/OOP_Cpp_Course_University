//Dogukan Kaan Bozkurt

#ifndef V3D_H
#define V3D_H
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <string>
using namespace std;

class V3D
{
	friend void angle(const V3D &v1, const V3D &v2);
public:
	V3D(const string na, double x1=0.0, double y1=0.0, double z1=0.0);
	~V3D();
	
	void setX(double);
	void setY(double);
	void setZ(double);
	
	double getX(void)const;
	double getY(void)const;
	double getZ(void)const;
	
	string getName(void) const;
	static int getCount(void);	//count static int oldugu inic static yaptik bunuda.
	//Static yazmanin nedeni tum classlarin bunu kullanabilmesi ve degistirebilmesi icin. sadece objeye özgü degil.
	void print(void) const;
	///
	V3D &algebra (const V3D &b);
	
	V3D crossProduct(const V3D &b);
	
private:
	double x;
	double y;
	double z;
	const string name;
	static int count;	
};

#endif
