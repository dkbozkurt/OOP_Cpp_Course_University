//Dogukan Kaan Bozkurt

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>
#include <cmath>
using namespace std;
class Rational
{
	friend ostream& operator<<(ostream &,const Rational&); //objeler her zaman const cagirilmak zorunda
	friend istream& operator>>(istream &,Rational&); // inputlar const cagirilmaz
	
public:
	Rational(double n=0.0,double d=1.0);
	~Rational();
	Rational operator+(const Rational& p);
	Rational operator-(const Rational& s);
	Rational operator*(const Rational& m);
	Rational operator/(const Rational& d);
	
	bool operator ==(const Rational& e);
	bool operator !=(const Rational& ne);
	bool operator <(const Rational& l);
	bool operator >(const Rational& g);
	bool operator <=(const Rational& le);
	bool operator >=(const Rational& ge);
	
	///
	
	Rational& operator++(void);	//unery operators sadece this üzerine islem yapar, void ise & oluyor.
	Rational operator++(int);
	
	Rational& operator--(void);
	Rational operator--(int);
	
private:
	double num;
	double den;
	
};

#endif
