//Dogukan Kaan Bozkurt

#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date
{
public:
	Date(int m=1,int d=1,int y=2000); // Initial values are attempt in the constructor in .h file.
	~Date();
	
	static const int monthsPerYear=12;
	void print(void) const;
	
private:
	int month;
	int year;
	int day;
	
	//Utility function to check if day is proper for month and year
	int checkDay(int) const;
};

#endif
