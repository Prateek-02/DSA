#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Printing the array "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Printing Done..."<<endl;
}

int main(){
    //declare
    int number[15];

    //accessing an array
    cout<<"Value at 14 index "<<number[14]<<endl;

    // inintialising an array

    int second[3] = {5,7,11};
    cout<<"Value at 2 index "<<second[2]<<endl;

    int third[15] = {2,7};
    int n = 15;
    printArray(third,15);


    //initializing all locations with 0
    int fourth[10] = {0};
    n = 10;
    //printing the array
    printArray(fourth,10);


    //initialzing all locations with 1 [not possible with below line]
    int fifth[10] = {1};
    printArray(fifth,10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<fifthSize<<endl;

    // Types of array
    char ch[5] = {'a','b','c','d','e'};
    cout<< ch[3] << endl;

    for(int i=0;i<5;i++){
        cout<< ch[i] <<" ";
    }

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    cout<< endl << "Everything is fine" << endl << endl;
}