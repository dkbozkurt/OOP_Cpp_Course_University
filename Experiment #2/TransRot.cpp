#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include "TransRot.h"

using namespace std;

TransRot::TransRot(){		//constructure of class
	
	setXYZ(0.0,0.0,0.0);
	newX=0.0;
	newY=0.0;
	newZ=0.0;	
}

void TransRot::setXYZ(double a,double b,double c){
	setX(a);
	setY(b);
	setZ(c);	
}
		
void TransRot::setX(double k){
	x=k;			
}

void TransRot::setY(double l){
	y=l;			
}

void TransRot::setZ(double m){
	z=m;			
}
			
double TransRot::getX(void){
			
	return x;
}

double TransRot::getY(void){			
	return y;
}

double TransRot::getZ(void){		
	return z;
}
	
void TransRot::translateAlongX(double tx){			
	newX=x+tx;
	newY=y;
	newZ=z;
	opType=" TRANSLATE X "; //opType.assing("TRANSLATE X ");
}

void TransRot::translateAlongY(double ty){			
	newX=x;
	newY=y+ty;
	newZ=z;
	opType=" TRANSLATE Y ";
			
}

void TransRot::translateAlongZ(double tz){			
	newX=x;
	newY=y;
	newZ=z+tz;
	opType=" TRANSLATE Z ";
}
		
void TransRot::rotateAroundX(double rx){
	double tetax=0.0;
	tetax=getRadianFromDegree(rx);
	newX=x;
	newY=y*cos(tetax)-z*sin(tetax);
	newZ=y*sin(tetax)+z*cos(tetax);
	opType=" ROTATE X ";
}

void TransRot::rotateAroundY(double ry){
	double tetay=0.0;
	tetay=getRadianFromDegree(ry);
	newX=z*sin(tetay)+x*cos(tetay);
	newY=y;
	newZ=z*cos(tetay)-x*sin(tetay);
	opType=" ROTATE Y ";
}

void TransRot::rotateAroundZ(double rz){
	double tetaz=0.0;
	tetaz=getRadianFromDegree(rz);
	newX=x*cos(tetaz)-y*sin(tetaz);
	newY=x*sin(tetaz)+y*cos(tetaz);
	newZ=z;
	opType=" ROTATE Z ";
}
	
void TransRot::printResult(void){
	
	cout << "P(" << getX() << "," << getY() 
	<< "," << getZ() <<")====="<< getOperationType() 
	<< "========> PNew(" << newX << "," << newY << "," 
	<< newZ << ")" <<endl;
			  
}
string TransRot::getOperationType (void){
	return opType;
}
double TransRot::getRadianFromDegree(double rd){	// Radian to Degree func.		
	return rd*(M_PI)/180;
}
		
void TransRot::updateCoordinates(void){
	x=newX;
	y=newY;
	z=newZ;		
}
