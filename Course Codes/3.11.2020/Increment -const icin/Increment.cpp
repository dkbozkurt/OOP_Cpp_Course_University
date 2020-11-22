//Doðukan Kaan Bozkurt
#include <iostream>
#include "Increment.h"
using namespace std;
/*Const objecler bu constructorda bu þekilde tanýmlanýr.
Constructor parameter listin ")" saðýndan ve constructor body'nin
"{" den önce.

The member initializer list is separated from the parameter list 
with a colon (:).

Multiple member initializers are separated by commas.

*/
Increment::Increment(int c,int i)
	:	count(c),		//initializer for non-const member
		increment(i)	//required initializer for const member
{
	//empty body
	//count =c; gibi de tanýmlanaabilir non-const oldugu için.
}

Increment::~Increment()
{
	
}

void Increment::addIncrement(void)
{
	count=count+increment;
}

/*
print functionun const tanýmlanmasýnýn nedeni:
It’s possible that a program will have a const reference to an
Increment object or a pointer to const that points to an Increment object.
*/
void Increment::print(void) const
{
	cout << "count = " << count <<", increment = "<<increment << endl;	//buradaki increment const oldugu için func. const oldu.
}
