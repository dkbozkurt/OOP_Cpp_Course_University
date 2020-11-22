//Doðukan Kaan Bozkurt

#ifndef INCREMENT_H
#define INCREMENT_H
#include <iostream>
 using namespace std;
class Increment
{
	public:
		Increment(int c=0,int i=1) ; // Initial values must be declared in the .h
		~Increment();
		
		void addIncrement(void);
		void print(void) const;
		
	private:
		int count;
		//Const data member should be initialized with "member initializer"
		const int increment;
		
};

#endif
