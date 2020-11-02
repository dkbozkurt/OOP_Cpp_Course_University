//Dogukan Kaan Bozkurt
//151220162049

#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<iomanip>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name,const int gradesArray[] )		//Constructor
{
	setCourseName(name);
	A=0;
	B=0;
	C=0;
	D=0;
	F=0;
	setA(0);
	setB(0);
	setC(0);
	setD(0);
	setF(0);
	setGrade(0);
	setTotal(0);
	setAverage(0);
	///Exp 5.
	for ( int grade = 0; grade < students; ++grade )
		grades[ grade ]=gradesArray[ grade ];
}

///
void GradeBook::setCourseName(string name)
{
	courseName = name;					// store the course name in the object
}

///

void GradeBook::setA(int a){
	A+=a;
}

void GradeBook::setB(int b){
	B+=b;
}

void GradeBook::setC(int c){
	C+=c;
}

void GradeBook::setD(int d){
	D+=d;
}

void GradeBook::setF(int f){
	F+=f;
}

void GradeBook::setGrade(double g){
	gr=g;
}

void GradeBook::setTotal(double t){
	total+=t;
}

void GradeBook::setAverage(double avg){	
	average=avg;
}
///
string GradeBook::getCourseName()
{
	return courseName;					// return the object'S courseName
}
///

int GradeBook::getA(void){
	
	return A;
}
int GradeBook::getB(void){
	
	return B;
}
int GradeBook::getC(void){
	
	return C;
}
int GradeBook::getD(void){
	
	return D;
}
int GradeBook::getF(void){
	
	return F;
}
double GradeBook::getGrade(void){
	
	return gr;
}
double GradeBook::getTotal(void){
	
	return total;
}
void GradeBook::displayMessage()
{
	cout << "Welcome to the GradeBook for " << getCourseName() << "!" << endl;
}
///

void GradeBook::determineClassAverage(int num_exp){
	double g=0;	//grade 
	int i=0;
	double t=0;
	
	while(i<num_exp){
		cout << "Enter a grade value for the "<<i+1 << ". student" << endl;
		cin >>g;
		setGrade(g);
		setTotal(getGrade());
		i++;
	}
	
	setAverage(getTotal()/num_exp);
	cout<< "The average of the grades is " << getAverage() << endl;

}

void GradeBook::determineClassAverage(void){
	
	total=0;	
	double g=0;
	int i=0;
	
	while(gr!=-1){
		cout << "Enter a grade value for the "<<i+1 << ". student" << endl;
		cin >> g;
		if(g==-1){
			break;
		}else{
		setGrade(g);
		setTotal(getGrade());
		i++;
		}
	}
	setAverage(getTotal()/i);
	cout<< "The average of the grades is " << getAverage() << endl;	
}

void GradeBook::inputGrades(void){
	string a;
	int i=0;
	
	while(a!="Z"){
	cout << "Enter a grade key for the "<<i+1 << ". student" << endl;
	cin >>a;

	if(a=="Z"){
		break;
	}else if (a=="A"){

		setA(1);
		i++;
	}else if(a=="B"){

		setB(1);
		i++;
	}else if(a=="C"){

		setC(1);
		i++;
	}else if(a=="D"){

		setD(1);
		i++;
	}else if(a=="F"){

		setF(1);
		i++;
	}else{
		cout << "You entered a wrong grade key, Please try again"<<endl;
	}
}
}

void GradeBook::displayGradeReport(void){
	cout <<endl<< "The number of the student received A grade is " << getA() << endl;
	cout <<endl<< "The number of the student received B grade is " << getB() << endl;
	cout <<endl<< "The number of the student received C grade is " << getC() << endl;
	cout <<endl<< "The number of the student received D grade is " << getD() << endl;
	cout <<endl<< "The number of the student received F grade is " << getF() << endl;
	
}

/// Experiment 5


int GradeBook::getMinimum(void){
	
	int lgrade=100;
	
	for(int grade=0;grade<students;++grade){
		if (grades[grade] < lgrade)
		lgrade=grades[grade];	//new lowest grade ll be changed.
	}
	return lgrade;
}

int GradeBook::getMaximum(void){
	
	int hgrade=0;

	for(int grade=0;grade<students;++grade){
		if (grades[grade] < hgrade)
		hgrade=grades[grade];	//new lowest grade ll be changed.
	}
	
	return hgrade;
}

double GradeBook::getAverage(void){	//For experiment 5
	
	int total = 0;
	for ( int grade = 0; grade < students; ++grade )
		total += grades[ grade ];

	return static_cast< double >( total ) / students;	///
}
void GradeBook::outputBarChart(void){
	
	cout << "\nGrade distribution:" << endl;
	const int frequencySize = 11;
	int frequency[ frequencySize]= {};
	for ( int grade = 0; grade < students; ++grade )
		++frequency[ grades[ grade ] / students ];		///
	
	for ( int count = 0; count < frequencySize; ++count ){
		
		if ( count == 0 )
			cout << " 0-9: ";
		else if ( count == 10 )
			cout << " 100: ";
		else
			cout << count * 10 << "-" << ( count * 10 ) + 9 << ": ";
		for ( int stars = 0; stars < frequency[ count ]; ++stars )
			cout << '*';	
		cout << endl;		
	}
}
void GradeBook::outputGrades(void){
	
	cout << "\nThe grades are:\n\n";
	
	for ( int student = 0; student < students; ++student )
		cout << "Student " << setw( 2 ) << student + 1 << ": " << setw( 3 )
		<< grades[ student ] << endl;

}
void GradeBook::processGrades(void){
	
	outputGrades();

	cout << "\nClass average is " << setprecision( 2 ) << fixed <<
	getAverage() << "\nLowest grade is " << getMinimum() <<
	"\nHighest grade is " << getMaximum() << endl;

	outputBarChart(); 
}
