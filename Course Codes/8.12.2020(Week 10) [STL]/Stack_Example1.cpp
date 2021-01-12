//Dogukan Kaan Bozkurt

#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

main()
{
	stack <int> stackInt;
	
	cout << "stackInt contains: ";
	for(int i=0;i<10;i++){
		
		stackInt.push(rand()%10);
		cout << stackInt.top() << " ";
	}
	
	cout << endl;
	
	while(!stackInt.empty()){
		cout << stackInt.top() << " ";
		stackInt.pop();
	}
}
