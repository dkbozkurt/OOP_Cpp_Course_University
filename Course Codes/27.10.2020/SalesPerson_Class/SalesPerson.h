#ifndef SALESPERSON_H
#define SALESPERSON_H

class SalesPerson
{
public:
	static const int monthsPerYear = 12;	//months in a year
	SalesPerson();	//Constructor
	void getSalesFromUser(void);	//Input sales from keyboard
	void setSales(int,double);		//Set sales for a specific month
	void printAnnualSales(void);	//Summarize and print sales
	
private:
	
	double totalAnnualSales(void);	//Prototype for utility func.
	double sales[monthsPerYear];	//12 monthly sales figures
};

#endif
