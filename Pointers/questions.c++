#include<iostream>
using namespace std;

int main(){

/*
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout<<first<<" "<<second<<endl;   // output-> (8 9)
*/

/*
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first << endl; // output-> 7
*/

/*
    int first = 8;
    int *p = &first;
    cout<< (*p)++ <<" ";
    cout<<first<<endl;  // output -> (8 9)
*/

/*
    int *p = 0;
    int first = 110;
    *p = first;   // segmentation fault
    cout<< *p <<endl;  // output -> segmentation fault
*/

/*
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout<< first << " " << second <<endl;   // output -> (11 13)
*/

/*
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<< *ptr << " " << f << " " << p <<endl;    //output -> (21.5  21.5  21.5) 
*/

/*
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;  // output -> (20  4)
*/

/*
    int arr[] = {11,21,13,14};
    cout<< *(arr) << " " << *(arr+1) << endl;   // output -> (11  21)
*/

/*
    int arr[6] = {11,12,31};
    cout<< arr << " " << &arr << endl;   // output -> (0x61fef8 0x61fef8)
*/

/*
    int arr[6] = {11,12,31};
    cout<< (arr + 1) << endl;    // output -> (0x61fefc)
*/

/*
    int arr[6] = {11,12,31};
    int *p = arr;
    cout << p[2] << endl;      // output -> (31)
*/

/*
    int arr[] = {11,12,13,14,15};
    cout << *(arr) << " " << *(arr+3);   // output -> (11 14)
*/


    


    return 0;
}