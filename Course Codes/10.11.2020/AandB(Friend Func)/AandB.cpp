//Do�ukan Kaan Bozkurt

#include <iostream>
using namespace std;
//forward declaration
class B;//E�er bunu belirtmeseydik A class�n�n i�indeki B ifadesi tan�mlanamayacakt� o y�zden �nceden belirttik.

class A
{
	private:
		int numA;
	public:
		A()	//Constructor
		:	numA(12)
		{
			//empty body
		}
		
	//friend func. declaration
	friend int add(A,B);
};

class B
{
	private:
		int numB;
	public:
		B()	//Constructor
		:	numB(1)
		{
			//empty body
		}
		
	//friend func. declaration
	friend int add(A,B);
};

//Func add() is the friend func. of classes A and B
// that accesses the member variables numA and numB

int add(A objectA, B objectB)	//A ve B classlar�ndan objecleri objectA ve B olarak import ettik.
{
		return (objectA.numA + objectB.numB);
	
}

int main(int argc, char** argv) {
	A objectA;
	B objectB;
	cout << "Sum: "<<add (objectA,objectB);
	return 0;
}
