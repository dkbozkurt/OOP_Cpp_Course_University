//Doðukan Kaan Bozkurt

#ifndef TIME_H
#define TIME_H
#include<iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

class Time
{
public:
	Time(int hr=0,int min=0,int sec=0); // Initial valueler her zaman .h dosyasýnda atýlýr.	
	~Time();
	void setTime(int,int,int);
	int getHour(void);
	int &badSetHour(int);	//Dangerous reference return
private:
	int hour;	//0-23
	int minute; //0 - 59
	int second; //0 - 59
};

#endif
