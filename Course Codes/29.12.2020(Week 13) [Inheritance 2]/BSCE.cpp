//Dogukan Kaan Bozkurt

#include "BSCE.h"
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

BSCE::BSCE(const string &first,const string &last,const string &ssn,double sales,double rate,double salary)
//explicity call base-class constructor
	:CE(first,last,ssn,sales,rate)		//Important!!	
										//Buradaki BSCE const. salary disindakiler CE base classinda oldugu icin sadece salary atamasi yaptik.
										// ve her zaman icin base classinin constructoru deriver da cagirilmalidir. !!!
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
	return getBaseSalary()+CE::earnings();		//CE::earnings olmasinin sebebi deriver classtada print adinda bir print classinin olmasi.
												//return baseSalary+(commissionRate*grossSales); gibi de olabilirdi.
}

void BSCE::print() const
{
	cout << "base-salaried ";
	//invoke CE's print function
	CE::print();						//Important bu sekilde ::koyup base class adi yazarak o functionun içerigini aynen bu satira tasimis olduk
										//CE::print olmasinin sebebi deriver classtada print adinda bir print classinin olmasi.
	cout << "\nbase salary: " << getBaseSalary();
}
