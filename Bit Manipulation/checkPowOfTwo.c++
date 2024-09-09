#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    int ans = (n&n-1);

    if(ans == 0){
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

    cout<<isPowerOfTwo(n)<<endl;
}