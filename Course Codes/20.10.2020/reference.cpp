//Dogukan Kaan Bozkurt

#include<iostream>

using namespace std;

//Func. prototypes
int squareByValue(int x);
void squareByReference(int &y);
// To indicate that a func. parameter is passed by reference, simply follow the parameter's type in the func. prototype by an (&)

int main(void){
	int number1=2;
	int number2=4;
	
	// demonstrate squareByValue
	cout << "number1 = "<< number1 << " before squareByValue"<<endl;
	cout << "Value returned by squareByValue:"<< squareByValue(number1)<<endl;
	cout << "number1 = " << number1 << " after squareByValue\n"<<endl;
	
	//demonstrate suareByReference
	cout << "number2 = "<<number2 << " before squareByReference"<<endl;
	squareByReference(number2);
	cout << "number2 = "<< number2<<" after squareByReference"<<endl;
	
	return 0;	// indicates succesful termination 
}

int squareByValue(int x){
	
	return x*x;
}

void squareByReference(int &y){
	
	y=y*y;
}






