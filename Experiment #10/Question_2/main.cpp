//Dogukan Kaan Bozkurt
//151220162049

#include <iostream>
#include "Car.h"
#include "GasCar.h"
#include "ElectricCar.h"

using namespace std;
int main(int argc, char** argv) {
	GasCar car1("Volkswagen","Golf",115,198,"Diesel",109,50);
	car1.print();
	
	ElectricCar car2("Tesla", "Model S", 301, 193, 20, "Li-ion", 60);
	car2.print();
	return 0;
}
