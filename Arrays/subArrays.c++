#include<iostream>
using namespace std;

// Sum of all subArrays

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[100];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    cout<<"Sum of each subarray: "<<endl;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
   
}