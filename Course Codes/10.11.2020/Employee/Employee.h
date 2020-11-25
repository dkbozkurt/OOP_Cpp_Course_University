//Doðukan Kaan Bozkurt

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

using namespace std;
class Employee
{
public:
	Employee(const string &first, const string &last);
	~Employee();
	string getFirstName() const;
	string getLastName() const;
	static int getCount();	//.cpp de global de tanýmladýk
	
private:
	string firstName;
	string lastName;
	static int count;	//.cpp de global de tanýmladýk
};

#endif
