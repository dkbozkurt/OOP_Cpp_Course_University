//Dogukan Kaan Bozkurt

#ifndef SE_H
#define SE_H
#include <iostream>
#include "Employee.h"
using namespace std;

class SE : public Employee
{
public:
	SE(const string &,const string &,const string &,double =0.0);
	void setWeeklySalary(double);
	double getWeeklySalary() const;
	
	virtual double earnings() const;
	virtual void print() const;
	
private:
	double weeklySalary;
};

#endif
