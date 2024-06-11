#include<iostream>
using namespace std;

void findDuplicate(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }

    for(int i=1;i<n;i++){
        ans = ans^i;
    }

    cout<<ans;
}

int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    findDuplicate(arr,size);
}