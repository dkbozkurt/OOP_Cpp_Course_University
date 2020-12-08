//Dogukan Kaan Bozkurt

#include <iostream>
#include <cmath>
#include "Rational.h"
using namespace std;

int main(int argc, char** argv) {
	Rational n1,n2,x;
	
	cout << "Enter rational number in the form num/dem:" << endl;
	cin >> n1 >> n2;
	
	cout <<"n1: "<< n1 << endl <<"n2: "<< n2 << endl <<"default x: "<< x << endl;
	
	x=n1+n2;
	cout << n1 << " + " << n2 << " = " << x << endl;
	
	x=n1-n2;
	cout << n1 << " - " << n2 << " = " << x << endl;

	x=n1*n2;
	cout << n1 << " * " << n2 << " = " << x << endl;
	
	x=n1/n2;
	cout << n1 << " / " << n2 << " = " << x << endl;
///	
	if(n1<n2)
		cout << "n1 is less than n2" << endl;
		
	if(n1>n2)
		cout << "n1 is greater than n2" << endl;		

	if(n1==n2)
		cout << "n1 is equal to n2" << endl;		

	if(n1!=n2)
		cout << "n1 is not equal to n2" << endl;		

	if(n1<=n2)
		cout << "n1 is less than or equal to n2" << endl;		

	if(n1>=n2)
		cout << "n1 is greater than or equal to n2" << endl;
		
	
	cout << "n1 = " << n1 <<endl ;
	cout << "n1++ = " << n1++ << endl;
	cout << "n1 = " << n1 <<endl;
	cout << "++n1 = " << ++n1 << endl;
	cout << "n1 = " << n1 <<endl;	
	
	cout << "n2 = " << n2 <<endl;
	cout << "n2-- = " << n2-- << endl;
	cout << "n2 = " << n2 <<endl;
	cout << "--n2 = " << --n2 << endl;
	cout << "n2 = " << n2 <<endl;
	
	return 0;
}
