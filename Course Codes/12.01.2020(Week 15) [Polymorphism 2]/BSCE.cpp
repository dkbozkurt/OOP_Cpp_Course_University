//Dogukan Kaan Bozkurt

#include "BSCE.h"
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

BSCE::BSCE(const string &first,const string &last,const string &ssn,double sales,double rate,double salary)
//explicity call base-class constructor
	:CE(first,last,ssn,sales,rate)
{
	setBaseSalary(salary);
}
void BSCE::setBaseSalary(double salary)
{
	if(salary>0.0)
		baseSalary=salary;
	else
		throw invalid_argument("Salary must be >=0.0");
}

double BSCE::getBaseSalary() const
{
	return baseSalary;
}

double BSCE::earnings() const 
{
	return getBaseSalary()+CE::earnings();
}

void BSCE::print() const
{
	cout << "\n\nbase-salaried ";
	//invoke CE's print function
	CE::print();		
	cout << "\nbase salary: " << getBaseSalary();
}
