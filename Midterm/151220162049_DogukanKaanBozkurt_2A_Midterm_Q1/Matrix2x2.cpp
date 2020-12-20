#include "Matrix2x2.h"
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
Matrix2x2::count=0;

Matrix2x2::Matrix2x2(const string name_,double M00_ ,double M01_, double M10_ ,double M11_)
	:	name(name_)
{
	
	setFirstColumn(M00_,M10_);
	setSecondColumn(M01_,M11_);
	///
	cout << "Matrix object constructor: "<<name<<endl;
}

Matrix2x2::~Matrix2x2()
{
	cout << "Matrix object deconstructor:" << getName()<<endl;
}

void Matrix2x2::setFirstColumn(double M00__,double M10__)
{
	M00=M00__;
	M10=M10__;
}
void Matrix2x2::setSecondColumn(double M01__,double M11__)
{
	M01=M01__;
	M11=M11__
	
}
string Matrix2x2::getName(void) const{
	return name;
}
int Matrix2x2::getCount(void){
	return static count;
}
void Matrix2x2::printFirstRow(void){
	cout << M00 <<" " << M01 << endl;
}
void Matrix2x2::printSecondRow(void){
	cout << M10 <<" " << M11 << endl;
}
void Matrix2x2::printMat(void){
	cout<< getName() << "=[" << printFirstRow() << endl
		<< "\t" << printSecondRow()<<"]"<<endl;
}

////

Matrix2x2 &Matrix2x2::sumWidth(const Matrix2x2 &m2)
{
	(*this).M00=(*this).M00+m2.M00;
	(*this).M01=(*this).M01+m2.M01;
	(*this).M10=(*this).M10+m2.M10;
	(*this).M11=(*this).M11+m2.M11;
	
	return *this;
}

Matrix2x2 &Matrix2x2::handamardProduct(const Matrix2x2 &m2)
{
	double=hadamard_;
	hadamard_=(*this)*m2;
	return hadamard_;
}

void subtraction(const Matrix2x2 &m1,const Matrix2x2 &m2)
{
	cout<< "[ " << (m1.M00-m2.M00) << (m1.M01-m2.M01) << endl
		<<" " << (m1.M10-m2.M10) << (m1.M11-m2.M11) << endl;
}
