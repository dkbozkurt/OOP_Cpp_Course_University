#include<iostream>
#include<string>
#include"GradeBook.h"

using namespace std;


GradeBook::GradeBook(string name){		//constructure
		
		setCourseName(name);
}
	
void GradeBook::setCourseName(string name){		
//Buradaki asd::def olmasýnýn nedeni def func.nun asd classina ait oldugunu belirtmek.
		courseName=name;
}

string GradeBook::getCourseName(void){
		return courseName;
}

void GradeBook::displayMessage(void){
		
		cout << "Welcome to the Grade Book!"
		<< getCourseName() <<" !" <<endl;
		
}
