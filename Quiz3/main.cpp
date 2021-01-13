//Dogukan Kaan Bozkurt

#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <stdexcept>
#include <vector>
#include <list>
#include <map>
#include <stack>
#include <algorithm>
#include <set>
using namespace std;

struct Point{
	double x,y,z;
	string order;
};

Point rand06Double(void);
int evaluate(Point);
int randommm(void);
vector<int> findIndices(map<string,double>&,vector <int>&, const string &);
int calculateCenters(Point&,map<string,double>&);

int main(){
vector<int> points(50,0);
	
generate(points.begin(),points.end(), rand06Double);
cout << "POINTS" << endl;	

for (int i=0;i<points.size();i++)
    cout << i << "(" << Point[i]->x << ","<<Point[i]->y << ","<<Point[i]->z << " ";
    
cout << endl;

vector<int> voxels(50,0);

generate(voxels.begin(),voxels.end(), randommm);
cout << "VOXELS" << endl;
for (int i=0;i<voxels.size();i++)
    cout << voxels[i] << " ";
cout << endl;   

evaluate(Points,voxels);


map<string,double,less<int>> voxelID;

findIndices(voxelID,voxels,"Voxel1");
findIndices(voxelID,voxels,"Voxel2");
findIndices(voxelID,voxels,"Voxel3");
findIndices(voxelID,voxels,"Voxel4");
findIndices(voxelID,voxels,"Voxel5");
findIndices(voxelID,voxels,"Voxel6");
findIndices(voxelID,voxels,"Voxel7");
findIndices(voxelID,voxels,"Voxel8");

for (int i=0;i<8;i++){
	
	cout << setw(4) << map[i].first << " " << setw(4) <<  map[i].second << " ";
	cout << setw(4) << map[i+1].first << " " << setw(4) <<  map[i+1].second << " " << endl;
}

calculateCenters(Point,voxelID);


	
	return 0;
}

Point rand06Double(void)
{
	Point p;
	p.x=(rand()%70)/10;
	p.y=(rand()%70)/10;
	p.z=(rand()%70)/10;
}


int randommm(void)
{
	return 1+rand()%8;
}

int evaluate(Point &p_, vector <int>&v)
{	
	vector<int>::iterator it = v.begin();
	while ((it!= v.end())	
	{
    if(0<=p_.x<=3 && 0<=p_.y<=3 && 0<=p_.z<=3){
    	return v=*it;
	}
	else if(0<=p_.x<=3 && 3<=p_.y<=6 && 0<=p_.z<=3){
		return v=*it;
	}
	else if(3<=p_.x<=6 && 0<=p_.y<=3 && 0<=p_.z<=3){
		return v=*it;
	}
	else if(3<=p_.x<=6 && 3<=p_.y<=6 && 0<=p_.z<=3){
		return v=*it;
	}
	else if(0<=p_.x<=3 && 0<=p_.y<=3 && 3<=p_.z<=6){
		return v=*it;
	}
	else if(0<=p_.x<=3 && 3<=p_.y<=6 && 3<=p_.z<=6){
		return v=*it;
	}
	else if(3<=p_.x<=6 && 0<=p_.y<=3 && 3<=p_.z<=6){
		return v=*it;
	}
	else if(3<=p_.x<=6 && 3<=p_.y<=6 && 3<=p_.z<=6){
		return v=*it;
	}
	}
	
}
vector<int> findIndices(map<string,double>&ID, vector <int>&vox,const string &name)	
{

	vector<int>::iterator it = vox.begin();
	while ((it= find_if(it, vox.end())) != v.end())	
	{
    	ID.insert(distance(vox.begin(), it));
    	it++;
	}
	return vox;
	
	cout << name << " Indices : " << endl;
	for (IntSet::iterator it=ID.begin();it!=ID.end();it++) 
		cout << setw(3) << *it << " ";
	cout << endl << endl;		
}

int calculateCenters(Point&p,map<string,double>&m)
{
	//middle point
}


