//Dogukan Kaan Bozkurt

#ifndef CE_H
#define CE_H
#include<iostream>
using namespace std;

//Base class
class CE
{
public:
	/// Constructor
	CE(const string &,const string &, const string &,double=0.0,double =0.0);
	/// Set first name
	void setFirstName(const string &);
	/// Set Last name
	void setLastName(const string &);
	/// Set SNN
	void setSocialSecurityNumber(const string &);
	/// Set gross sales amount
	void setGrossSales(double);
	/// Set commission rate (percentage)
	void setCommissionRate(double);
	/// Return first name
	string getFirstName() const;
	/// Return last name
	string getLastName() const;
	///Return SSN
	string getSocialSecurityNumber() const;
	///Return gross sales amount
	double getGrossSales(void) const;
	///Return commission rate
	double getCommissionRate(void) const;
	///Calculate earnings
	double earnings() const;
	///print CE object
	void print() const;
	
private:
	
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;			// gross weekly sales
	double commissionRate;		// commission percentage
	
};

#endif
