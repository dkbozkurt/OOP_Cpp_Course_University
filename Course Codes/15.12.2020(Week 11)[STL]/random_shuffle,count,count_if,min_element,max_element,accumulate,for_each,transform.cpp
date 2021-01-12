//Dogukan Kaan Bozkurt

#include <iostream>
#include <algorithm>
#include <numeric> //accumulate is in here
#include <vector>

using namespace std;

void printVector(vector<int> &);
bool greater9(int);
void outputSquare(int);
int calculateCube(int);

int main(int argc, char** argv) {
    const int SIZE = 10;
    int a[SIZE]={1,2,3,4,5,6,7,8,9,10};

    vector <int> v(a,a+SIZE);
    cout << "\nVector v before random_shuffle: ";
    printVector(v);

    random_shuffle(v.begin(),v.end());
    cout << "\nVector v after random_shuffle: ";
    printVector(v);

    int a2[SIZE] = {100,2,8,1,50,3,8,8,9,10};
    vector<int> v2(a2,a2+SIZE);
    cout << "\nVector v2 contains: ";
    printVector(v2);

    int result = count(v2.begin(),v2.end(),8);
    cout << "\nNumber of elements matching 8: " << result;

    result = count_if(v2.begin(),v2.end(),greater9);
    cout << "\nNumber of elements greater than 9: " << result;

    cout << "\nMinimum element in Vector v2 is: "
        << *(min_element(v2.begin(),v2.end()));

    cout << "\nMaximum element in Vector v2 is: "
        << *(max_element(v2.begin(),v2.end()));

    cout << "\nthe total of the elements in Vector v is: "
        << accumulate(v.begin(),v.end(),0);

    cout << "\nThe square of every integer in Vector v is:\n";
    for_each(v.begin(),v.end(),outputSquare);

    vector<int> cubes (SIZE);

    transform (v.begin(),v.end(),cubes.begin(),calculateCube);
    cout << "\nThe cube of every integer in Vector v is:\n";
    printVector(cubes);

    return 0;
}

bool greater9 (int x){
    return x>9;
}

void outputSquare( int x ){
    cout << x*x << " ";
}
int calculateCube(int x){
    return x*x*x;
}
void printVector(vector<int> &intvect){
    cout << endl;
    for(vector<int>::iterator it=intvect.begin();it<intvect.end();it++){
        cout << *it << " - ";
    }
}
