#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter position from where array is to be rotated: ";
    cin>>k;

    int arr2[100];

    for(int i=0;i<n;i++){
        arr2[(i+k)%n] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = arr2[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}