//Dogukan Kaan Bozkurt
//151220162049

#include <iostream>
#include<time.h>
#include<cstdlib>
#include "GradeBook.h"

using namespace std;

int main(int argc, char** argv) {
	
	int gradesArray[GradeBook::students]={};
	srand(time(NULL));
	
	for(int i=0;i<=GradeBook::students;i++){
		gradesArray[i]=rand()%101;	//random numbers.
	}	
	///
	GradeBook gb("Object Oriented Programming I",gradesArray);
	
	gb.displayMessage();
	//gb.determineClassAverage(5);
	//gb.determineClassAverage();
	//gb.inputGrades();
	//gb.displayGradeReport();
	gb.processGrades();
	return 0;
}

