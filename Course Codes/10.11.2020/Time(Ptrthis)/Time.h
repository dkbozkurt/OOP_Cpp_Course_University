//Doðukan Kaan Bozkurt

#ifndef TIME_H
#define TIME_H
#include <iomanip>
#include <iostream>
#include<stdlib.h>
using namespace std;

class Time
{
public:
	Time(int hour=0, int minute=0, int second=0);
	
	Time &setTime(int,int,int);
	Time &setHour(int);
	Time &setMinute(int);
	Time &setSecond(int);
	
	int getHour() const;
	int getMinute() const ;
	int getSecond() const ;
	
	void printUniversal(void) const;
	void printStandard(void) const;
	
	~Time();
private:
	
	int hour;
	int minute;
	int second;
};

#endif
