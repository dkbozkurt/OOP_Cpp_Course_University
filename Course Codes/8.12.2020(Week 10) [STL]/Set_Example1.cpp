//Dogukan Kaan Bozkurt

#include <iostream>
#include <set>
using namespace std;

typedef set<double,less<double> > DoubleSet;

main()
{
	const int SIZE=5;
	double a[SIZE]={2.1,4.2,9.5,2.1,3.7};
	DoubleSet doubleSet(a,a+SIZE);
	
	pair<DoubleSet::const_iterator,bool> p;
	
	p=doubleSet.insert(13.8);
	cout << "\n\n" << *(p.first) << (p.second ? " was" : " was not") << " inserted";
	
	cout << "\ndoubleSet contains: ";
	for(DoubleSet::iterator it=doubleSet.begin();it!=doubleSet.end();it++)
		cout << *it << " ";
		
	p= doubleSet.insert(9.5);
	cout << "\n\n" << *(p.first) << (p.second ? " was" : " was not") << " inserted";
}
