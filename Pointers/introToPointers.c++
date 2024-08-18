#include<iostream>
using namespace std;

int main(){

    int num = 5;
    cout<< num <<endl;

    // address of Operator -> &

    cout<<"address of num is: "<<&num<<endl;

    int *ptr = &num;

    cout<<"address of num is: "<<ptr<<endl;
    cout<<"value of num is: "<<*ptr<<endl;


    double d = 4.2;
    double *p2 = &d;

    cout<<"address of double is: "<<p2<<endl;
    cout<<"value of double is : "<<*p2<<endl;


    return 0;
}