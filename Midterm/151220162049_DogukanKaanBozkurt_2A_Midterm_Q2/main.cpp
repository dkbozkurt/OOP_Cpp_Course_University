#include <iostream>
#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <stdexcept>
#include "Surface.h"

using namespace std;

int main(int argc, char** argv) {
	const Normal n1("n1",2.0,-1.3,0.8);
	n1.print();
	const Normal n2("n2",0.4,2.1,-0.2);
	n2.print();
	const Normal n3("n3",0.0,8.1,3.6);
	n3.print();
	
	Surface s1(n1,n2,n3);
	s1.calculateAvgNormals();
	s1.print();
	
	const Normal n4("n4",3.0,10.2,4.4);
	n4.print();
	
	Surface s2(n1,n2,n4);
	s2.calculateAvgNormals();
	s2.print();
	
	if (s1.compare(s2))
		cout << "surfaces has same dominant direction" << endl;
	else
		cout << "surfaces has not same dominant direction" << endl;
	return 0;
}
