//Dogukan Kaan Bozkurt

#include <iostream>
#include <iomanip>
#include <iomanip>
#include <vector>
#include <string>
#include "Employee.h"
#include "SE.h"
#include "CE.h"
#include "BSCE.h"
using namespace std;

void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);

int main(int argc, char** argv) {
	cout << fixed << setprecision(2);
	
	SE se("Dogukan Kaan","Bozkurt","151220162049",800);
	CE ce("Batuhan","Kenduz","151220162050",10000,.06);
	BSCE bsce("Umut Berkin","Metin","151220162018",5000,.04,300);
	
	cout << "Employees processed individually using static linkage:";
	
	se.print();
	cout << "\nearned $" << se.earnings() << "\n\n";
	ce.print();
	cout << "\nearned $" << ce.earnings() << "\n\n";
	bsce.print();
	cout << "\nearned $" << bsce.earnings() << "\n\n";
	
	vector < Employee *> employees( 3 );

	employees[0]= &se;
	employees[1]= &ce;
	employees[2]= &bsce;
	
	cout << "Employees processed polymorphically via dynamic linkage:";
	
	for(int i=0;i<employees.size();i++)
		virtualViaPointer(employees[i]);
		
	cout << "Virtual func. calls made off base-class references:";
	
	for(int i=0;i<employees.size();i++)
		virtualViaReference(*employees[i]);	//note dereferencing	->	//pointerin pointeri adresi belirtir.
			
	return 0;
}

void virtualViaPointer(const Employee *const baseClassPtr){
	baseClassPtr->print();	//baseclass burada adress
	cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference(const Employee &baseClassRef){
	baseClassRef.print();
	cout << "\nearned $" << baseClassRef.earnings() << "\n\n";	
}
