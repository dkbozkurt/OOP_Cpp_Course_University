#include <iostream>
#include<stdexcept>
#include "Time.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Time t;	//instantiate object t of class Time
	
	cout << "The initial universal time is ";
	t.printUniversal(); //00:00:00
	
	cout << "\nThe initial universal time is ";
	t.printStandard(); //12:00:00 AM
	
	t.setTime(13,27,6);	//Change time
	
	// output Time object t's new values
	cout << "\n\nUniversal time after setTime is ";
	t.printUniversal();	//13:27:06
	
	cout << "\nStandard time after setTime is ";
	t.printStandard();	//1:27:06 PM
	
	//attempt to set the timne with invalid values
	try
	{
		t.setTime(99,99,99);	// all values out of range
	}
	catch (invalid_argument &e){
		cout << "\nException : "<< e.what() << endl << endl;	//what func is used tp get the error message that is stored in exception obj and display it
	}
	//output t's valeus after specifying invalid values
	cout << "\n\nAfter attempting invalid settings:"
	<< "\nUniversal time:";
	t.printUniversal(); //00:00:00
	
	cout << "\nStandard time : ";
	t.printStandard(); //12:00:00 AM
	cout << endl;
	
	
	return 0;
}
