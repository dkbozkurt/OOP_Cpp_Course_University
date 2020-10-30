#include <iostream>

using namespace std;

int main(void){
	int x=2;

	int &y=x; // y refers to (is an alias for) x

	cout << "x = "<< x << endl << "y = "<<y << endl;
	
	y=7;
	
	cout << "x = "<< x << endl << "y = "<<y << endl;
	
	return 0; 
}
