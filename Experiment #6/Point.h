#ifndef POINT_H
#define POINT_H
#include <string.h>
#include <iostream>

using namespace std;

class Point
{
	public:
		Point(string,double x_1=0.0,double y_1=0.0);
		~Point();
		void setX(double);
		void setY(double);
		void setName(string);
		double getX(void) const;
		double getY(void) const;
		string getName(void) const;
		void print(void) const;
		
	private:
		double x;
		double y;
		string name;
		
};

#endif
