//Dogukan Kaan Bozkurt

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector <int> &);

main(){
	
	const int SIZE=10;
	int a1[SIZE]={1,3,5,7,9,1,3,5,7,9};
	
	vector < int > v1(a1,a1+SIZE);
	cout << "Vector v1 contains: ";
	printVector(v1);
	
	inplace_merge(v1.begin(),v1.begin()+5,v1.end());
	cout << "\nAfter inplace_merge, v1 contains: ";
	printVector(v1);
	
	vector<int> results1;
	unique_copy(v1.begin(),v1.end(),back_inserter(results1));
	cout << "\nAfter unique_copy, results1 contains ";
	printVector(results1);
	
	vector <int> results2;
	
	reverse_copy(v1.begin(),v1.end(),back_inserter(results2));
	cout << "\nAfter reverse_copy, results2 contains: ";
	printVector(results2);
	
	return 0;
}

void printVector(vector<int> &ch){
	
	for (vector<int>::iterator it=ch.begin();it < ch.end();it++){
		cout << " " << *it ;
	}
	cout << endl;
}
