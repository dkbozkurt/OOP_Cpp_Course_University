//Dogukan Kaan Bozkurt

#include <iostream>
#include "Date.h"
#include "Employee.h"
using namespace std;

int main(int argc, char** argv) {
	
	Date birth(7,24,1949);
	Date hire(3,12,1988);
	Employee manager("Bob", "Blue", birth,hire);
	
	cout << endl;
	manager.print();
		
	return 0;
}
