//Dogukan Kaan Bozkurt

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector<int> &,vector< int >::iterator);

main()
{
	const int SIZE = 5;
	int a1[ SIZE ]= { 1, 3, 5, 7, 9};
	int a2[ SIZE ]= { 2, 4, 5, 7, 9};
	
	vector< int >v1( a1, a1 + SIZE );// copy of a1
	vector< int >v2( a2, a2 + SIZE );// copy of a2
	
	cout << "Vector v1 contains: ";
	printVector(v1,v1.end());
	cout << "Vector v2 contains: ";
	printVector(v2,v2.end());
	
	vector< int >results(v1.size()+v2.size());

	// merge elements of v1 and v2 into results in sorted order
	merge( v1.begin(),v1.end(), v2.begin(),v2.end(), results.begin());
	cout << "\nAfter merge of v1 and v2 results contains:\n";
	printVector(results,results.end());  
	
	// eliminate duplicate values from results
	vector< int >::iterator endLocation;
	endLocation =unique( results.begin(), results.end());
	
	cout << "\nAfter unique results contains:\n";
	printVector(results,endLocation);
	
	cout << "\nVector v1 after reverse:\n";
	reverse( v1.begin(), v1.end() ); // reverse elements of v1
	printVector(v1,v1.end());
	
	return 0;
}

void printVector(vector<int> &intvect, vector <int>::iterator itt){

    for(vector<int>::iterator it=intvect.begin();it<itt;it++){
        cout << *it << " - ";
    }
}
