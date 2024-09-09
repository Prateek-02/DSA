// Given a number ‘N’ and a number ‘K’. Return true if ‘K’th bit of number is set, else return false.

#include<iostream>
using namespace std;

bool isKthBitSet(int n, int k){
    int mask = 1;
    mask = (mask<<k);

    int ans = (n&mask);

    if(ans!=0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int k;
    cout<<"Enter the position of bit: ";
    cin>>k;

    cout<<isKthBitSet(n,k);

    return 0;
}
