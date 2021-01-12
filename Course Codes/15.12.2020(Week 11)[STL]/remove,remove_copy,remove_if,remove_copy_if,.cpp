//Dogukan Kaan Bozkurt

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printVector (vector <int > &, vector <int>::iterator);
bool greater9 (int);

int main(int argc, char** argv) {
	
	const int SIZE = 10;
	int a[SIZE]={10,2,10,4,16,6,14,8,12,10};
	
	vector<int>v (a,a+SIZE);
	vector<int>::iterator newLastElement;
	
	cout << "Vector v before removing all 10s:\n";
	printVector(v,v.end());
	
	newLastElement = remove(v.begin(),v.end(),10);
	cout << "\nVector v after removing all 10s: \n";
	printVector(v,newLastElement);
	
	vector<int>v2 (a,a+SIZE);
	vector<int>c(SIZE,0);
	
	cout << "\nVector v2 before removing all 10s and copying:\n";
	printVector(v2,v2.end());
	
	remove_copy(v2.begin(),v2.end(),c.begin(),10);
	cout << "\nVector c after removing all 10s from v2:\n";
	printVector(c,c.end());
	
	vector<int> v3(a,a+SIZE);
	cout << "\nVector v3 before removing all elements\ngreater than 9:\n";
	printVector(v3,v3.end());
	
	newLastElement = remove_if(v3.begin(),v3.end(),greater9);
	cout << "\nVector v3 after removing all ements\ngreater than 9:\n";
	printVector(v3,newLastElement);
	
	vector<int>v4 (a,a+SIZE);
	vector<int>c2 (SIZE,0);
	cout << "\nVector c2 before removing all elements\ngreater than 9 and copying:\n ";
	printVector(v4,v4.end());
	
	remove_copy_if(v4.begin(),v4.end(),c2.begin(),greater9);
	cout << "\nVector c2 after removing all elements\ngreater than 9 from v4:\n";
	printVector(c2,c2.end());
	

	return 0;
}

bool greater9(int x){
	return x>9;
}
void printVector(vector<int> &intvect, vector <int>::iterator itt){
	
	for(vector<int>::iterator it=intvect.begin();it<itt;it++){
		cout << *it << " - ";
	}
}
