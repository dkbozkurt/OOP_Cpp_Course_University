#ifndef DKUNITS_H
#define DKUNITS_H
#include<string>
using namespace std;

class dkUnits{
public:
	
	dkUnits();		//Constructor
	void setX(double);	
	void setY(int);	
	void setZ(int);
	double getX(void);	
	int getY(void);
	int getZ(void); 	
	///
	double input_f(void);	//Client's inputs taking from input_f func.
	
	void iType(void);		//Type of the input parameter.
	void d_c(void);		//Decision and calculation func.
	
	void togal(void);		//Gallons func.
	void tolb(void);		//Pounds func.	
	void toF(void);			//Fahrenheit func.
	void toft(void);		//Feet func.	

	///
		
	void p_out1(void);		//Orientation func. for client.
	void p_out2(void);		//Orientation func. for client.
	void p_out3(void);		//Orientation func. for client.
	
	double prefixConverter(int);		//Converting prefix unit.	
	string prefix(void);		//Prefix decision func.	
	
	string Operation_head(void);		//Operation's head output.
	string Operation_tail(void);		//Operation's tail output.
	void printfunc(void);		//Print func.

private:
	
	double x;		//Input value
	int y;		//Prefix
	int z;		//Type of the calculation.
	double res_x;	//Output value
	string op_h,op_t,prefixtitle;	//cout head,tail,prefix
	
};

#endif

