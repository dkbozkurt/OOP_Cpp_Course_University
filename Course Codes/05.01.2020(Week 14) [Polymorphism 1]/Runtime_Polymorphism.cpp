//Dogukan Kaan Bozkurt

/*
Polymorphism

In simple words, we can define polymorphism as the ability of a message to be displayed in more than one from.

Real life example of polymorphism, a person at the same time can have different characteristic. Like a man at the same time
is a father, a husband, an employee.

So the same person posses different behavior in different situations. This is called polymorphism.

*/

#include <iostream>

using namespace std;

class A { 

public:
	void disp(){
		cout << "Super Class Function "<< endl;	
	}
};

class B : public A{
public:
	void disp(){
		cout <<"Sub Class Function " << endl;
	}
};

int main(){
	//Parent class object
	A obj;
	obj.disp();
	//Child class object
	B obj2;
	obj2.disp();
	
	return 0;
}
