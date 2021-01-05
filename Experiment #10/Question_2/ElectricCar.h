//Dogukan Kaan Bozkurt
//151220162049

#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

class ElectricCar : public Car
{
	public:
		ElectricCar(const string& b, const string& m, int p, int x, int ct, const string& bt, int bc);
		setChargingTime(int);
		setBatteryType(const string&);
		setBatteryCapacity(int);
		int getChargingTime() const;
		string getBatteryType() const;
		int getBatteryCapacity() const;
		print() const;
	protected:
	private:
		int chargingTime,batteryCapacity;
		string batteryType;
};

#endif
