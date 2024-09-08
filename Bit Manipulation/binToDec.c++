#include<iostream>
using namespace std;

int binToDec(int n){
    int ans =0,pow = 1;

    while(n!=0){
        int rem = n%10;
        ans = rem*pow;
        pow *= 2;
        n/=10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<binToDec(n)<<endl;
}