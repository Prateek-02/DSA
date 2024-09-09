#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    cout<<"Before Swapping: ";
    cout<<a<<" "<<b<<endl;

    a = a^b;
    b = a^b;
    a = b^a;

    cout<<"After Swapping: ";
    cout<<a<<" "<<b;


}