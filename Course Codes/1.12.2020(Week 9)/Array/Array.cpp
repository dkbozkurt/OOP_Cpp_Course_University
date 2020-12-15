//Dogukan Kaan Bozkurt

#include "Array.h"
#include <iostream>
#include <stdexcept>
#include <iomanip>
using namespace std;

Array::Array(int arraySize) //Default constr.
{
	if (arraySize > 0)
		size=arraySize;
	else
		throw invalid_argument("Array size must be greater than 0");
	
	ptr=new int[size]; //create space for array *************************
	
	for(int i=0;i<size;++i)
		ptr[i]=0;	//set array element
}
Array::Array(const Array &arrayToCopy)	// Copy constructor for class Array
	:size(arrayToCopy.size)	//arrayToCopy const oldugu icin size i burada tanimladik. ( obj const oldugu icin)******************************
{
	cout << "size "<<size << endl;
	ptr=new int[size];
	
	for(int i=0;i<size;++i)
		ptr[i]=arrayToCopy.ptr[i];	//set array element
}

Array::~Array()	 //Destructor for class Array
{
	delete [] ptr ; //release array space 
	//The destructor uses delete[] to release the memory allocated dynamically by new in the constructor.
}

int Array::getSize() const
{
	return size;
}
const Array &Array::operator=(const Array &r)
{
	if(&r != this){	//avoid self-assignment
		
		if(size != r.size){
			delete [] ptr;	//release space	//thisi sildik.
			size=r.size;	//resize this object	this in sizeina r nin sizesini esitledik
			ptr=new int[size];	//create space for array copy	//ptr burada this olur.
		}
		
		for (int i=0;i< size;++i)
			ptr[i]=r.ptr[i];	//copy array into object
	}	
	
	return *this;
} 

bool Array::operator==(const Array &r) const
{
	if(size!=r.size)	//sizeleri kontrol ediyoruz.
		return false;
		
	for (int i=0;i<size;++i)
		if(ptr[i] != r.ptr[i])
			return false;	//Array contents are not equal
			
	return true;	//Arrays are equal
}

bool Array::operator!=(const Array &r) const
{
	return !(*this == r); //invokes operator ==
}

int &Array::operator[](int a)
{
	if(a<0 || a>=size)
		throw out_of_range("Subscriptout of range");
	
	return ptr[a];	//reference return
}
int Array::operator[](int a) const
{
	if(a<0 || a>=size)
		throw out_of_range("Subscriptout of range");
	
	return ptr[a];	//return copy of this element
}
istream&operator>>(istream &input,Array &a)	//input values for entire Array
{
	for(int i=0;i<a.size;++i)
		input >> a.ptr[i];
		
	return input;	//enables cin >> x >> y;
}
ostream&operator<<(ostream &output,const Array &a)
{
	int i;
	
	for(i=0;i<a.size;++i){
		output << setw(12) << a.ptr[i];
		
		if((i+1)%4 == 0)
			output << endl;
	}
	
	if (i%4 !=0)
		output << endl;

	return output;
/*
	for(int i=0;i<x.size;i++){
	output<<x.ptr[i];
	if(i<x.size-1)
		cout << ",";
}	
	return output;
	*/// gibi sade halde de yazilabilirdi .
}

