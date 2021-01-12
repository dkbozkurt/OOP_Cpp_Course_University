//Dogukan Kaan Bozkurt

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector <int> &);
bool greater9(int);

main(){
	
	const int SIZE=10;
	int a[SIZE]={10,2,10,4,16,6,14,8,12,10};
	
	vector<int> v1(a,a+SIZE);
	cout << "Vector v1 before replacing all 10s:\n";
	printVector(v1);
	
	replace(v1.begin(),v1.end(),10,100);
	cout << "Vector v after replacing all 10s with 100s:\n";
	printVector(v1);
	
	vector <int> v2(a,a+SIZE);
	vector <int> c1(SIZE,0);
	cout << "\nVector v2 before replacing all 10s and copying:\n";
	printVector(v2);
	
	replace_copy(v2.begin(),v2.end(),c1.begin(),10,100);
	cout << "\nVector c1 after replacing all 10s from v2:\n";
	printVector(c1);
	
	vector<int> v3 (a,a+SIZE);
	cout << "\nVector v3 before replacing values greater than 9:\n";
	printVector(v3);
	
	replace_if(v3.begin(),v3.end(),greater9,100);
	cout << "\nVector v3 before replacing all elements\ngreater than 9 with 100s:\n";
	printVector(v3);		
	
	vector <int> v4(a,a+SIZE);
	vector <int> c2(SIZE,0);
	cout << "\nVector v4 before replacing all values greater than 9 and copying:\n";
	printVector(v4);
	
	replace_copy_if(v4.begin(),v4.end(),c2.begin(),greater9,100);
	cout << "\nVector c2 after replacing all values greater than 9 in v4:\n";
	printVector(c2);
	
	return 0;
}

void printVector(vector<int> &ch){
	
	for (vector<int>::iterator it=ch.begin();it < ch.end();it++){
		cout << " " << *it ;
	}
	cout << endl;
}

bool greater9(int b){
	
	return b>9;
	
}
