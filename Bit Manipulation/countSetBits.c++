#include<iostream>
using namespace std;

int countBits(int n){
    int c = 0;
    while(n!=0){
        if(n&1==1){
            c++;
        }
        n = n>>1;
    }
    return c;

}


int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    cout<<countBits(n);

    return 0;
}