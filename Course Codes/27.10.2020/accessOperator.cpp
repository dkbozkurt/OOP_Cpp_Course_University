#include <iostream>
using namespace std;

class Count{
	
public:
		
	void setX(int value){
		x=value;
			
	}
		
	void print(){
		
		cout << x << endl;
	}
		
private:
		int x;
};

main(){
	Count counter;	//create counter object
	Count *counterPtr =&counter;	// create pointer to counter
	Count &counterRef=counter;	//create reference to counter
	
	cout << "Set x to 1 and print using object's name : ";
	counter.setX(1);	//set data member x to 1
	counter.print();	// call member function print
	
	cout << "Set x to 2 and print using a reference to an object: ";
	counterRef.setX(2);	// set data member x to 2 
	counterRef.print();	//call member func. print
	
	cout<< "Set x to 3 and print using a reference to an object: ";
	counterPtr->setX(3);	//set data x to 3
	counterPtr->print();	//call member func print
	
	
}
