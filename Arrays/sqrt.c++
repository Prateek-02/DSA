#include<iostream>
using namespace std;

int findSqrt(int n){
    int s = 0;
    int e = n;
    long long int ans = -1;
    while(s<=e){
        long long int mid = (s+e)/2;
        long long int sq = mid*mid;

        if(sq==n){
            return mid;
        }
        if(sq<n){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int res = findSqrt(n);
    cout<<res;
}