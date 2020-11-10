#ifndef LINE_H
#define LINE_H
#include <string.h>
#include <iostream>
#include <cmath>

#include "Point.h"

using namespace std;

class Line
{
	friend class Point;	//importing another class.
	public:
		Line(string,Point&,Point &);
		Line(string, const Point &,const Point &);
		~Line();
		
		void setName(string);
		void setMagnitude(double);
		Point getStartPoint(void) const; 	
		Point getEndPoint(void) const; 		
		string getName(void) const;	
		double getMagnitude(void) const;	
		void print(void) const;	
	private:
		
		const Point start;
		const Point end;
		string name;
		double magnitude;
		
		void calculateMagnitude(void);
	
};

#endif
