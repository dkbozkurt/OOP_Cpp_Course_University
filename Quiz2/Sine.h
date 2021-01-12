#ifndef SINE_H
#define SINE_H
#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <stdexcept>
using namespace std;

class Sine
{
	friend Sine operator+(const Sine& a1,const Sine& a2);
	friend Sine operator-(const Sine& s1,const Sine& s2);
	friend Sine operator*(const Sine& m1,const Sine& m2);
	
	friend Sine& operator--(Sine& dd);		//--a;
	friend Sine operator--(Sine& dd,int);		//a--;
	
	friend ostream& operator<<(ostream &,const Sine &);
	friend istream& operator>>(istream &,Sine &);
	
	
public:
	Sine(double angle=0.0,double value=0.0);
	bool operator==(const Sine& e);
	bool operator!=(const Sine& ne);
	bool operator<(const Sine& l);
	bool operator>(const Sine& g);
	
private:
	double angle;
	double value;
};

#endif
