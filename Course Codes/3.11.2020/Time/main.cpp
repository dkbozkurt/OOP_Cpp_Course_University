//Doðukan Kaan Bozkurt

#include <iostream>
#include <stdexcept>
#include "Time.h"
using namespace std;

int main(int argc, char** argv) {
	
	Time t;
	
	int &hourRef=t.badSetHour(20);	//& olan her yerin karþýlýgýnda & almasý gerekir.
	
	cout << "Valid hour before modification:" << hourRef;
	hourRef=30;
	cout << "\nInvalid hour after modification: "<<t.getHour()<<endl;
	
	t.badSetHour(12)=74;
	
	cout<< "\n\n*******************************************************************************"<<endl
		<< "POOR PROGRAMMING PRATICE!!!!!!!\n"
		<<"t.badSetHour(12) as an lvalue, invalid hour: "
		<<t.getHour()
		<<"\n********************************************************************************"<<endl;
	
	return 0;
}

// &hourRef=t.func or variable;
// *hourPtr=&t.func or variable;
