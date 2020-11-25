//Doðukan Kaan Bozkurt
#include "Employee.h"
#include <iostream>


using namespace std;

//define and initialize static data member at global namespace scope
int Employee::count=0;

// define static member function that return number of Employee objects
// instantiated (declared staticinEmployee.h)

int Employee::getCount()
{
	return count;
}

Employee::Employee(const string &first, const string &last)
	:	firstName(first),
		lastName(last)
{
	++count;
	cout<< "Employee contructor for " << firstName 
		<< " " << lastName << " called." << endl;
}

Employee::~Employee()
{
	cout << "~Employee() called for " << firstName
		<< " " << lastName << endl;
	
	--count;
}

string Employee::getFirstName() const
{
	return firstName;
}

string Employee::getLastName() const
{
	return lastName;
}
