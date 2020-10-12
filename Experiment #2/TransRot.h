#ifndef TRANSROT_H
#define TRANSROT_H

using namespace std;

class TransRot
{
	private:
		double x,y,z,newX,newY,newZ;
		string opType;
	public:
		
		void setXYZ(double a,double b,double c){
			x=a;
			y=b;
			z=c;	
		}
		void setX(double k){
			x=k;			
		}
		void setY(double l){
			y=l;			
		}
		void setZ(double m){
			z=m;			
		}	
		double getX(void){
			
			return x;
		}
		double getY(void){
			
			return y;
		}
		double getZ(void){
			
			return z;
		}	
		void translateAlongX(double tx){			
			newX=x+tx;
			newY=y;
			newZ=z;
			opType=" TRANSLATE X ";
		}
		void translateAlongY(double ty){			
			newX=x;
			newY=y+ty;
			newZ=z;
			opType=" TRANSLATE Y ";
			
		}
		void translateAlongZ(double tz){			
			newX=x;
			newY=y;
			newZ=z+tz;
			opType=" TRANSLATE Z ";
		}
		

		void rotateAroundX(double rx){
			double tetax=0.0;
			tetax=getRadianFromDegree(rx);
			newX=x;
			newY=y*cos(tetax)-z*sin(tetax);
			newZ=y*sin(tetax)+z*cos(tetax);
			opType=" ROTATE X ";
		}
		void rotateAroundY(double ry){
			double tetay=0.0;
			tetay=getRadianFromDegree(ry);
			newX=z*sin(tetay)+x*cos(tetay);
			newY=y;
			newZ=z*cos(tetay)-x*sin(tetay);
			opType=" ROTATE Y ";
		}
		void rotateAroundZ(double rz){
			double tetaz=0.0;
			tetaz=getRadianFromDegree(rz);
			newX=x*cos(tetaz)-y*sin(tetaz);
			newY=x*sin(tetaz)+y*cos(tetaz);
			newZ=z;
			opType=" ROTATE Z ";
		}	
		void printResult(void){
			
			cout << "P(" << getX() << "," << getY() << "," << getZ() <<")====="<< getOperationType() << "========> PNew(" << newX << "," << newY << "," << newZ << ")" <<endl;
			  
		}
		string getOperationType (void){
			return opType;
		}
		double getRadianFromDegree(double rd){	// Radian to Degree func.		
			return rd*(M_PI)/180;
		}
		
		void updateCoordinates(void){
			x=newX;
			y=newY;
			z=newZ;
			
		}
	
};

#endif
