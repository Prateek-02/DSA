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

    // reverse triangle(character)
    for(int i=1; i<=n; i++){
    char c = 'A' + i - 1;
        for(int j = i; j>=1; j--){
            cout<<c<<" ";
            c--;
        }
        c++;
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
    cout<<endl;

    //floyd's triangle(character)
    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=i ;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    cout<<endl;

    //inverted triangle
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j = 0;j<n-i;j++){
            cout<<(i+1);
        }

        cout<<endl;
    }
}