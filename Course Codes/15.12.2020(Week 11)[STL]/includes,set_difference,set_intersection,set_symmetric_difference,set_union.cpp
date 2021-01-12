//Dogukan Kaan Bozkurt
#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int a[],int size);
void printArray(int a[],int *last);


int main(int argc, char** argv) {

    const int SIZE1 = 10,SIZE2=5 ,SIZE3 = 20;
    int a1[SIZE1]={1,2,3,4,5,6,7,8,9,10};
    int a2[SIZE2]={4,5,6,7,8};
    int a3[SIZE2]={4,5,6,11,15};

    cout << "a1 contains: ";
    printArray(a1,SIZE1);
    cout << "a2 contains: ";
    printArray(a2,SIZE2);
    cout << "a3 contains: ";
    printArray(a3,SIZE2);

    if(includes(a1,a1+SIZE1,a2,a2+SIZE2))
        cout << "\na1 includes a2";
    else
        cout << "\na1 does not include a2";

    if(includes(a1,a1+SIZE1,a3,a3+SIZE2))
        cout << "\na1 includes a3";
    else
        cout << "\na1 does not include a3";

    int difference[SIZE1];

    int *ptr = set_difference(a1,a1+SIZE1,a2,a2+SIZE2,difference);
    cout << "\nset_difference of a1 and a2 is: ";
    printArray(difference, ptr);

    int intersection[SIZE1];

    ptr = set_intersection(a1,a1+SIZE1,a2,a2+SIZE2,intersection);
    cout << "\nset_intersection of a1 and a2 is: ";
    printArray(intersection, ptr);

    int symmetric_difference[SIZE1+SIZE2];

    ptr = set_symmetric_difference(a1,a1+SIZE1,a3,a3+SIZE2,symmetric_difference);
    cout << "\nset_symmetric_difference of a1 and a3 is: ";
    printArray(symmetric_difference, ptr);

    int unionSet[SIZE3];

    ptr = set_union(a1,a1+SIZE1,a3,a3+SIZE2,unionSet);
    cout << "\nset_union of a1 and a3 is: ";
    printArray(unionSet,ptr);

    return 0;
}

void printArray(int a[],int size){
    cout << endl;
    for(int i=0;i<size;i++){
        cout << " " << a[i];
    }
    cout << endl;
}
void printArray(int a[],int *last){

    cout << endl;
    for(int i=0;&a[i]!=last;i++){
        cout << " " << a[i];
    }
    cout << endl;

}
