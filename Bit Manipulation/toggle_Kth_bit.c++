#include<iostream>
using namespace std;

int toggleKthBit(int n,int k){
    int mask = 1;
    mask = (mask<<k);

    int ans = (n^mask);

    return ans;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int k;
    cout<<"Enter the position of bit: ";
    cin>>k;

    cout<<"Number after toggling kth bit: "<<toggleKthBit(n,k);

    return 0;
}
