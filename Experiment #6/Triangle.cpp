#include <iostream>
#include<cmath>
#include <string.h>

#include "Triangle.h"

using namespace std;

Triangle::Triangle(string name_1, Line &a_1, Line &b_1, Line &c_1)
	:	a(a_1),
		b(b_1),
		c(c_1),
		name(name_1)
{
	cout << getName() << endl;
}

Triangle::Triangle(string name_1,const Line &a_1,const Line &b_1,const Line &c_1)
	:	a(a_1),
		b(b_1),
		c(c_1),
		name(name_1)
{
	cout << getName() << endl;
}

Triangle::~Triangle()
{
	delete &a;
	delete &b;
	delete &c;
}

void Triangle::outputProperties(void)
{
	calculateAngles();
	calculateArea();
	calculatePerimeter();
	determineTypeAngles();
	determineTypeEdges();
}

string Triangle::getName(void) const
{
	return name;
}
		
void Triangle::setName(string _name)
{
	name = _name;
}
		
void Triangle::calculateAngles(void)
{
	angleA = acos( ( pow( b.getMagnitude() , 2)  + pow( c.getMagnitude() , 2) - pow( a.getMagnitude() , 2) ) / ( 2 * b.getMagnitude() * c.getMagnitude() ) );
	angleB = acos( ( pow( a.getMagnitude() , 2)  + pow( c.getMagnitude() , 2) - pow( b.getMagnitude() , 2) ) / ( 2 * a.getMagnitude() * c.getMagnitude() ) );
	angleC = acos( ( pow( a.getMagnitude() , 2)  + pow( b.getMagnitude() , 2) - pow( c.getMagnitude() , 2) ) / ( 2 * a.getMagnitude() * b.getMagnitude() ) );
	///
	angleA = RadToDegree(angleA);
	angleB = RadToDegree(angleB);
	angleC = RadToDegree(angleC);
	
	cout << "Angles("<< a.getName() << "," << b.getName() << "," << c.getName() << ") - " << angleA << "," << angleB << "," << angleC << endl;
}
		
void Triangle::calculateArea(void)
{
	double area;	
	area = 0.5 * a.getMagnitude() * b.getMagnitude() * sin(angleC);
}
		
void Triangle::calculatePerimeter(void)
{
	double perimeter;	
	perimeter  = a.getMagnitude() + b.getMagnitude() + c.getMagnitude();
	cout << "Perimeter = " << perimeter << endl;
}
		
void Triangle::determineTypeAngles(void)
{
	string type;
	
	if(angleA == 90 || angleB == 90 || angleC == 90) type = "Right";
	else if(angleA > 90 || angleB > 90 || angleC > 90) type = "Obsute";
	else if(angleA < 90 && angleB < 90 && angleC < 90) type = "Acute";
	else type = "Warning! Error occured.";
	
	cout << "Types of Triangle: " << type << endl;
}
		
void Triangle::determineTypeEdges(void)
{
	string Type;
		
	if(a.getMagnitude() == b.getMagnitude() && a.getMagnitude() ==  c.getMagnitude() && b.getMagnitude() ==  c.getMagnitude())	
		Type = "Equilateral";	
	else if(a.getMagnitude() == b.getMagnitude() || a.getMagnitude() == c.getMagnitude() || b.getMagnitude() == c.getMagnitude())	
		Type = "Isosceles";	
	else if(a.getMagnitude() != b.getMagnitude() && a.getMagnitude() != c.getMagnitude() && b.getMagnitude() != c.getMagnitude())	
		Type = "Scalene";	
	else	
		Type = "ERROR";
	
	cout << "Types of Edges: " << Type << endl;
}

double Triangle::RadToDegree(double angle) const
{
	double res;
	
	res = ( angle * 180 ) / M_PI;	
	return res;
}
