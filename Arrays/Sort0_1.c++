#include<iostream>
using namespace std;

void sortOne(int arr[],int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(arr[s] == 0){
            s++;
        }
        else if(arr[e] == 1){
            e--;
        }
        else{
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    sortOne(arr,size);
    printArray(arr,size);
    
}