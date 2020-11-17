//Doðukan Kaan Bozkurt
//151220162049
#include "Cylindrical.h"
#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <string>
using namespace std;


Cylindrical::Cylindrical(string name_1,double rho1=0.0,double theta1=0.0,double z1=0.0)
{
	set_rho(rho1);
	set_theta(theta1);
	set_z(z1);
	setName(name_1);	
}
void Cylindrical::setName(string name_1) {
	name=name_1;
} 
void Cylindrical::set_rho(double p) {
	rho=p;
}

void Cylindrical::set_theta(double O){
	theta=O;
}

void Cylindrical::set_z(double Z){
	z=Z;
}

double Cylindrical::get_rho(void) {
	return rho;
}

double Cylindrical::get_theta(void) {
	return theta;
}

double Cylindrical::get_z(void) {
	return z;
}

string Cylindrical::getName(void){
	return name;
}
///
double Cylindrical::calculate_r(void){

	double cal_r;
	cal_r=sqrt(pow(get_rho(),2)+pow(get_z(),2));
	return cal_r;
}

double Cylindrical::calculate_theta(void){
	double cal_theta;
	cal_theta=get_theta();
	return cal_theta;
}

double Cylindrical::calculate_phi(void){
	double cal_phi;
	cal_phi=atan2(get_rho(),get_z());
	return cal_phi;
}
///
void Cylindrical::toSpherical(void){
	cout<< "Cylindrical object constructor: "<<getName()<<endl
	<<getName()<<"("<<calculate_r()<<","<<calculate_theta()<<","
	<<calculate_phi()<<")"<<endl;
}
		
Cylindrical::~Cylindrical()
{
	cout<< "Cylindrical object destructor#2"<<endl
	<<"Cylindrical object destructor#1"<<endl;
}
