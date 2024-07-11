#include<iostream>
using namespace std;

int countPrimes(int n){

    int count = 0;

    bool prime[n+1];
    prime[0] = prime[1] = false;
    for(int i=2;i<n;i++){
        prime[i] = true;
    }

    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;

            for(int j = i*2;j<n;j=j+i){
                prime[j] = 0;
            }
        }
    }

    return count;
    
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int res = countPrimes(n);
    cout<<"No. of primes till n: "<<res<<endl;
}