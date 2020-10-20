#include<iostream>
#include<string>
#include<cmath>
#include<math.h>

#include "CCS.h"

using namespace std;

CCS::CCS(double a_1,double b_1,double c_1,double d_1,double e_1,double f_1,int g_1){
	
	setCs1_item1(a_1);
	setCs1_item2(b_1);
	setCs1_item3(c_1);
	setCs2_item1(d_1);
	setCs2_item2(e_1);
	setCs2_item3(f_1);
	setChoice(g_1);
	
}

void CCS::setCs1_item1(double a){
	cs1_item1=a;
}

void CCS::setCs1_item2(double b){
	cs1_item2=b;
}

void CCS::setCs1_item3(double c){
	cs1_item3=c;
}

void CCS::setCs2_item1(double d){
	cs2_item1=d;
}

void CCS::setCs2_item2(double e){
	cs2_item2=e;
}

void CCS::setCs2_item3(double f){
	cs2_item3=f;
}

void CCS::setChoice(int g){
	choice=g;
}

double CCS::getCs1_item1(void){
	return cs1_item1;
}

double CCS::getCs1_item2(void){
	return cs1_item2;
}

double CCS::getCs1_item3(void){
	return cs1_item3;
}

double CCS::getCs2_item1(void){
	return cs2_item1;
}

double CCS::getCs2_item2(void){
	return cs2_item2;
}

double CCS::getCs2_item3(void){
	return cs2_item3;
}

int CCS::getChoice(void){
	return choice;
}

void CCS::printMenu(void){
	int gg;
	cout << "****************************************"<<endl
	<<"1.Cartesian to Spherical"<<endl<<"2.Cartesian to Cylindrical"<<endl
	<<"3.Spherical to Cartesian"<<endl<<"4.Cylindrical to Cartesian"<<endl
	<<"5.Exit"<<endl<<"****************************************"<<endl;
	cout << "Enter your choice" << endl;
	cin >> gg;
			
	if(gg<=0 || gg>5){
		cout << "!! WARNING !! You choiced an invalid value.Please try again."
		<<endl<<endl;
		printMenu();
	}else{
		setChoice(gg); 
		// Hocaya sor eðer int gg atayip cin yapmak yerine direkt cin ile setChoice func calýþtýrýlabilir mi diye
		//cin >> setChoice(int gg) gibi	
	}
}

void CCS::setCoordinates(void){
	
	double ix1,ix2,ix3; //inputs for the functions.	
	if(choice==1){
		cout<<"Enter x, y and z coordiates"<<endl;
		
	}else if(choice==2){
		cout<<"Enter x, y and z coordiates"<<endl;
		
	}else if(choice==3){
		cout<<"Enter r, teta and phi coordiates"<<endl;
		
	}else if(choice==4){
		cout<<"Enter rho, phi and z coordiates"<<endl;
		
	}else{ //choice==5
		cout << "You selected to Exit. Press any key to exit..."<<endl;	
	}
	
	cin>>ix1;
	cin>>ix2;
	cin>>ix3;
	setCs1_item1(ix1);
	setCs1_item2(ix2);
	setCs1_item3(ix3);
	
}

void CCS::printCoordinates(void){
	
	if (choice==1){
		carToSph();
		conversionType= "Cartesian to Spherical";
		cout<< "P(" << getCs1_item1() <<","<<getCs1_item2() <<","
			<<getCs1_item3() << ")====="<<getConversionType()
			<<"========> PCON("<<getCs2_item1()<<","<<getDegreeFromRadian(getCs2_item2())
			<<","<<getDegreeFromRadian(getCs2_item3())<<")"<<endl;
	}else if(choice==2){
		carToCyl();
		conversionType= "Cartesian to Cylindrical";	
		cout<< "P(" << getCs1_item1() <<","<<getCs1_item2() <<","
			<<getCs1_item3() << ")====="<<getConversionType()
			<<"========> PCON("<<getCs2_item1()<<","<<getDegreeFromRadian(getCs2_item2())
			<<","<<getCs2_item3()<<")"<<endl;
	}else if(choice==3){
		sphToCar();
		conversionType= "Spherical to Cartesian";
		cout<< "P(" << getCs1_item1() <<","<<getCs1_item2() <<","
			<<getCs1_item3() << ")====="<<getConversionType()
			<<"========> PCON("<<getCs2_item1()<<","<<getCs2_item2()
			<<","<<getCs2_item3()<<")"<<endl;
	}else if(choice==4){
		cylToCar();
		conversionType= "Cylindrical to Cartesian";
		cout<< "P(" << getCs1_item1() <<","<<getCs1_item2() <<","
			<<getCs1_item3() << ")====="<<getConversionType()
			<<"========> PCON("<<getCs2_item1()<<","<<getCs2_item2()
			<<","<<getCs2_item3()<<")"<<endl;
	}else{
		;//	do not do anything.
	}
	
}

void CCS::carToSph(void){
	double r,teta,phi;
	r=sqrt((pow(cs1_item1,2)+pow(cs1_item2,2)+pow(cs1_item3,2)));
	setCs2_item1(r);
	teta=atan2(sqrt(pow(cs1_item1,2)+pow(cs1_item2,2)),cs1_item3);
	setCs2_item2(teta);
	phi=atan2(cs1_item2,cs1_item1);
	setCs2_item3(phi);
		
}
	///
void CCS::carToCyl(void){
	double rho,phi,z;
	rho=sqrt(pow(cs1_item1,2)+pow(cs1_item2,2));
	setCs2_item1(rho);
	phi=atan2(cs1_item2,cs1_item1);
	setCs2_item2(phi);
	z=cs1_item3;
	setCs2_item3(z);
		
}
	///
void CCS::sphToCar(void){
	double x,y,z;
	x=cs1_item1*sin(getRadianFromDegree(cs1_item2))*cos(getRadianFromDegree(cs1_item2));
	setCs2_item1(x);
	y=cs1_item1*sin(getRadianFromDegree(cs1_item2))*sin(getRadianFromDegree(cs1_item3));
	setCs2_item2(y);
	z=cs1_item1*cos(getRadianFromDegree(cs1_item3));
	setCs2_item3(z);
	
	}
	///
void CCS::cylToCar(void){
	double x,y,z;
	x=cs1_item1*cos(getRadianFromDegree(cs1_item2));
	setCs2_item1(x);
	y=cs1_item1*sin(getRadianFromDegree(cs1_item2));
	setCs2_item2(y);
	z=cs1_item3;
	setCs2_item3(z);
		
}
	///
double CCS::getRadianFromDegree(double angle){
	return angle*(M_PI/180);
}
	///
double CCS::getDegreeFromRadian(double angle){
	return angle*(180/M_PI);
}
	///
string CCS::getConversionType(void){
	return conversionType;
}

