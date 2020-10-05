#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	double x;
	double y;
	
	while(x!=-999){
	cout << "Enter an input value for x ...(Enter -999 value for exit)" << endl;
	cin >> x ;
	if(x==-999){
		break;
	}
	if (x<-3) {
		y=(pow(x,3)+4)/(pow(x,2)); //kuvveti almak için pow func kullanýrýz.
		cout << y<<endl;
	}
	else if (-2<=x && x<0) {
		y=abs(pow(x,2)+3*x-10); //Mutlak almak için abs func kullanýrýz.
		cout << y<<endl;
	}
	else if (0<=x && x<4) {
		y=pow(x,2)-4*x;
		cout << y<<endl;
	}
	else{
		cout << "You entered a wrong value." <<endl;
	}
	
}
	return 0;
}
