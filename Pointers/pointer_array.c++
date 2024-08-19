#include<iostream>
using namespace std;

int main(){

    int arr[10] = {2,5,6};
    cout<<"address of 1st memeory block is: "<<arr<<endl;       // address
    cout<<arr[0]<<endl;
    cout<<"address of 1st memeory block is: "<<&arr[0]<<endl;   // address

    cout<<"4th "<<*arr<<endl;  // value(2)
    cout<<"5th "<<*arr+1<<endl;  // value(3)
    cout<<"6th "<<*(arr+1)<<endl;  // value(5)

    return 0;
}