#ifndef CYLINDRICAL_H
#define CYLINDRICAL_H
//Doðukan Kaan Bozkurt
//151220162049

#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <string>
using namespace std;
class Cylindrical
{
	public:
		Cylindrical(string ,double ,double ,double );
		~Cylindrical();
		
		void set_rho(double);
		void set_theta(double);
		void set_z(double);
		void setName(string);
		
		double get_rho(void);
		double get_theta(void);
		double get_z(void);
		string getName(void);
		
		void toSpherical(void);
		
	private:
		double rho,theta,z;
		const string name;
		
		double calculate_r(void);
		double calculate_theta(void);
		double calculate_phi(void);
		
};

#endif
