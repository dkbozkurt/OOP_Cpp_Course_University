//Dogukan Kaan Bozkurt

/*
	Virtual func ve without virtualing farki->
		Virtual degilse,
			cePtr = &bsce; deki cePtr->print(); base classin pointerýna gore islem yapar.
		Virtual ise;
			cePtr = &bsce; deki cePtr->print(); pointerin içeriðine bakar(objenin turune, yani bsce'nin func. göre hesap yapar).			
*/


#include <iostream>
#include <iomanip>
#include "CE.h"			// include definiton of class CE
#include "BSCE.h"
using namespace std;

int main(int argc, char** argv) {
	CE ce ("Dogukan Kaan","Bozkurt","151220162049",10000,.06);
	
	CE *cePtr=0;
	
	BSCE bsce("Kaan","Bozkurt","333-333-333",5000,.04,300);
	
	BSCE *bscePtr=0;
	
	cout << fixed << setprecision(2);
	
	ce.print();
	cout << "\n\n";
	bsce.print();
	
	cePtr=&ce;
	cout << "\n\n";
	cePtr->print();
	
	bscePtr=&bsce;
	cout << "\n\n";
	bscePtr->print();
	
	cePtr = &bsce;
	cout << "\n\n";
	cePtr->print();
	
	return 0;	
}
