//Dogukan Kaan Bozkurt

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> &);
void printArray(int a[],int *last);

main()
{
	const int SIZE = 10;
	int a[ SIZE ]= { 3, 100, 52, 77, 22, 31, 1, 98, 13, 40 };
	vector< int >v(a,a+ SIZE); // copy of a
	vector< int >v2;
	
	cout<< "Vector v before make_heap:\n";
	printVector(v),
	
	make_heap( v.begin(), v.end() ); // create heap from vector v
	cout << "\nVector v after make_heap:\n";
	printVector(v);
	
	sort_heap( v.begin(), v.end() ); // sort elements with sort_heap
	cout << "\nVector v after sort_heap:\n";
	printVector(v);
	
	// place elements of array a into v2 and maintain elements of v2 in heap
	for ( int i= 0;i < SIZE;++i ){
		v2.push_back( a[ i] );
		push_heap( v2.begin(),v2.end());
		cout << "\nv2 after push_heap(a[" << i << "]): ";
		printVector(v2);
	}
	
	// remove elements from heap in sorted order
	for ( int j= 0; j <v2.size(); ++j ){
		cout << "\nv2 after " << v2[0]<<"popped from heap\n";
		pop_heap( v2.begin(),v2.end()-j);
		printVector(v2);
	}
}

void printVector(vector<int> &intvect){

    for(vector<int>::iterator it=intvect.begin();it<intvect.end();it++){
        cout << *it << " - ";
    }
}

void printArray(int a[],int *last){

    cout << endl;
    for(int i=0;&a[i]!=last;i++){
        cout << " " << a[i];
    }
    cout << endl;

}
