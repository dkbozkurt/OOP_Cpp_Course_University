//Doðukan Kaan Bozkurt

#include <iostream>
#include "Increment.h"
 using namespace std;
 
/*NOTES:

Use keyword const to specify that an object is not modifiable.
C++ disallows member function calls for const objects unless the
member functions themselves are also declared const.
It means that const objects can only call const member functions.

Const data members and data members that are references must be innitialized using member initializers.

*/
int main(int argc, char** argv) {
	Increment value(10,5);
	cout << "Before Increment: ";
	value.print();
	
	for(int j=1;j<=3;++j){
		value.addIncrement();
		cout << "After Increment "<<j <<": ";
		value.print();
	}
	return 0;
}
