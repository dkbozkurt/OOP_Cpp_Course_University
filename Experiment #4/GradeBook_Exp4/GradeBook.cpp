//Dogukan Kaan Bozkurt
//151220162049
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(int a_,int b_,int c_,int d_,int f_,double grd_,double ttl_,double avrg_)		//Constructor
{
	A=0;
	B=0;
	C=0;
	D=0;
	F=0;
	setA(a_);
	setB(b_);
	setC(c_);
	setD(d_);
	setF(f_);
	setGrade(grd_);
	setTotal(ttl_);
	setAverage(avrg_);
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
	grade=g;
}

void GradeBook::setTotal(double t){
	total+=t;
}

void GradeBook::setAverage(double avg){
	average=avg;
}
///
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
	
	return grade;
}
double GradeBook::getTotal(void){
	
	return total;
}
double GradeBook::getAverage(void){
	
	return average;
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
	cout<<getTotal()<<endl;
	cout<< "The average of the grades is " << getAverage() << endl;

}

void GradeBook::determineClassAverage(void){
	
	double g=0;
	int i=0;
	
	while(grade!=-1){
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
