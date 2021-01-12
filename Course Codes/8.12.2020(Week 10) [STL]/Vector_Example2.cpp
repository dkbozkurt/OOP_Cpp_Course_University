#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &);

main()
{
	const int SIZE=6;
	int array[SIZE]={1,2,3,4,5,6};
	
	vector<int>integers(array,array+SIZE);		//create vector of ints
	
	printVector(integers);
	cout << "The first element of integers is: " << integers.front()
		 << "\nThe last element of integers is: " << integers.back();
		 
	integers[0]=7;		//set first element to 7
	integers.at(2)=10;	//set element at position 2 to 10
	
	// insert 22 as 2nd element
	integers.insert(integers.begin()+1,22);	//ikinci elemana disaridan yeni veri girisi
	
	cout << "\nContents of vector integers after changes: ";
	printVector(integers);
	
	//erase first element
	integers.erase(integers.begin());
	cout << "\nVector after erasing first element: ";
	printVector(integers);
	
	//erase remaining elements
	integers.erase(integers.begin(),integers.end());	//Basindan sonuna kadar silme.
	cout << "\nVector after erasing first element:"
		 << (integers.empty() ? "is " : "isnot ") << "empty";
	printVector(integers);
	
	//insert elements from array
	integers.insert(integers.begin(),array,array + SIZE);	
	cout << "\nContents of vector integers before clear: ";
	printVector(integers);
	
	integers.clear();
	cout << "\nContents of vector integers after clear: "
		 << (integers.empty() ? "is " : "isnot " )<< "empty";
	printVector(integers);
		
}

void printVector(vector<int > &a)
{
	for (int i=0;i<a.size();i++)
		cout << a[i] << " ";
	cout << endl;
}

	


