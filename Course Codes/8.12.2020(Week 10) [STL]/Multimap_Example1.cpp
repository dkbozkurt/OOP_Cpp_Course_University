//Dogukan Kaan Bozkurt

#include <iostream>
#include <map>
using namespace std;
typedef multimap< int,double,less <int> > Mmid;

int main(int argc, char** argv) {
	
	Mmid pairs;
	
	cout << "There are currently" << pairs.count(15)
		<< "pairs with key 15 in the multimap\n";
	
	pairs.insert(Mmid::value_type(15,2.7));
	pairs.insert(Mmid::value_type(15,99.3));
	
	cout << "After inserts, there are " << pairs.count(15)
		<< "pairs with key 15 \n\n";
		
	pairs.insert(Mmid::value_type(30,111.11));
	pairs.insert(Mmid::value_type(10,22.22));
	pairs.insert(Mmid::value_type(25,33.333));
	pairs.insert(Mmid::value_type(20,9.345));
	pairs.insert(Mmid::value_type(5,77.54));
	
	cout << "Multimao pairs contains:\nKey\tValue\n";
	
	for(Mmid::const_iterator it=pairs.begin();it!=pairs.end();++it)
		cout << it->first << "\t" << it->second << endl;
		
	
	return 0;
}
