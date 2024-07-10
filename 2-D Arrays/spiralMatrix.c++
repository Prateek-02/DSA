#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;

    int m;
    cout<<"Enter no. of cols: ";
    cin>>m;



    int arr[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // spiral order print

    int count = 0;
    int total = n*m;
    int row_start = 0, row_end = n-1, col_start = 0, col_end = m-1;

    while(count<total){

        // print starting row
        for(int i = col_start; count<total && i<=col_end;i++){
            cout<<arr[row_start][i]<<" ";
            count++;
        }
        row_start++;

        // print ending column
        for(int i=row_start;count<total && i<=row_end;i++){
            cout<<arr[i][col_end]<<" ";
            count++;
        }
        col_end--;

        // print ending row
        for(int i=col_end;count<total && i>=col_start;i--){
            cout<<arr[row_end][i]<<" ";
            count++;
        }
        row_end--;

        // print starting col
        for(int i=row_end;count<total && i>=row_start;i--){
            cout<<arr[i][col_start]<<" ";
            count++;
        }
        col_start++;

    }
}