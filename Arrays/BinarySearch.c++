#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid =  s+(e-s)/2;
        if(arr[mid] == key){
            return mid;
        }
        

        else if(arr[mid] < key){
            s = mid+1;
        }

        else{
            e = mid-1;
        }
    }
    return 0;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    int arr[100];
    cout<<"Enter Elements in sorted order: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key to search: ";
    cin>>key;

    // int s = 0;
    // int e = size-1;

/*
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            cout<<"Key found at index: "<<mid;
            return 0;  // it will immediately exit the loop
        }
        

        else if(arr[mid] < key){
            s = mid+1;
        }

        else{
            e = mid-1;
        }
    }
    cout<<"Key not found";
*/

    int res = binarySearch(arr,size,key);
    if(res){
        cout<<"Key found at index: "<<res;
    }
    else{
        cout<<"Key not found";
    }
}
