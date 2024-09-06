#include<iostream>
using namespace std;

void printDsa(int n){
    if(n<=0){
        return;
    }
    cout<<"DSA ";
    printGfg(n-1);
}

int main(){
    int n;
    cin>>n;
    printDsa(n);
}