#include<iostream>
using namespace std;

void print(int n){
    // base case
    if(n==0){
        return;
    }

    // print(n-1); // 1 To 5 

    cout<<n<<endl;

    // recursive call
    print(n-1); // 5 to 1
}

int main(){
    int n;
    cin>>n;
    cout<<endl;

    print(n);
}