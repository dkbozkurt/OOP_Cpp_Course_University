//Doðukan Kaan Bozkurt

#ifndef CREATEANDDESTROY_H
#define CREATEANDDESTROY_H
#include <iostream>
using namespace std;
class CreateAndDestroy
{
public:
	CreateAndDestroy(int,string);
	~CreateAndDestroy();
private:
	int objectID;
	string message;
	
};

#endif
