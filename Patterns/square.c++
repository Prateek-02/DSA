#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    // numbers
    for(int i=1;i<=n ;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //stars
    for(int i=1;i<=n ;i++){
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}