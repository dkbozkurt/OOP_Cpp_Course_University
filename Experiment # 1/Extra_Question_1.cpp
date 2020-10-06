#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;


/*Write a C++ program to calculate the mode of given data.
The mode is the value that occurs most freq among the elements of given data.

Generate data and store it in an array calculate the histogram of the data each bin represent the number of occurence in the data then print the histogram to the screen.
Lastly determine the mode of the data using the histogram.

*/

int main(){
	
	int n=0;
	int i=0,j=0,k=0;
	cout << "Enter the size of array:..." << endl;
	cin >> n ;
	int a[n]={};
	int x;
	
	srand(time(NULL));
	cout << "a[n] : " ; 
	for (i;i<n;i++){
		
		a[i]=rand()%10+1;
		cout << a[i] << " ";	
		
	}
	cout << endl;
	
	cout << "Value\t" << "Mod\t" << " Histogram" << endl;
	
	for(i=0;i<n;i++){	
		x=1;
	
		for (j=0;j<n;j++){
			
			if(i!=j){
				if(a[i]==a[j]){
					x++;
				}		
			}	
		}
		cout << a[i] <<"\t"<< x << "\t";
		for(k=0;k<x;k++){
			cout << "*" ;
		}
		cout << endl;	
			
	}
		
	return 0;
}

//Dogukan Kaan Bozkurt
