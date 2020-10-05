#include<iostream>

using namespace std;

int main(){
	
	int a=0,b=0,c=0;
	int max=0;
	cout << "Enter the integer values for a ,b ,c :" << endl;	
	cin >> a >> b >> c ;
	
	max=a;
	
	if(max<b) {
		max=b;
		if(max<c){
			max=c;		
		}
	}
	else{
		if(max<c){
			max=c;		
		}
	}
	cout << max << endl;
	
	return 0;	
}
