//Dogukan Kaan Bozkurt
#include<iostream>	// for count
#include <iomanip>	// for setfill and setw
#include <stdexcept>	// for invalid_argument exception class

#include "Time.h"

using namespace std;

Time::Time()	//Constructor
{
	hour=minute=second=0;
}

//set new Time value using universal time
void Time::setTime(int h,int m,int s){
	
// validate hour,min and second
	if((h>=0 && h<24) && (m>=0 && m<60) && (s>=0 && s<60)){
		hour=h;
		minute=m;
		second=s;
	}
	else
	throw invalid_argument("hour,minute and/or second was out of range");	//exception handing used for problems which occur when executing a problem.,
	//exception handing !!
}

//print Time in universal-time format(HH:MM:SS)
void Time::printUniversal(void){
	
	cout << setfill('0') << setw(2)<<hour << ":"		//buradaki setfill parantez içindekiyle setw de yazan sayý kalan yazan alaný dolduruyor.
	<<setw(2)<<minute << ":" << setw(2) << second;
	
}

//print Time in standard-time format(HH:MM:SS AM or PM)
void Time::printStandard(void){
	
	if(hour == 0 || hour==12)
		cout << 12;
	else
		cout << hour%12;
	
	cout << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second;
	
	if(hour <12)
		cout << " AM";
	else
		cout << " PM";
		
}
