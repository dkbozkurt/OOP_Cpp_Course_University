//Dogukan Kaan Bozkurt

/*
	Derived class inherits all the members of Base class, "except for the constructor;" 
	each class provides its own constructors that are specific to the class (Destructors
	too, are not inherited)
	
*/

#include <iostream>
#include <iomanip>
#include "CE.h"			// include definiton of class CE
#include "BSCE.h"
using namespace std;

int main(int argc, char** argv) {
	
	/*
	CE ce ("Dogukan Kaan","Bozkurt","151220162049",10000,.06);
	
	// set floating-point output formatting
	cout << fixed << setprecision(2);
	
	//get CE data
	cout << "Employee information obtained by get functions: \n"
		 << "\nFirst name is " << ce.getFirstName()
		 << "\nLast name is " << ce.getLastName()
		 << "\nSocial security number is " << ce.getSocialSecurityNumber()
		 << "\nGross sales is " << ce.getGrossSales()
		 << "\nCommission rate is " << ce.getCommissionRate() << endl;
		 
	ce.setGrossSales(8000);
	ce.setCommissionRate(.1);
	
	cout << "\nUpdated employee information output by print function: \n" << endl;
	ce.print();
	
	cout << "\n\nEmployee's earnings: $" << ce.earnings() << endl;
	return 0;
	*/
	
	//Derived class kullanarak yapilan islemler.
	BSCE bsce("Kaan Dogukan","Bozkurt","151220162049",10000,.06,15935);
	
	cout << fixed << setprecision(2);
	bsce.print();
	cout << "\n\nEmployee's earnings: $" << bsce.earnings() << endl;
	
	bsce.setGrossSales(8000);
	bsce.setCommissionRate(0.25);
	cout << "\nUpdated employee information output by print function: \n" << endl;
	bsce.print();
	cout << "\n\nEmployee's earnings: $" << bsce.earnings() << endl;
	
	return 0;	
}
