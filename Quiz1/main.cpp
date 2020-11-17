//Doðukan Kaan Bozkurt
//151220162049
#include "Cylindrical.h"
#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <string>
using namespace std;



int main(int argc, char** argv) {
	
	const Cylindrical point1("Cylindrical Point#1",3.,60.,4.);
	point1.toSpherical();
	
	Cylindrical point2("Cylindrical Point#2");
	point2.set_rho(10.);
	point2.set_theta(90.);
	point2.set_z(45.);
	point2.toSpherical();
	
	return 0;
}
