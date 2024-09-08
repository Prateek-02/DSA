#include<iostream>
using namespace std;

int decToBin(int n){
    int ans = 0,pow =1;
    while(n!=0){
        int rem = n%2;
        ans += rem*pow;
        pow *= 10;
        n /= 2;
    }
    return ans;
}
int main(){

    for(int i=1;i<=10;i++){
        cout<<decToBin(i)<<endl;
    }
    
}
