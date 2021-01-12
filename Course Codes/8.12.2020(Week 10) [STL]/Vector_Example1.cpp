#include <iostream>
#include <vector>
using namespace std;

main()
{
	vector<int>integers;			//create vector of int
	vector<int>::iterator it;		//create iterator for vector
	
	cout << "The initial size of integers is: " << integers.size()
		 << "\nThe initial capacity of integers is: " << integers.capacity();
		 
	//func push back is in every sequence container
	integers.push_back(2);
	integers.push_back(4);
	integers.push_back(3);
	
	cout << "\n\nThe initial size of integers is: " << integers.size()
		 << "\nThe initial capacity of integers is: " << integers.capacity();
	
	cout << "\nOutput vector using iterator notation: ";
	for (it=integers.begin(); it!=integers.end(); it++)
		cout << " " << *it;
	cout<< endl;
	
	cout << "\nOutput vector using iterator notation: ";
	for(vector<int>::reverse_iterator rit=integers.rbegin();rit!=integers.rend();rit++)
		cout << " " << *rit;
	cout<< endl;	
}

