//Dogukan Kaan Bozkurt

#include "Employee.h"
#include "Date.h"

///Constructor uses member initializer list to pass initializer values to constructors of member objects.
Employee::Employee(const string &first,const string &last,const Date &dateOfBirth,const Date &dateOfHire)
	:	firstName(first),
		lastName(last),
		birthDate(dateOfBirth),
		hireDate(dateOfHire)
{
	
	cout<< "Employee object constructor: "
		<< firstName << " " << lastName << endl;
}

Employee::~Employee()
{
	cout << "Employee object destructor: "
		<<firstName<< " " << lastName << endl;
}

void Employee::print(void) const
{
	cout << lastName << ", " << firstName << " Hired: ";
	hireDate.print();
	
	cout << " BirthDay ";
	birthDate.print();
	cout << endl;
}
