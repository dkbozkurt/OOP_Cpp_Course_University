//Dogukan Kaan Bozkurt

#include "Employee.h"
#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;

Employee::Employee(const string &first,const string &last,const string &ssn)
	:firstName(first),
	 lastName(last),
	 socialSecurityNumber(ssn)
{
}

void Employee::setFirstName(const string & sf){
    firstName = sf;
}

void Employee::setLastName(const string & sl){
    lastName = sl;
}

void Employee::setSocialSecurityNumber(const string & sss){
    socialSecurityNumber = sss;
}

string Employee::getFirstName()const{
    return firstName;
}

string Employee::getLastName() const{
    return lastName;
}

string Employee::getSocialSecurityNumber() const{
    return socialSecurityNumber;
}

void Employee::print() const
{
	cout << "commission employee: " << getFirstName() << " " << getLastName()
		 << "\nsocial security number: " << getSocialSecurityNumber()<< endl;
}
