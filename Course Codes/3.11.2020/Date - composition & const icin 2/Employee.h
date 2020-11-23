//Dogukan Kaan Bozkurt

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include<iostream>
#include"Date.h"
using namespace std;

class Employee
{
public:
	Employee(const string &first,const string &last,const Date &dateOfBirth,const Date &dateOfHire);
	~Employee();
	
	void print(void) const;	
private:
	string firstName;
	string lastName;
	const Date birthDate;	//composition: member object
	const Date hireDate;	//composition: member object
	
};

#endif
