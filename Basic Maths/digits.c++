#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n!=0){
        int lastDig = n%10;
        cout<<lastDig<<" ";
        n = n/10;
    }
}