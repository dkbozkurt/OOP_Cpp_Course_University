//Dogukan Kaan Bozkurt

#ifndef CE_H
#define CE_H
#include <iostream>
#include "Employee.h"
using namespace std;

class CE : public Employee
{
public:
	CE(const string &,const string &,const string &,double =0.0,double =0.0);
	void setGrossSales(double);
	void setCommissionRate(double);
	double getGrossSales(void) const;
	double getCommissionRate(void) const;
	
	virtual double earnings() const;
	virtual void print() const;
	
private:
	
	double grossSales;
	double commissionRate;
};

#endif
