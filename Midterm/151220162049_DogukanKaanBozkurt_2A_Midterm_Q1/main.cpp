//Dogukan Kaan Bozkurt
//151220162049

#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <stdexcept>
#include "Matrix2x2.h"
using namespace std;


int main(int argc, char** argv) {
	
	cout << "Nubmer of matrices before instantiation of any objects is " << Matrix2x2::getCount() << endl;
	{
		Matrix2x2 m1("m1",3,4,5,6);
		m1.printMat();
		
		const Matrix2x2 m2("m2",1,2,2,1);
		m2.printMat();
		
		Matrix2x2 m3("m3",2,2,6,6);
		
		cout << "Number of matrices after objects are instantiated is " << Matrix2x2::getCount << endl;
		
		m1.sumWith(m2).printMat();
		m3.handamardProduct(m1).printMat();
		
	}
	
	cout << "\nNumber of matrices after objects are deleted is "<< Matrix2x2::getCount() << endl;
	
	const Matrix2x2 A("A",3,5,7,11);
	const Matrix2x2 B("B",6,8,12,20);
	
	cout << "Number of matrices after objects are instantiated is "<< Matrix2x2::getCount() << endl;
	
	subtraction(A,B);
	return 0;
}
