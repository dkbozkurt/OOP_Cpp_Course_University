//Dogukan Kaan Bozkurt
//151220162049

#include <iostream>
#include "GradeBook.h"

using namespace std;

int main(int argc, char** argv) {
	GradeBook gb(0,0,0,0,0,0.0,0.0,0.0);

	gb.determineClassAverage(5);
	gb.determineClassAverage();
	gb.inputGrades();
	gb.displayGradeReport();
	
	return 0;
}
