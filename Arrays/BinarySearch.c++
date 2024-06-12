#include<iostream>
using namespace std;

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

    int s = 0;
    int e = size-1;


    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            cout<<"Key found at index: "<<mid;
        }

        else if(arr[mid] < key){
            s = mid+1;
        }

        else{
            e = mid-1;
        }
    }
}
