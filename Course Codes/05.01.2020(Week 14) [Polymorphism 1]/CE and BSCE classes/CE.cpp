//Dogukan Kaan Bozkurt

#include "CE.h"
#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;

/// Constructor
CE::CE(const string &first,const string &last,const string &ssn,double sales,double rate)
	:firstName(first),
	 lastName(last),
	 socialSecurityNumber(ssn)
{
	setGrossSales(sales);			
	setCommissionRate(rate);
}

void CE::setFirstName(const string & sf){
    firstName = sf;
}

void CE::setLastName(const string & sl){
    lastName = sl;
}

void CE::setSocialSecurityNumber(const string & sss){
    socialSecurityNumber = sss;
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

string CE::getFirstName()const{
    return firstName;
}

string CE::getLastName() const{
    return lastName;
}

string CE::getSocialSecurityNumber() const{
    return socialSecurityNumber;
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
	cout << "commission employee: " << getFirstName() << " " << getLastName()
		 << "\nsocial security number: " << getSocialSecurityNumber()
		 << "\ngross sales: " << getGrossSales()
		 << "\ncommission rate: " << getCommissionRate(); 
}
