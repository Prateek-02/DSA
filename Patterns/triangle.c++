#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    // stars
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // numbers
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //characters
    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}