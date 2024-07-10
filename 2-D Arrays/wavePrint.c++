#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int col=0;col<m;col++){
        if(col&1){
            //odd index -> Bottom to Top
            for(int row = n-1; row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            // even index -> Top to Bottom
            for(int row=0;row<n;row++){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}