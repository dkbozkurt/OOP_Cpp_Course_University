#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void printList(list<int> &);

main()
{
	const int SIZE=4;
	int array[SIZE]={2,6,4,8};
	
	list<int>values;
	list<int>otherValues;
	
	//insert items in values
	values.push_front(1);
	values.push_front(2);
	values.push_back(4);
	values.push_back(3);
	
	values.sort();
	cout << "\nValues after sorting contains: ";
	printList(values);
	
	//insert elements of array into otherValues
	otherValues.insert(otherValues.begin(),array,array+SIZE);
	cout << "\nAfter insert, otherValues contains:";
	printList(otherValues);
	
	//remove otherValues elements and insert at end of values
	values.splice(values.end(),otherValues);
	cout << "\nAfter splice, values contains:";
	printList(values);
	cout << "\nAfter splice, otherValues contains:";
	printList(otherValues);
	
	//remove otherValues elements and insert into values in sorted order
	values.merge(otherValues);
	cout << "\nAfter merge values contains: ";
	printList(values);
	cout << "\nAfter merge otherValeus contains:";
	printList(otherValues);
	
	
	values.pop_front();
	values.pop_back();
	cout << "\nAfter pop_front and pop_back values contains: ";
	printList(values);
	
	values.unique();		//remove duplicate elements
	cout << "\nAfter unique, values contains:";
	printList(values);
	
	//swap elements of values and otherValues
	values.swap(otherValues);
	cout << "\nAfter swap,values contains:" ;
	printList(values);
	cout << "\nAfter swap, otherValues contains:";
	printList(otherValues);
	
	//replace contents of values with elements of otherValues
	values.assign(otherValues.begin(),otherValues.end());
	cout << "\nAfter assign, values contains:";
	printList(values);
	cout << "\nAfter assign, otherValues contains:";
	printList(otherValues);
	
	//remove otherValues elements and insert into values in sorted order
	values.merge(otherValues);
	cout << "\nAfter merge, values contains:";
	printList(values);
	cout << "\nAfter merge, otherValues contains:";
	printList(otherValues);
	
	values.remove(4);	//remove all 4's
	cout << "\nAfter remove(4), values contains:";
	printList(values);
	
}

void printList(list<int> &a)
{
	for(list<int>::iterator it=a.begin();it!=a.end();it++)
		cout << *it << " ";
	cout << endl;
}


