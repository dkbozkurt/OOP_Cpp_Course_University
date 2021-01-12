//Dogukan Kaan Bozkurt

#include <iostream>
#include <deque>
using namespace std;

typedef deque<double> mainc;

main(){
	
	//deque <double> values;
	mainc values;
	
	values.push_front(2.2);
	values.push_front(3.5);
	values.push_back(1.1);
	
	for(int i=0; i <values.size();i++)
		cout << values[i] << " ";
	
	values.pop_front();
	cout << "\nAfter pop_front, values contains: ";
	
	for(deque <double>::iterator it=values.begin(); it!=values.end(); it++){
		cout << *it << " ";
	}
	
	values[1]=5.4;
	cout << "\nAfter values[1] = 5.4, values contains: ";
	for(int i=0; i <values.size();i++)
		cout << values[i] << " ";
	
	return 0;
}
