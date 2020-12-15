//Dogukan Kaan Bozkurt

#include <iostream>
#include "Array.h"
#include <stdexcept>

using namespace std;

int main(int argc, char** argv) {
	Array integers1(7);
	Array integers2;
	
	cout << "Size of the Array integers1 is " << integers1.getSize() << "\nArray after initialization : \n" << integers1;
	
	cout << "Size of the Array integers2 is " << integers2.getSize() << "\nArray after initialization : \n" << integers2;
	
	cout << "\nEnter 17 integers: "<<endl;
	cin >> integers1 >> integers2;
	
	cout << "\nAfter input, the Array contain: \n" << "integers1:\n" << integers1 << "integers2:\n" << integers2;
	
	cout << "\nEvaluating integers1 != integers2" << endl;
	
	if(integers1!=integers2)
		cout << "Integers1 and integers2 are not equal" << endl;
		
	Array integers3(integers1);
	
	cout << "\nSize of Array integers3 is " << integers3.getSize() << "\nArray after initialization: \n" << integers3;
	
	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1=integers2;
	
	cout << "integers1:\n" << integers1 << "integers2:\n" << integers2;
	
	cout << "\nEvaluating: integers1 == integers2" << endl;
	
	if(integers1 == integers2)
		cout << "integers1 and integers2 are equal" << endl;
		
	cout << "\nintegers1[5] is " << integers1[5];
	
	cout << "\n\nAssigning 1000 to integers[5]" << endl;
	integers1[5]=1000;
	cout << "integers1:\n" << integers1;
	
	try
	{
		cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
		integers1[15]=1000;
	}
	catch (out_of_range &ex)
	{
		cout << "An exception occured: " << ex.what() << endl;
	}
	return 0;
}
//Eger func. obje döndürüyorsa ve func. const olması isteniyorsa, const func. başına yazılır sonuna degil. 
//Bir objeyi bir fonk. icinde kullanıyorsak kesinlikle parantez icine const yazıp & kullanmaliyiz. Array(const Array &)
//Array ( const Array &) gibi bir consructor gorursek. constr. icine obje cagirilir.
