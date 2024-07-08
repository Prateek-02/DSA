#include<iostream>
using namespace std;

// to print row wise
void printSumRow(int arr[][4],int row,int col){
    for(int row=0;row<3;row++){
        int sum = 0;
        for(int col=0;col<4;col++){
            sum += arr[row][col];
        }
        cout<<"Sum of row "<<row<<" is: "<<sum<<endl;
    }
    cout<<endl;
}

// to print col wise
void printSumCol(int arr[][4],int row,int col){
    for(int col=0;col<4;col++){
        int sum = 0;
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
        cout<<"Sum of col "<<col<<" is: "<<sum<<endl;
    }
}

int main(){
    int arr[3][4];

    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the array: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSumRow(arr,3,4);
    printSumCol(arr,3,4);

}