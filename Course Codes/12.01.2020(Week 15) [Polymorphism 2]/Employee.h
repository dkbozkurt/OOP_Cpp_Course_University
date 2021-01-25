//Dogukan Kaan Bozkurt

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;
//Employee burada abstrack class.
class Employee
{
public:
	Employee(const string &,const string &,const string &);
	void setFirstName(const string &);
	void setLastName(const string &);
	void setSocialSecurityNumber(const string &);
	string getFirstName() const;
	string getLastName() const;
	string getSocialSecurityNumber() const;
	
	///pure virtual func. makes Employee on abstract base class
	virtual double earnings() const=0;		//pure virtual func. cpp ye yazilmaz.
	///virtual func to print Employee object
	virtual void print() const;
	
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;

};

#endif
