#include <iostream>
#include "SalesPerson.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	SalesPerson s;
	
	s.getSalesFromUser();
	s.printAnnualSales();
	
	return 0;
}
