//Doðukan Kaan Bozkurt

#include <iostream>
#include "CreateAndDestroy.h"

using namespace std;

// Function Prototype
void create(void);

//Global Object
CreateAndDestroy first(1,"(global before main)");

int main(int argc, char** argv) {
	cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;
	
	CreateAndDestroy second(2,"(local in main)");
	static CreateAndDestroy third(3,"(local static in main)");
	
	create(); //call function to create objects
	
	cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;
	CreateAndDestroy fourth (4,"(local in main)");
	cout << "\nMAIN FUNCTION: EXECUTION ENDS" <<endl;
	
	return 0;
}

void create(void)
{
	cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;
	CreateAndDestroy fifth(5,"(local in create)");
	static CreateAndDestroy sixth(6,"(local static in create)");
	CreateAndDestroy seventh(7,"(local in create)");
	cout << "\nCREATE FUNCTION: EXECUTION ENDS" << endl;
}

//Destructor önce main içindekileri alttan yukarýya dogru 4,2 yi kapatti daha sonra alttan tekrar staticleri, 6 ,3 ü kapattý. En son global objecyi,1 i kapattý.
