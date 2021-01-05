//Dogukan Kaan Bozkurt
//151220162049

#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(const string& b, const string& m, int p, int x)
:brand(b),model(m),power(p),maxSpeed(x)
{
	cout << "Constructor of" << brand << " " << model << endl;
}

Car::setBrand(const string& b){
	brand=b;
}

Car::setModel(const string& m){
	model=m;
}

Car::setPower(int p){
	power=p;
}

Car::setMaxSpeed(int x){
	maxSpeed=x;
}

string Car::getBrand() const{
	return brand;
}

string Car::getModel() const{
	return model;
}

int Car::getPower() const{
	return power;
}

int Car::getMaxSpeed() const{
	return maxSpeed;
}

Car::print() const{
	cout << "Brand : " << getBrand() << endl;
	cout << "Model : " << getModel() << endl;
	cout << "Power : " << getPower() << " HP " << endl;
	cout << "Max Speed : " << getMaxSpeed() << "km/h" << endl;
}
