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

    int target;
    cout<<"Enter target element to search: ";
    cin>>target;

    int s = 0;
    int e = n*m-1;

    while(s<=e){
        int mid = s+(e-s)/2;
        int element = arr[mid/m][mid%m];
        if(element == target){
            cout<<"Key found at: "<<mid/m<<","<<mid%m;
            return 0;
        }

        else if(element > target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    cout<<"Key not found";

}