//Dogukan Kaan Bozkurt

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printVector(vector<int> &);
bool greater10(int);

main()
{
	const int SIZE=10;
	int a[SIZE]= {10,2,17,5,16,8,13,11,20,7};
	
	vector <int> v(a,a+SIZE);
	cout << "Vector v contains: ";
	printVector(v);
	
	vector<int>::iterator location;
	location=find(v.begin(),v.end(),16);
	
	if(location != v.end())
		cout << "\nFound 16 at location " << (location-v.begin());
	else
		cout << "\n16 not found";
		
	location= find(v.begin(),v.end(),100);
	
	if(location != v.end())
		cout << "\nFound 100 at location " << (location-v.begin());
	else
		cout << "\n100 not found";	
		
	location = find_if(v.begin(),v.end(),greater10);
	
	if(location != v.end())
		cout << "\nThe first value greater than 10 is " << *location
			 << "\nFound at location " << (location-v.begin());
	else
		cout << "\nNo values greater than 10 were found.";	
		
	sort(v.begin(),v.end());
	cout << "\nVector v after sort: ";
	printVector(v);
	
	if(binary_search(v.begin(),v.end(),13))
		cout << "\n13 was found in v";
	else
		cout << "\n13 was not found in v";
		
	if(binary_search(v.begin(),v.end(),100))
		cout << "\n100 was found in v";
	else
		cout << "\n100 was not found in v";
}

bool greater10(int x){
	return x>10;
}

void printVector(vector<int> &intvect){
	
	for(vector<int>::iterator it=intvect.begin();it<intvect.end();it++){
		cout << *it << " - ";
	}
}
