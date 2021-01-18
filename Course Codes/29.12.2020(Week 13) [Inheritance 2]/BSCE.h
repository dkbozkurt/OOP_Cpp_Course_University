//Dogukan Kaan Bozkurt

#ifndef BSCE_H
#define BSCE_H
#include<iostream>
#include<string>
#include "CE.h"				// Important
using namespace std;

class BSCE : public CE		//Important
{
public:
	BSCE(const string &,const string &,const string &,double=0.0,double=0.0,double=0.0);
	
	void setBaseSalary(double);
	double getBaseSalary() const;
	double earnings() const;
	void print() const;
	
private:
	
	double baseSalary;
};

#endif
