//Dogukan Kaan Bozkurt
//151220162049

#include <iostream>
#include<cmath>
using namespace std;
///
class Number
{
	public:
		Number();
		void setNumber(){
			int num;
			cout << "Enter the number:" << endl;
			cin >> num;
			number = num;
		}
		int getNumber(){
			return number;
		}
		
	protected:
		int number;
};
///
class Square:public Number
{
	public:
		Square();
		int getSquare(){
			return pow(getNumber(),2);
		}
};
///
class Cube:public Number
{
	public:
		Cube();
		int getCube(){
			return pow(getNumber(),3);
		}

};
///
int main(int argc, char** argv){
	Square obj_squ;
	Cube obj_cube;
	int sqr,cube;
	
	obj_squ.setNumber();
	sqr = obj_squ.getSquare();
	///
	obj_cube.setNumber();
	cube = obj_cube.getCube();
	
	cout << "Square of " << obj_squ.getNumber() << " is : " << sqr << endl;
	cout << "Cube of " << obj_cube.getNumber() << " is : " << cube << endl;
	
	return 0;
}
