#include<iostream>
using namespace std;

int main(void){
	
	int n=0;
	int temp=0;
	int i=0,res=0;
	int result=0;
	int a=0,b=0;
	cout << "Enter an integer value ..." <<endl;
	cin >> n; 
	
	temp=n;
	while(temp!=0){	
		temp=temp/10;		
		i++; //Kac haneli oldugunu bulduk.	
	}
	
	//temp=n;
	for(i;i>=0;i--){
		
		if (i%2==0){
		temp=n;
		temp=(temp%10)*2;			
		a=temp%10;
		temp=temp/10;
		b=temp%10;
		res=a+b;
		result+=res;
	}
		else {
		result+=(n%10);		
	}
	n=n/10;
}

	cout << result << endl;
	if(result%10==0){
		cout<<"The result is a valid number."<<endl;
	}
	else{
		cout<<"The result is not a valid number."<<endl;
	}
	
	return 0;
}
//Dogukan Kaan Bozkurt
