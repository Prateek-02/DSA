#include<iostream>
using namespace std;

int main(){

    int arr[10] = {23,122,41,67};
    cout<<"address of 1st memeory block is: "<<arr<<endl;       // address
    cout<<arr[0]<<endl;
    cout<<"address of 1st memeory block is: "<<&arr[0]<<endl;   // address

    cout<<"4th "<<*arr<<endl;  // value
    cout<<"5th "<<*arr+1<<endl;  // value
    cout<<"6th "<<*(arr+1)<<endl;  // value
    cout<<"7th "<<arr[2]<<endl;  // value

    int i=3;
    cout<<i[arr]<<endl;



    return 0;
}