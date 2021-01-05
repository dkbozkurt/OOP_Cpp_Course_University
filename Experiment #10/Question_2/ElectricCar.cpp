//Dogukan Kaan Bozkurt
//151220162049

#include "ElectricCar.h"
#include <iostream>

using namespace std;

ElectricCar::ElectricCar(const string& b, const string& m, int p, int x, int ct, const string& bt, int bc)
:Car(b,m,p,x)
{
	setChargingTime(ct);
	setBatteryType(bt);
	setBatteryCapacity(bc);
}

ElectricCar::setChargingTime(int ct){
	chargingTime=ct;
}

ElectricCar::setBatteryType(const string& bt){
	batteryType=bt;
}

ElectricCar::setBatteryCapacity(int bc){
	batteryCapacity=bc;
}

int ElectricCar::getChargingTime() const{
	return chargingTime;
}

string ElectricCar::getBatteryType() const{
	return batteryType;
}

int ElectricCar::getBatteryCapacity() const{
	return batteryCapacity;
}

ElectricCar::print() const{
	Car::print();
	cout << "Charging Time: " << getChargingTime() << " hour" << endl;
	cout << "Battery Type: " << getBatteryType() << endl;
	cout << "Battery Capacity: " << getBatteryCapacity() << " kW/h" << endl << endl;
}
