#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string.h>
#include <iostream>

#include "Line.h"

using namespace std;

class Triangle
{
	friend class Line;	//importing line class into triangle
	friend class Point; //importing point class into triangle
	
	public:
		Triangle(string, Line &, Line &, Line &);
		Triangle(string,const Line &,const Line &,const Line &);
		~Triangle();
		void outputProperties(void);	
		string getName(void) const;	
		void setName(string);
		
	private:
		const Line a;
		const Line b;
		const Line c;
		string name;
		double angleA;
		double angleB;
		double angleC;
		///
		void calculateAngles(void);		
		void calculateArea(void);		
		void calculatePerimeter(void);		
		void determineTypeAngles(void);		
		void determineTypeEdges(void);		
		double RadToDegree(double) const;
};

#endif
