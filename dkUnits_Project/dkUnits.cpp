#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
#include "dkUnits.h"

using namespace std;
///
dkUnits::dkUnits(){		//constructure of class	
	setX(0);
	setY(0);
	setZ(0);
	res_x=0.0;
}
		
void dkUnits::setX(double a){
	x=a;			
}

void dkUnits::setY(int b){
	y=b;			
}

void  dkUnits::setZ(int c){
	z=c;
}

double dkUnits::getX(void){	
	return x;
}

int dkUnits::getY(void){	
	return y;
}

int dkUnits::getZ(void){	
	return z;
}


///
double dkUnits::input_f(void){	
	double q;
	cin >> q;	
	return q;		
}

void dkUnits::iType(void){		
//We cant directly implement the calculation functions because when we get iType func.
//We won't know the x value.(So we can't calculate)
//Thats why we will need a new func. (i.e. d_c func.)	
	if(z==1){
		op_h.assign("litters");
	}else if(z==2){
		op_h.assign("grams");
	}else if(z==3){
		op_h.assign("Celcius");
	}else if(z==4){
		op_h.assign("meters");
	}else{
		op_h.assign("-UNVALID PREFIX VALUE-");
	}	
}

void dkUnits::d_c(void){
	if(z==1){
		togal();
	}else if(z==2){
		tolb();
	}else if(z==3){
		toF();
	}else if(z==4){
		toft();
	}else{
		cout<<"-UNVALID DECISION-";
	}
}


// if y is 0,it means default.
void dkUnits::togal(void){
 // default is : liters to gallons(uy=0). (uy is our SI prefix)
	double pre=0;
	pre=prefixConverter(y);
	res_x=(x*0.26417)*pre;
	op_t.assign("Gallons");	
}

void dkUnits::tolb(void){
	double pre=0;
	pre=prefixConverter(y);
	res_x=(x/453.59237)*pre;
	op_t.assign("Pounds");
	
}

void dkUnits::toF(void){	
	res_x=(x*9/5)+32;
	op_t.assign("Fahrenheit");	
}

void dkUnits::toft(void){
	double pre=0;	
	pre=prefixConverter(y);
	res_x=(x*3.2808)*pre;
	op_t.assign("Feet");
}
///
void dkUnits::p_out1(void){
	cout << " - - WELCOME TO VALUE CONVERTER - - " << endl<<endl;
	cout << "Please select the number of the type that you want to calculate: " << endl 
	<<"1- Liter to Gallons " <<endl << "2- Grams to Pounds " << endl
	<<"3- Celcius to Fahrenheit" <<endl<<"4- Meter to Feet/Inches"<<endl;	
}

void dkUnits::p_out2(void){
	if(z!=3){
		cout <<endl<< "Please select a prefix for input value from the following list: "<<endl;
		cout <<"Press 9 for Giga(G)..."<<endl<<"Press 6 for Mega(M)..."<<endl
		<<"Press 3 for Kilo(k)..."<<endl<<"Press 2 for Hecto(h)..."<<endl
		<<"Press 1 for Deka(da)..."<<endl<<"Press 0 for base unit..."<<endl
		<<"Press -1 for Deci(d)..."<<endl<<"Press -2 for Centi(c)..."<<endl
		<<"Press -3 for Milli(m)..."<<endl<<"Press -6 for Micro..."<<endl
		<<"Press -9 for Nano(n)..."<<endl;
	}else{
		cout << "Press 0 for base unit..."<<endl;	// !!! This part may be developed in the future.
	}		
}

void dkUnits::p_out3(void){
	//Last printing before than the calculation steps.
	//By that step client can see if the prefix and operation_head understood by the computer.
	cout <<endl<< "Enter the " << prefix() << Operation_head() << " value : ..."<<endl;		
}
double dkUnits::prefixConverter(int y_0){  //converting prefix to milli.	
	return pow(10,(y_0));
}

string dkUnits::prefix(void){
	if(y==9){
		prefixtitle.assign("Giga");
	}else if(y==6){
		prefixtitle.assign("Mega");
	}else if(y==3){
		prefixtitle.assign("Kilo");
	}else if(y==2){
		prefixtitle.assign("Hecto");
	}else if(y==1){
		prefixtitle.assign("Deka");
	}else if(y==0){
		prefixtitle.assign("");
	}else if(y==-1){
		prefixtitle.assign("Deci");
	}else if(y==-2){
		prefixtitle.assign("Centi");
	}else if(y==-3){
		prefixtitle.assign("Milli");
	}else if(y==-6){
		prefixtitle.assign("Centi");
	}else if(y==-9){
		prefixtitle.assign("Nano");
	}else{
		prefixtitle.assign("-UNVALID PREFIX VALUE-") ;
	}		
	return prefixtitle;
}

string dkUnits::Operation_head(void){
	return op_h;
}

string dkUnits::Operation_tail(void){
	return op_t;
}

void dkUnits::printfunc(void){
	cout << getX()<<" "<< prefix() <<" "<< Operation_head() << " is equals to "<< res_x 
	<<" "<< Operation_tail()<<"." << endl;	
}

