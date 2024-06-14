#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        int mid = s+(e-s)/2;

        if(arr[mid]>=arr[0]){
            s = mid+1;
        }

        else{
            e = mid;
        }
    }
    return s;
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pivot = getPivot(arr,n);

    cout<<"Index of pivot element is: "<<pivot;
}