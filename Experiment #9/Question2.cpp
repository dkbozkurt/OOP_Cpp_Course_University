// Dogukan kaan Bozkurt
 
#include <iostream>
#include <map>
using namespace std;

// define short name for map type used in this program
typedef map<int,int> Mid;	//Ayni keyden 2 adet olursa ve bunlari basmasini istersen map yerine multimap yazariz.

main()
{
	Mid team;		// declare the map team
	
	// insert eight value_type objects in team
	team.insert(Mid::value_type( 0, 20 ));	//pair<int,int>(0,20)
	team.insert(Mid::value_type( 12, 4 ));
	team.insert(Mid::value_type( 18, 9 ));	//map <int,int>::value_type...
	team.insert(Mid::value_type( 21, 4 ));
	team.insert(Mid::value_type( 22, 24 ));
	team.insert(Mid::value_type( 23, 8 )); 
	team.insert(Mid::value_type( 42, 4 ));
	team.insert(Mid::value_type( 44, 8 )); 
		
	cout << "team contains:\nNumber\tPoints\n";
	
	// use const_iterator to walk through elements of team
	for (Mid::const_iterator it=team.begin();it!= team.end();++it)
		cout << it->first << "\t" << it->second << endl;
		
	Mid::const_iterator result=team.find(12);
	cout << "\nPlayer " << result->first << "\tPoints " << result->second;
	
	cout << "\n\nUpper bound of 23: " 
		<< "\nPlayer " << (team.upper_bound(23))->first << "\tPoints " << (team.upper_bound(23))->second;
	cout << "\n\nLower bound of 18: " 
		<<  "\nPlayer " << (team.lower_bound(18))->first << "\tPoints " << (team.lower_bound(18))->second;
	
	team[44]=12;	// 	Update points of 44 with 12 
	cout << "\n\nAfter update operation, team contains:\nNumber\tPoints\n";
	for (Mid::const_iterator it=team.begin();it!= team.end();++it)
		cout << it->first << "\t" << it->second << endl;
		
	team[1]=10;		// Add a new player with number 1 and points 10
	cout << "\n\nAfter add operation, team contains:\nNumber\tPoints\n";
	for (Mid::const_iterator it=team.begin();it!= team.end();++it)
		cout << it->first << "\t" << it->second << endl;	
		
}

