//Doðukan Kaan Bozkurt

/* Notes:
If a function is defined as a friend function then, the private
and protected data of a class can be accessed using the
function.

For accessing the data, the declaration of a friend
function should be made inside the body of the class
(can be anywhere inside class either in private or public
section) starting with keyword friend.

*/
#include <iostream>
using namespace std;

class Count
{
	friend void setX(Count &,int); //friend function.
	
public:
	
	Count() //Constructor
	:	x(0)
	{
		//Empyt body
	}
	void print()const
	{
		cout << x << endl;
	}
private:
	int x;
	
};

//sets the value of private data member x
void setX(Count &c,int value)
{
	
	c.x=value;
}

int main(int argc, char** argv) {
	
	Count counter; // create count object
	
	cout << "counter.x after instantination: ";
	counter.print();
	
	setX(counter,8);
	cout << "counter.x after call to setX friend function: ";
	counter.print();
	
	return 0;
}
