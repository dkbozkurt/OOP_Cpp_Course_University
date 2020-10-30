#include<iostream>

using namespace std;

class X {	//header
	public:
		const static int count=10;	//define static data member
};

int main(){
	cout << X::count << endl;	//use static member of class X
}


