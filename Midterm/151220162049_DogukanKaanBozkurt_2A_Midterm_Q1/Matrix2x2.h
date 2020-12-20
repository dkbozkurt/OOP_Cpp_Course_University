#ifndef MATRIX2X2_H
#define MATRIX2X2_H
#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <stdexcept>
#include <string>
using namespace std;
class Matrix2x2
{
	friend void subtraction (const Matrix2x2 &m1,const Matrix2x2 &m2);
	
public:
	Matrix2x2(const string,double M00=0.0,double M01=0.0, double M10=0.0,double M11=0.0);
	~Matrix2x2();
	///
	void setFirstColumn(double M00,double M10);
	void setSecondColumn(double M01,double M11);
	string getName(void) const;
	int getCount(void);
	
	void printMat(void);
	///
	Matrix2x2 &sumWith(const Matrix2x2 &m2);
	Matrix2x2 &handamardProduct(const Matrix2x2 &m2);

private:
	double M00,M01,M10,M11;
	const string name;
	static int count;
	
	void printFirstRow(void);
	void printSecondRow(void);
	
};

#endif
