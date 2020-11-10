#include<iostream>
#include<cmath>
#include<string.h>

#include "Line.h"

using namespace std;

Line::Line(string _name, Point &a, Point &b)
	:	start(a),
		end(b),
		name(_name)
{
	calculateMagnitude();
}

Line::Line(string _name,const Point &a,const Point &b)
	:	start(a),
		end(b),
		name(_name)
{
	calculateMagnitude();
}

Line::~Line()
{
	delete &start;
	delete &end;
}

void Line::setName(string _name)
{
	name = _name;
}
		
void Line::setMagnitude(double mag)
{
	magnitude = mag;
}
		
Point Line::getStartPoint(void) const
{
	return start;	
} 
		
Point Line::getEndPoint(void) const
{
	return end;
} 
		
string Line::getName(void) const
{
	return name;
}
		
double Line::getMagnitude(void) const
{
	return magnitude;
}
		
void Line::calculateMagnitude(void)
{
	magnitude = sqrt( pow(start.getX() - end.getX(), 2) + pow(start.getY() - end.getY(), 2) );
	cout << "|L| = " << getMagnitude() << endl;
}
		
void Line::print(void) const
{
	cout << "SP( " << start.getX() << "," << start.getY() << " )" << "\t" "EP(" << end.getX() << "," << end.getY() << ")" << endl;
}

