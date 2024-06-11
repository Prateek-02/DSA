#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int size1 = 6;
    int arr1[100];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }

    int size2 = 5;
    int arr2[100];
    cout<<"Enter the elements of array2: ";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }

    reverse(arr1,size1);
    reverse(arr2,size2);

    printArray(arr1,size1);
    printArray(arr2,size2);

}