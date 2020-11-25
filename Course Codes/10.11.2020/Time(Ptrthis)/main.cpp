//Doðukan Kaan Bozkurt

#include "Time.h"
#include <stdexcept>
#include <iomanip>
#include <iostream>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	Time t;
	
	t.setHour(18).setMinute(30).setSecond(22);
	
	cout << "Universal Time: ";
	t.printUniversal();
	
	cout << "\nStandart Time: ";
	t.printStandard();
	
	cout << "\n\nNew standard time: ";
	
	t.setTime(20,20,20).printStandard();
	cout << endl;
	
	return 0;
}
