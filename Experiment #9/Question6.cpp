// Dogukan kaan Bozkurt
 
#include <iostream>
#include <iomanip>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

// define short name for map type used in this program
typedef map<int,pair<double,double> > Midd;		//pair varsa first second olur.

main()
{
	Midd map;
	
	double xCoord[6]={4.6,7.8,7.8,11.9,11.9,17.8};
	double yCoord[6]={5.7,10.2,2.1,10.2,2.1,5.7};
	
	for (int i=0;i<6;i++){
		pair<double,double> temp(xCoord[i],yCoord[i]);		//1 degeri icin iki farkli deger oldugu icin pair kullandik.
		map.insert(Midd::value_type( i+1, temp));
	}
	
	cout << "IDs\t\tx-coordinates\t\ty-coordinates" << endl;	
	for (Midd::const_iterator it=map.begin();it!= map.end();++it)	//forlarin ici hep boyle.
		cout << setw(3) << it->first << "\t\t" << setw(13) << it->second.first << "\t\t" << setw(13) << it->second.second << endl;
	
	int path[4]={1,2,4,6};
	double pathLenght=0.0;
	double dist;
	for (int i=0;i<3;i++){
		dist=sqrt(pow(map[path[i]].first-map[path[i+1]].first,2) + pow(map[path[i]].second-map[path[i+1]].second,2));
		pathLenght=pathLenght+dist;
		cout << setw(4) << map[path[i]].first << " " << setw(4) << map[path[i]].second << "---------> ";
		cout << setw(4) << map[path[i+1]].first << " " << setw(4) << map[path[i+1]].second << "      " << dist << endl;
	}

	cout << setw(42) << "------------" << endl;
	cout << setw(41) << pathLenght << endl;
}

