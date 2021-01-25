//Dogukan Kaan Bozkurt

#include "CE.h"
#include <iostream>
#include <stdexcept>
#include <iomanip>
using namespace std;
CE::CE(const string &first,const string &last,const string &ssn,double sales,double rate)
	:Employee(first,last,ssn)
{
	setGrossSales(sales);			
	setCommissionRate(rate);
}

void CE::setGrossSales(double sales)
{
	if(sales>=0.0)
		grossSales=sales;
	else
		throw invalid_argument("Gross sales must be >=0.0");
}

void CE::setCommissionRate(double rate)
{
	if(rate>0.0 && rate<1.0)
		commissionRate=rate;
	else
		throw invalid_argument("Commission rate must be >0.0 and <1.0");	
}

double CE::getGrossSales() const
{
    return grossSales;
}

double CE::getCommissionRate() const
{
    return commissionRate;
}

double CE::earnings() const
{
	return (getCommissionRate() * getGrossSales());
}

void CE::print() const
{
	cout << "commission employee: ";
	Employee::print();
	cout << "\ngross sales: " << getGrossSales()
		 << "\ncommission rate: " << getCommissionRate(); 
}
