// Given a number ‘N’ and a number ‘K’. Return true if ‘K’th bit of number is set, else return false.

#include<iostream>
using namespace std;

int SetKthBit(int n,int k){
    int mask = 1;
    mask = (mask<<2);

    int ans = (n|mask);

    return ans;


}


int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int k;
    cout<<"Enter the position of bit: ";
    cin>>k;

    cout<<SetKthBit(n,k);

    return 0;
}
