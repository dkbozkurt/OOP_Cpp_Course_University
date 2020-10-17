#include <iostream>
#include<string>
#include<math.h>
#include "dkUnits.h"

using namespace std;

int main(int argc, char** argv) {
	
	dkUnits f1;	

	double t;
	
	f1.p_out1();	//Introduction outputs.
	
	t=f1.input_f();		
	f1.setZ(t);		// z=m
	f1.iType();	//Type is decided.
	
	f1.p_out2();	//Introduction outputs.
	t=f1.input_f();	
	f1.setY(t);		//y=l
	
	f1.p_out3();	//Introduction outputs.
	t=f1.input_f();		
	f1.setX(t);		//x=k
	
	//All the x,y,z values are set.
	f1.d_c();	//Decision of the calculation and calculating the output value.

	f1.printfunc();	//Print func.
	
	return 0;	
}

