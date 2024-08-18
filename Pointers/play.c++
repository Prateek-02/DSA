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


/*
    int i = 5;
    // int *p = &i;
    int *p = 0;
    p = &i;

    cout<<p<<endl;
    cout<<*p<<endl;

*/


    int num = 5;
    int a = num;
    cout<<"Num Before: " <<num<<endl;
    a++;
    cout<<"Num After: "<<num<<endl;

    int *p = &num;
    cout<<"Num Before: " <<num<<endl;
    (*p)++;  // value++;
    cout<<"Num After: "<<num<<endl;

    // copying a pointer
    int *q = p;
    cout<<p<<" - "<<q <<endl;
    cout<<*p<<" - "<<*q<<endl;

    // important concept

    int i = 3;
    int *t = &i;
    // cout<<(*t)++<<endl;
    (*t)++;
    cout<<*t<<endl;
    cout<< "before t "<<t<<endl;
    t = t+1;
    cout<<"after t "<<t<<endl;





    return 0;
}