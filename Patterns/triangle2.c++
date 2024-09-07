#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // reverse triangle
    for(int i=1; i<=n; i++){
        for(int j = i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    //floyd's triangle
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i ;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}