//Dogukan Kaan Bozkurt
//151220162049

#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>

using namespace std;

class Car
{
	public:
		Car(const string& b, const string& m, int p, int x);
		setBrand(const string&);
		setModel(const string&);
		setPower(int);
		setMaxSpeed(int);
		string getBrand() const;
		string getModel() const;
		int getPower() const;
		int getMaxSpeed() const;
		print() const;
	protected:
		string model,brand;
		int power,maxSpeed;
	private:
};

#endif
