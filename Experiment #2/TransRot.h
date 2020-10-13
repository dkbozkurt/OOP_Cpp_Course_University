#ifndef TRANSROT_H
#define TRANSROT_H

#include<string>

using namespace std;

class TransRot
{
public:
	
	TransRot();		//constructure
	
	void setXYZ(double,double,double);
		
	void setX(double);
		
	void setY(double);
		
	void setZ(double);
		
	double getX(void);
			
	double getY(void);
	
	double getZ(void);
	
	void translateAlongX(double);
	
	void translateAlongY(double);
	
	void translateAlongZ(double);

	void rotateAroundX(double);
	
	void rotateAroundY(double);
	
	void rotateAroundZ(double);
	
	void printResult(void);
	
	string getOperationType (void);
	
	double getRadianFromDegree(double);	// Radian to Degree func.		
			
	void updateCoordinates(void);		
		
private:
	
	double x,y,z,newX,newY,newZ;
	string opType;
	
};

#endif
