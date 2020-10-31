#include<iostream>
#include<iomanip>

#include "SalesPerson.h"

using namespace std;

SalesPerson::SalesPerson()	//Const. initializes elements of array sales to 0
{
	for(int i=0;i<monthsPerYear;++i)
		sales[i]=0.0;
	
}

void SalesPerson::getSalesFromUser(void){	//Get 12 sales figures from the user at the keyboard
	double salesFigure;
	
	for(int i=1;i<=monthsPerYear;++i){
		cout << "Enter sales amount for month "<< i << ":";
		cin >> salesFigure;
		setSales(i,salesFigure);
	}
}

//Set one fo the 12 monthly sales figures
void SalesPerson::setSales(int month,double amount){
	
	if(month >=1 && month<=monthsPerYear && amount>0)
		sales[month-1]=amount;
	else
		cout << "Invalid month or sales figure "<<endl;
}

void SalesPerson::printAnnualSales(void){	//Print total annual sales (with the help of utility func)
	cout << setprecision(2) << fixed << "\nThe total annual sales = "
	<<totalAnnualSales () << endl;	//call utility func.
}

double SalesPerson::totalAnnualSales(void){	//Private utility func to total annual sales
	
	double total=0.0;	//initialize total
	for(int i =0;i<monthsPerYear;++i){	//summarize sales results
		total+=sales[i];	//add month i sales to total
	}
	return total;
}


