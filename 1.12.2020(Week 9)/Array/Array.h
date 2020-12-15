//Dogukan Kaan Bozkurt

#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;

class Array
{
	//Overloaded >> and << operators
	friend ostream&operator<<(ostream &,const Array &);
	friend istream&operator>>(istream &,Array &); // input oldugu icin parantez icinde const yazmadik objenin yanina.
	
public:	
	//Default Constructor
	Array(int arraySize=10);
	//Copy Constructor
	Array(const Array &);	//copy constr. icine obj. girmis yine const tanimladik.
	~Array();
	
	int getSize() const;
	
	//Overloaded assignment operator
	const Array &operator=(const Array &); // eger Array yanina operator geliyorsa bu func. object donduruyordur.
	//Overloaded equality operator
	bool operator==(const Array &) const ; 
	//Overloaded inequality operator
	bool operator!=(const Array &) const ;
	//Overloaded subscript operator for non-const obj. returns modifiable lvalues
	int &operator[](int);
	//Overloaded subscript operator for const obj. returns rvalue
	int operator[](int) const; 
private:
	//Store array size
	int size;
	//Store address of the first element of the array
	int *ptr;
};

#endif
