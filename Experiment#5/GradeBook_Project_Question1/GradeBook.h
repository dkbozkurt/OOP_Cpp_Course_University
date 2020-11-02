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
	GradeBook(string,const int []); 
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
	
	void setCourseName(string);			// function that sets the course name
	string getCourseName(void);				// function that gets the course name
	void displayMessage(void);				// function that displays a welcome message
	
	void determineClassAverage(int);	//input grades from the user,calculate and print the average of the grades.for 5 student.
	void determineClassAverage(void);	//overloaded,if user enters -1, calculate and print the average of the grades.
	void inputGrades(void);				// updates the appropriate grade counter for each grade entered.
	void displayGradeReport(void);		// prints a report containing the number of students who received each letter grade.
	
	///After than that line's funcs&variables. They belongs to Exp5.
	
	static const int students=10;	//Header da static tanýmlamak için const yazýlmasý gerekiyor.
	void processGrades(void);
	
private:
	string courseName; 			//string coursename;	 
	int A,B,C,D,F;				//Grades.
	double gr,average,total;	
	
	///After than that line's funcs&variables. They belongs to Exp5.
	int grades[students];
	int getMinimum(void);
	int getMaximum(void);
	double getAverage(void);
	void outputBarChart(void);
	void outputGrades(void);
	
};

#endif

