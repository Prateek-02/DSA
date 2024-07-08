#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    
    //create 2-D array

    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333} };


    // taking input -> row wise input
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

/*
    // taking input -> col wise input
    for(int j=0;i<4;i++){
        for(int i=0;i<3;j++){
            cin>>arr[i][j];
        }
    }
*/

    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search: ";
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }

}