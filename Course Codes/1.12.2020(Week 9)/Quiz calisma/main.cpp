//Dogukan Kaan Bozkurt

#include "quiz2calisma.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(int argc, char** argv) {
	srand(time(NULL));
	quiz2calisma array1;
	
	
	cout <<"Array1 = [ " <<array1<<" ]" << endl;
	cin >> array1;
	cout <<"Array1 = [ " <<array1<<" ]" << endl;
	
	cout <<"*Array1 = [ " <<*array1 <<" ]" << endl;
	cout <<"**Array1 = [ " <<*array1 <<" ]" << endl;
	cout <<"Array1* = [ " <<array1++<<" ]" << endl;


	quiz2calisma array2(8);
	
	cout <<"Array2 = [ " <<array2<<" ]" << endl;
	cin >> array2;
	cout <<"Array2 = [ " <<array2<<" ]" << endl;
	
	quiz2calisma array3(array2);	//copying the array.
	
	if (array3==array2)
		cout << "Array3 and Array2 are the same arrays." << endl;
		else
		cout << "Array3 and Array2 are not the same arrays." << endl;
		
	cout <<"Array3 = [ " <<array3<<" ]" << endl;
	
	cout <<"Array3* = [ " <<*array3<<" ]" << endl;
	
	if (array3==array2)
		cout << "Array3 and Array2 are the same arrays." << endl;
	else
		cout << "Array3 and Array2 are not the same arrays." << endl;
	
	return 0;
}
