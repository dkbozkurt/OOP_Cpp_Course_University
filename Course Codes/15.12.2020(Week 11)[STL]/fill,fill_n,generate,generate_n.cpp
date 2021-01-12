#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector<char> &);
char nextLetter(void);

int main(int argc, char** argv) {
	
	vector <char> chars (10);
	
	fill(chars.begin(),chars.end(),'5');
	
	cout << "Vector chars after filling with 5s:\n"	;
	printVector(chars);
	
	fill_n(chars.begin(),5,'A');
	
	cout << "\nVector chars after filling five elements with As:\n";
	printVector(chars);
	
	generate(chars.begin(),chars.end(),nextLetter);
	
	cout << "\nVector chars after generating letters A-J:\n";
	printVector(chars);
	
	generate_n(chars.begin(),5,nextLetter);
	
	cout << "\nVector chars after generating  K-O for the"
		<< "first five elements:\n";
	printVector(chars);
	
	return 0;
}

char nextLetter(void){
	static char letter = 'A';
	return letter++;
}

void printVector(vector<char> &ch){
	for (vector<char>::iterator it=ch.begin();it < ch.end();it++){
		cout << " " << *it ;
	}
	cout << endl;
}
