#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }

    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
}