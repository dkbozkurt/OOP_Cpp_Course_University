//Doðukan Kaan Bozkurt
#include "Employee.h"
#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	
	cout << "Number of employees before instantiation of any objects is "
		<< Employee::getCount()<< endl;
		
	{
	
		Employee e1("Susan","Baker");
		Employee e2("Robert","Jones");
		
		//two objects exist; call static member func getCount again
		// using the class name and the scope resolution opetor
		cout << "Number of employees afterobjects are instantiated is "
			<< Employee::getCount();
			
		cout << "\n\nEmployee1: "
			<<e1.getFirstName() << " " << e1.getLastName()
		<< "\nEmployee 2: "
			<< e2.getFirstName() << " " << e2.getLastName() << "\n\n";
				
	}//Bunun nedeni destructoru burada çaðýrmak.
	cout << "\nNumber of employees after objects are deleted is "
		<< Employee::getCount() << endl;
	
	return 0;
}
