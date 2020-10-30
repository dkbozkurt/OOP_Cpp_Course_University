#include <iostream>

using namespace std;

int boxVolume(int lenght=1,int width=1,int height=1);

int nmain(void){
	
	cout << "The default box volume is: " << boxVolume();
	cout << "\n\nThe volume of a box with lenght 10,\n"
	<<"width 1 and height 1 is: "<< boxVolume(10);
	cout << "\n\nThe volume of a box with lenght 10,\n"
	<<"width 5 and height 1 is: "<< boxVolume(10,5);
	cout << "\n\nThe volume of a box with lenght 10,\n"
	<<"width 5 and height 2 is: "<< boxVolume(10,5,2)<<endl;
	
	return 0;
}

int boxVolume(int lenght,int width,int height){
	
	return lenght*width*height;
}
