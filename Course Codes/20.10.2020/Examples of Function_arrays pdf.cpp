/*



*/

//Dogukan Kaan Bozkurt

#include<iostream>

using namespace std;

void useAutomaticVariable(void);
void useStaticVariable(void);

main(){
	
	useAutomaticVariable();
	useAutomaticVariable();
	useAutomaticVariable();
	
	cout <<endl;
	
	useStaticVariable();
	useStaticVariable();
	useStaticVariable();
	
}

void useAutomaticVariable(void){
	
	auto int x=10;

	//static : ilk func a girdiðinde int deðerini atar ama daha sonrasýndakilerde deðeri 0 almak yerine son haliyle býrakýr.
	
	cout << "x= "<< x << endl;
	
	x+=5;
}

void useStaticVariable(void){
	static int x=10;
	//static : ilk func a girdiðinde int deðerini atar ama daha sonrasýndakilerde deðeri 0 almak yerine son haliyle býrakýr.
	
	cout << "x= "<< x << endl;
	
	x+=5;
}



