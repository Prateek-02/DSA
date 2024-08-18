#include<iostream>
using namespace std;

int main(){
/*
    // pointer to int is created and pointing to some garbage address
    int *p;

    // null pointer
    int *p2 = 0;

    cout<<*p<<endl;  // Garabage value
    cout<<*p2<<endl; // Segmentation fault

*/


    int i = 5;
    // int *p = &i;
    int *p = 0;
    p = &i;

    cout<<p<<endl;
    cout<<*p<<endl;






    return 0;
}