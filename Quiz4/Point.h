//Dogukan Kaan Bozkurt
//151220162049
#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <stdexcept>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include <algorithm>
#include <set>
#include <fstream>
#include <string>
using namespace std;

class Point
{
	friend ostream&operator<<(ostream &,const Point &);
	friend istream&operator>>(istream &,Point &); 
	
public:
	Point(int s_=0.0);
	~Point();
	
	double getPX(int);
	double getPY(int);
	double getPZ(int);
	///
	void setclosest_point(int cp);
	int getclosest_point(void);
	void setclosest_point2(int cp);
	int getclosest_point2(void);
	///
	void setNX(double x_);
	void setNY(double y_);
	void setNZ(double z_);
	double getNX(void);
	double getNY(void);
	double getNZ(void);
	///

	void generateRandCoords(void);
	double randgen(char *);
	void printPoints(void);
	void calculateNormal(void);
	void NeighborPoint(void);
	double ppDistance(int,int);
	void printPN(void);
	double calculateAngle(int,double,double,double);
	
private:
	int SIZE;
	vector<double> px,py,pz;
	vector<double> nx(50,0),ny(50,0),nz(50,0);
	vector<double> ax(50,0),ay(50,0),az(50,0);
	int closest_point,closest_point2;

};

#endif
