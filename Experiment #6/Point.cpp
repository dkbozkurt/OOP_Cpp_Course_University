#include "Point.h"

Point::Point(string name_1,double x_1,double y_1)
{

	setX(x_1);
	setY(y_1);
	setName(name_1);
}

Point::~Point()
{
}

///
void Point::setName(string name_1){
	
	name=name_1;
}
void Point::setX(double x_1){
	
	x=x_1;
}
void Point::setY(double y_1){
	
	y=y_1;
}
///
string Point::getName(void) const{
	
	return name;
}
double Point::getX(void) const{
	return x;
}
double Point::getY(void) const{
	return y;
}
///
void Point::print(void) const{ 
	
	cout << getName() << "(" << getX() << "," << getY() <<")"<< endl; 
}

