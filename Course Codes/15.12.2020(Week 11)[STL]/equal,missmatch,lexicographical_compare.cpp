#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void printVector(vector<int> &);

int main(int argc, char** argv) {
	
	const int SIZE = 10;
	int a1[ SIZE ] = { 1,2,3,4,5,6,7,8,9,10};
	int a2[ SIZE ] = { 1,2,3,4,1000,6,7,8,9,10};
	vector  < int > v1(a1,a1+SIZE);
	vector  < int > v2(a1,a1+SIZE);
	vector  < int > v3(a2,a2+SIZE);
	
	cout << "Vector v1 contains: " ;
	printVector(v1);
	cout << "\nVector v2 contains: " ;
	printVector(v2);
	cout << "\nVector v3 contains: " ;
	printVector(v3);
	
	bool result = equal(v1.begin(),v1.end(),v2.begin());
	cout << "\nVector v1 " << (result ? "is " : "is not ")
		<< "equal to vector v2.\n";
		
	result = equal(v1.begin(),v1.end(),v3.begin());
	cout << "\nVector v1 " << (result ? "is " : "is not ")
		<< "equal to vector v3.\n";
		
	pair < vector<int>::iterator, vector<int>::iterator > location;
	
	location = mismatch (v1.begin(),v1.end(),v3.begin());

	cout << "\nThere is a mismatch between v1 and v3 at location "
		<< (location.first-v1.begin()) << "\n where v1 contains "
		<< *location.first << " and v3 contains" << *location.second << "\n\n";
	
	char c1[SIZE]="HELLO";
	char c2[SIZE]="BYE BYE";
	
	result = lexicographical_compare(c1,c1+SIZE,c2,c2+SIZE);
	cout << c1 << (result ? " is less than " : " is greater than or equal to ")
		<< c2 << endl;
	
	return 0;
}

void printVector(vector<int> &intvect){
	
	for(vector<int>::iterator it=intvect.begin();it<intvect.end();it++){
		cout << *it << " - ";
	}
}
