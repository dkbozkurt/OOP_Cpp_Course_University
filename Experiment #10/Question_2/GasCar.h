//Dogukan Kaan Bozkurt
//151220162049

#ifndef GASCAR_H
#define GASCAR_H
#include <string>
#include <iostream>
#include "Car.h"

using namespace std;

class GasCar : public Car
{
	public:
		GasCar(const string& b, const string& m, int p, int x, const string& ft, int co_e, int ftv);
		setFuelType(const string&);
		setCO2Emission(int);
		setFuelTankVolume(int);
		string getFuelType() const;
		int getCO2Emission() const;
		int getFuelTankVolume() const;
		print() const;
	protected:
	private:
		string fuelType;
		int CO2Emission,fuelTankVolume;
};

#endif
