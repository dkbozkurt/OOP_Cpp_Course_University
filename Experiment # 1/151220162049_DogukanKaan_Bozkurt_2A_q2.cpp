#include<iostream>

using namespace std;

int main(void){
	
	double i_position=0;
	double velocity=0;
	double f_position=0;
	double distance,time=0;
	
	cout << "Enter the velocity of the robot : ..." << endl;
	cin >> velocity;
	cout << "Enter the final position of the robot : ..." << endl;
	cin >> f_position;
	distance= f_position-i_position;
	time= distance / velocity;
	
	cout << "Travelled distance is " << distance << " meters.\nand elapsed time is " << time << " seconds."<< endl;
	
	return 0;
}
