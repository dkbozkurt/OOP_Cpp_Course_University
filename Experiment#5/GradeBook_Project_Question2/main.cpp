//Dogukan Kaan Bozkurt
//151220162049

#include <iostream>
#include<time.h>
#include<cstdlib>
#include "GradeBook.h"

using namespace std;

int main(int argc, char** argv) {
	
	int gradesArray[GradeBook::students][GradeBook::ii]={};
	srand(time(NULL));
	
	for(int i=0;i<=GradeBook::students;i++){
		for(int j=0;j<GradeBook::ii;j++){
		gradesArray[i][j]=rand()%101;	//random numbers.
		//cout << "gradesArray["<<i<<"]["<<j<<"]"<<gradesArray[i][j] << endl;
		}
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

