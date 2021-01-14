//Dogukan Kaan Bozkurt
//151220162049

#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <stdexcept>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include <algorithm>
#include <set>
#include <fstream>
#include <string>
#include "Point.h"
using namespace std;

Point::Point(int _s)
{
	setSIZE(_s);
	setPX();
	setPX();
	setPX();
	generateRandCoords();
}

Point::~Point()
{
	cout << "Destructor of a point " << endl;
}

void Point::setSIZE(int s)
{
	SIZE=s;
}
int Point::getSIZE(void)
{
	return SIZE;
}
///

void Point::setPX(void){
	px(getSIZE(),0);
}
void Point::setPY(void){
	py(getSIZE(),0);
}
void Point::setPZ(void){
	pz(getSIZE(),0);
}
double Point::getPX(int x){
	return px.at(x);		
}

double Point::getPY(int y){
	return py.at(y);
}

double Point::getPZ(int z){
	return pz.at(z);
}
///
void Point::setclosest_point(int cp){
	closest_point=cp;
}

int Point::getclosest_point(void){
	return closest_point;
}
void Point::setclosest_point2(int cp){
	closest_point2=cp;
}

int Point::getclosest_point2(void){
	return closest_point2;
}
///
void Point::setNX(double x_){
	nx.push_back(x_);
}
void Point::setNY(double y_){
	ny.push_back(y_);
}
void Point::setNZ(double z_){
	nz.push_back(z_);
}
double Point::getNX(int x){
	return nx.at(x);		
}

double Point::getNY(int y){
	return ny.at(y);
}

double Point::getNZ(int z){
	return nz.at(z);
}
///
void Point::setAX(double x_){
	ax.push_back(x_);
}
void Point::setAY(double y_){
	ay.push_back(y_);
}
void Point::setAZ(double z_){
	az.push_back(z_);
}
///

void Point::generateRandCoords(){
	
	generate(px.begin(),px.end(),randgen('x'));
	generate(py.begin(),py.end(),randgen('y'));
	generate(pz.begin(),pz.end(),randgen('z'));	
}

double Point::randgen(char *e){
		
	if(e=='x'){
		return ((1+rand()%3000)-1500)/1000;
	}
	else if(e=='y'){
		return ((1+rand()%5000)-2500)/1000;
	}
	else if(e=='z'){
		return ((1+rand()%2000)-1000)/1000;
	}
}

void Point::printPoints(void)
{
	for(int i=0;i<getSIZE();i++){
		cout << "Point" << i << "\tX= " << getPX(i) << "\tY= " << getPY(i)
			 << "\tZ= " << getPZ(i) << endl;
	}
}

void Point::calculateNormal(int _index,int c1,int c2){
	
	new int tempx=0,tempy=0,tempz=0;
	
	tempx= (((getPY(c1)-getPY(_index))*(getPZ(c2)-getPZ(_index)))-((getPZ(c1)-getPZ(_index))*(getPY(c2)-getPY(_index))));
	tempy= (((getPZ(c1)-getPZ(_index))*(getPX(c2)-getPX(_index)))-((getPX(c1)-getPX(_index))*(getPZ(c2)-getPZ(_index))));
	tempz= (((getPX(c1)-getPX(_index))*(getPY(c2)-getPY(_index)))-((getPY(c1)-getPY(_index))*(getPX(c2)-getPX(_index))));
	
	setNX(tempx);
	setNY(tempy);
	setNZ(tempz);
	
	delete tempx,tempy,tempz;
	
}

void Point::NeighborPoint(void){
	
	int focus_point=0;
	for(int base_point=0;base_point<getSIZE();base_point++){	
		if(focus_point==0)
			setclosest_point(1),setclosest_point2(1);
		else
			setclosest_point(0),setclosest_point2(0);
		for(focus_point=0;focus_point<getSIZE();focus_point++){
			if(base_point!=focus_point && ppDistance(base_point,getclosest_point())>ppDistance(base_point,focus_point))
				setclosest_point(focus_point);		
		}
		for(focus_point=0;focus_point<getSIZE();focus_point++){
			if(base_point!=focus_point  && getclosest_point2()!=getclosest_point() && ppDistance(base_point,getclosest_point2())>ppDistance(base_point,focus_point))
				setclosest_point2(focus_point);		
		}
		calculateNormal(base_point,getclosest_point(),getclosest_point2());
		calculateAngle(base_point,getNZ(base_point),getNY(base_point),getNZ(base_point));
	}
}

double Point::ppDistance(int i,int j)
{
	distance= sqrt(pow(getXCoord(i)-getXCoord(j),2)+pow(getYCoord(i)-getYCoord(j),2)+pow(getZCoord(i)-getZCoord(j),2));
	return distance;
}

void Point::printPN()
{
	cout << "      " << " X" << "  Y" << "  Z" << "  nX" << "  nY" << "  nZ" << endl;
	for(int i=0;i<getSIZE();i++){
		cout <<"Point"<<i<<" "<< getPX(i) <<"  "<< getPY(i)<<"  " << getPZ(i)<<"  " 
			 << getNX(i)<<"  " << getNY(i)<<"  "<< getNZ(i) << endl;
	}	
}

double Point::calculateAngle(int base_p,double _nx,double _ny,double _nz){
	
	setAX(base_p)=acos(_nx/(sqrt(pow(_nx,2)+pow(_ny,2)+pow(_nz,2))))*(180/M_PI);
	setAY(base_p)=acos(_ny/(sqrt(pow(_nx,2)+pow(_ny,2)+pow(_nz,2))))*(180/M_PI);
	setAZ(base_p)=acos(_nz/(sqrt(pow(_nx,2)+pow(_ny,2)+pow(_nz,2))))*(180/M_PI);
	
}

istream&operator>>(istream &input,Point &a)	
{
	for(int i=0;i<a.size;++i)
		input >> a.ptr[i];
		
	return input;
}

ostream&operator<<(ostream &output,const Point &a)
{
	int i;
	
	for(i=0;i<a.size;++i){
		output << setw(12) << a.ptr[i];
		
		if((i+1)%4 == 0)
			output << endl;
	}
	
	if (i%4 !=0)
		output << endl;

	return output;
}

