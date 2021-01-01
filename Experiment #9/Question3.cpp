// Dogukan kaan Bozkurt
 
#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

main()
{
	const int SIZE=10;
	int array[SIZE]={2, 8, 3, 6, 1, 5, 4, 9, 0, 7};
	
	stack<int> stackInt;		// declare the stack of ints
	
	cout << "Data:" << endl;
	for(int i=0;i<SIZE;i++)
		cout << array[i] << " ";
	cout << endl;
	
	for(int i=0;i<SIZE;i++)
		stackInt.push(array[i]);
		
	for(int i=0;i<SIZE;i++){
		array[i]=stackInt.top();		//en usttekini atti
		stackInt.pop();					//en usttekini sildi
	}
		
	
	cout << "Reversed Data:" << endl;
	for(int i=0;i<SIZE;i++)
		cout << array[i] << " ";
	cout << endl;	
	
}

