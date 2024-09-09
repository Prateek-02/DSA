#include<iostream>
using namespace std;

int removeLastSetBit(int n){
    int ans = (n&n-1);

    return ans;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Number after removing last set bit: "<<removeLastSetBit(n);
}