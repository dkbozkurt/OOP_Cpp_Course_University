//Dogukan Kaan Bozkurt
/*
*/
#include <iostream>
using namespace std;

class Box {

public:
	friend void printWidth(Box b);
	void setWidth(double wid);
private:
	double width;
};

void Box::setWidth(double wid)
{
	width=wid;
}

//Note : printWidth() is not a member func. of any class.
void printWidth(Box b){	//Buradaki Box b Box u b olarak tanýmlayýp onun func.larýna eriþim saðlýyor.

	/*Because printWidth() is a friend of Box,
	it can access any member of this class*/
	cout << "Width of box: " << b.width << endl;
}

int main(int argc, char** argv) {
	Box box;
	
	box.setWidth(10.0);
	
	printWidth(box);
	
	return 0;
}
