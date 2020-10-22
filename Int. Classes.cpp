#include<iostream>
#include<string>
#include"GradeBook.h" // Header file should be added in the main cpp file.

using namespace std;


main(){
	
	/*
	string nameOfCourse;
	
	GradeBook myGradeBook;
	
	cout << "Initial course name is: " << myGradeBook.getCourseName() <<endl;	
	
	cout << "Please enter the course name: " <<endl;
	cin >> nameOfCourse; 
	
	myGradeBook.setCourseName(nameOfCourse);
	cout <<endl;
	myGradeBook.displayMessage();
	*/
	
	GradeBook gradeBook1("EEE102_ComputerProgramming");
	GradeBook gradeBook2("EEE102_OOP");
	
	cout << "gradeBook1 created for course : "
	<<gradeBook1.getCourseName() << endl
	<<"gradeBook2 created for course : "
	<<gradeBook2.getCourseName() << endl;
		
}


