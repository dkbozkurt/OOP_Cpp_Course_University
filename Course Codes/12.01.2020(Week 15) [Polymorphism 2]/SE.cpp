//Dogukan Kaan Bozkurt

/*If we did not implement
earnings,class SE would
be an abstract class, and
any attempt to
instantiate an object of
the class would result in a
compilation error.

Eger base class pure virtual func. bulunduruyor ise, derived classlar da ayni isimli virtual func. olmak zorundadir yoksa comp. error verir.
*/
#include "SE.h"
#include <iostream>
#include <stdexcept>

using namespace std;

SE::SE(const string &first,const string &last,const string &ssn,double salary)
	:Employee(first,last,ssn)
{
	setWeeklySalary(salary);
}

void SE::setWeeklySalary(double salary)
{
	if (salary>=0.0)
		weeklySalary=salary;
	else
		throw invalid_argument("Weekly salary must be >=0.0");
}

double SE::getWeeklySalary() const
{
	return weeklySalary;
}

double SE::earnings() const
{
	return getWeeklySalary();
}

void SE::print() const
{
	cout << "\n\nsalaaried employee: ";
	Employee::print();	//reuse abstract base-class print func.
	cout << "\nweekly salary: " << getWeeklySalary();
}

