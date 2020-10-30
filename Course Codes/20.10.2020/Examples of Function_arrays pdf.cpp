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

	//static : ilk func a girdi�inde int de�erini atar ama daha sonras�ndakilerde de�eri 0 almak yerine son haliyle b�rak�r.
	
	cout << "x= "<< x << endl;
	
	x+=5;
}

void useStaticVariable(void){
	static int x=10;
	//static : ilk func a girdi�inde int de�erini atar ama daha sonras�ndakilerde de�eri 0 almak yerine son haliyle b�rak�r.
	
	cout << "x= "<< x << endl;
	
	x+=5;
}



