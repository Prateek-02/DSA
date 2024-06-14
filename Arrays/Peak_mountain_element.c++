#include<iostream>
using namespace std;

int peakElement(int arr[],int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        int mid = s + (e-s)/2;

        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;   // it will return the index of the peak element 
    // return arr[s];     // it will return the peak element
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    int arr[100];
    cout<<"Enter elments: ";
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }

    int res = peakElement(arr,size);
    cout<<"Peak element of the array is at index: "<<res;
    
}