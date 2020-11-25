//Doðukan Kaan Bozkurt
/*Bu örnekteki *this objenin adresine refer eder.*/
#include <iostream>
using namespace std;
class Test
{
	
public:
	Test(int value=0);	//default constructor
	void print() const;
	
private:
	int x;
	
};

Test::Test(int value)
	:	x(value) //initialize x to value
{
	//x=value; gibi de yazýlabilirdi const olmadýgý icin
	//empty body
}

void Test::print() const 
{
	// implicity use the this pointer to access the member x
	cout << "x= "<<x;
	// explicity use the this pointer and the arrow operator to access the member x
	cout << "\nthis ->x = "<< this ->x;
	
	//explicity use the dereferenced this pointer and the dot operator to access the member x
	cout << "\n(*this).x = "<< (*this).x << endl;	
	
}
int main(int argc, char** argv) {
	
	Test testObject(12);
	testObject.print();
	return 0;
}
