//Dogukan Kaan Bozkurt
//151220162049

#include "GasCar.h"
#include <iostream>

using namespace std;

GasCar::GasCar(const string& b, const string& m, int p, int x, const string& ft, int co_e, int ftv)
:Car(b,m,p,x)
{
	setFuelType(ft);
	setCO2Emission(co_e);
	setFuelTankVolume(ftv);
}

GasCar::setFuelType(const string& ft){
	fuelType = ft;
}

GasCar::setCO2Emission(int co_e){
	CO2Emission = co_e;
}

GasCar::setFuelTankVolume(int ftv){
	fuelTankVolume = ftv;
}

string GasCar::getFuelType() const{
	return fuelType;
}

int GasCar::getCO2Emission() const{
	return CO2Emission;
}

int GasCar::getFuelTankVolume() const{
	return fuelTankVolume;
}

GasCar::print() const{
	Car::print();
	cout << "Fuel Type: " << getFuelType() << endl;
	cout << "CO2 Emission: " << getCO2Emission() << " g/km" << endl;
	cout << "Fuel Tank Volume: " << getFuelTankVolume() << " L" << endl << endl;
}

