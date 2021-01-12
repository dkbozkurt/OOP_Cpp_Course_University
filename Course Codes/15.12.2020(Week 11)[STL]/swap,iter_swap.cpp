#include <iostream>
//Dogukan Kaan Bozkurt

#include <algorithm>
#include <vector>

using namespace std;

void printVector(vector<int> &intvect);
int main(void){
	
	const int SIZE = 10;
	int a[ SIZE ]= { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	vector < int >v( a, a + SIZE); // copy of a
	cout << "Vector v contains: ";
	printVector(v);
	
	// swap elements at locations 0 and 1 of vector v
	swap(v[ 0 ], v[ 1 ]);
	cout << "\nVector v after swapping v[0] and v[1] using swap:\n";
	printVector(v);
	
	// use iterators to swap elements at locations 0 and 1 of vector v
	iter_swap( &v[ 0 ], &v[ 1 ]); // swap with iterators
	cout << "\nVector v after swapping v[0] and v[1] using iter_swap:\n ";
	printVector(v);
	
	return 0;	
}


void printVector(vector<int> &intvect){

    for(vector<int>::iterator it=intvect.begin();it<intvect.end();it++){
        cout << *it << " - ";
    }
}
