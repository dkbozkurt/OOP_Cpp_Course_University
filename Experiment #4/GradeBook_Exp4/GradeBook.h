//Dogukan Kaan Bozkurt
//151220162049
#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include<iostream>
#include<string.h>

using namespace std;

class GradeBook
{
public:
	GradeBook(int,int,int,int,int,double,double,double);
	void setA(int);
	void setB(int);
	void setC(int);
	void setD(int);
	void setF(int);
	void setGrade(double);
	void setTotal(double);
	void setAverage(double);
	
	int getA(void);	
	int getB(void);
	int getC(void);
	int getD(void);
	int getF(void);
	double getGrade(void);
	double getTotal(void);
	double getAverage(void);
	
	void determineClassAverage(int);	//input grades from the user,calculate and print the average of the grades.for 5 student.
	void determineClassAverage(void);	//overloaded,if user enters -1, calculate and print the average of the grades.
	void inputGrades(void);				// updates the appropriate grade counter for each grade entered.
	void displayGradeReport(void);		// prints a report containing the number of students who received each letter grade.
	
private:
	//string coursename;	 
	int A,B,C,D,F;	//Grades.
	double grade,average,total;	
	
};

#endif
