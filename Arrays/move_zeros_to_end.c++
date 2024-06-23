#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int nonZero = 0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[nonZero]);
            nonZero++;
        }
    }

    cout<<"After moving zeros to end: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}