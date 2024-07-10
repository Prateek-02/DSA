#include<iostream>
using namespace std;

// Subarray with given sum

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[100];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s;
    cout<<"Enter sum of subarray to find: ";
    cin>>s;

    int i=0,j=0, st=-1,en=-1, sum = 0;

    while(j<n && sum+arr[j] <= s){
        sum += arr[j];
        j++;
    }

}