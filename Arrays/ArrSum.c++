#include<iostream>
using namespace std;

void printSum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }

    cout<<"Sum of all elements of array is: "<< sum <<endl;
}

int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int arr[100];
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    printSum(arr,size);
}
