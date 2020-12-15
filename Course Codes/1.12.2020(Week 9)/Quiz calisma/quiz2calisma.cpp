//Dogukan Kaan Bozkurt

#include "quiz2calisma.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

quiz2calisma::quiz2calisma(int a)
{
	size=a;
	ptr= new int[getSize()];
	for (int i=0;i<size;i++)
		ptr[i]=0;
}

quiz2calisma::quiz2calisma(const quiz2calisma &q)
	:size(q.getSize())
{
	ptr= new int[getSize()];
	for (int i=0;i<size;i++)
		ptr[i]=q.ptr[i];
}

quiz2calisma::~quiz2calisma()
{
	delete [] ptr;
}

int quiz2calisma::getSize() const
{
	return size;
}
///
ostream&operator<<(ostream &output,const quiz2calisma& x){
	
	for(int i=0;i<x.size;i++){
		output<<x.ptr[i];
		if(i<x.size-1)
			cout << ",";
	}	
	return output;
}
///
istream&operator>>(istream &input,quiz2calisma& x){
	
	for(int i=0;i<x.size;i++)
		input>>x.ptr[i];
	return input;
}
///
quiz2calisma& quiz2calisma::operator*(void)	//quiz2calisma:: dan öncesi döndürecegi seyi belirttigi icin ona göre o aralýgý alýyoruz.
{	//bu functionda soldan yazilmali *array gibi void olunca.

	(*this).size=(*this).size+1;
	for(int i=size;i>=0;i--){
		(*this).ptr[i+1]=(*this).ptr[i];
	}
	(*this).ptr[0]=rand()%100;	
	return *this;
}
quiz2calisma quiz2calisma::operator++(int ss)	//a++
{
	quiz2calisma temp(*this);	//this objecsini const a atiyor kopyalýyoruz yani

	temp.size=temp.size+1;
	temp.ptr[temp.size-1]=rand()%100;
	return temp;
}

const quiz2calisma& quiz2calisma::operator=(const quiz2calisma& x)
{
	this->size=x.size;
	for(int i=0;i<size;i++){
		ptr[i] =x.ptr[i];
	}
	return (*this);
}

bool quiz2calisma::operator==(const quiz2calisma &q)
{
	if(size!=q.size)	//sizeleri kontrol ediyoruz.
		return false;
		
	for (int i=0;i<size;i++)
		if(ptr[i] != q.ptr[i])
			return false;	//Array contents are not equal
			
	return true;	//Arrays are equal
}

