#include<iostream>
using namespace std;

void merge(int arr1[],int s1,int arr2[],int s2,int arr3[]){
    int j = 0;
    int i = 0;
    int k = 0;
    while(i<s1 && j<s2){
        if(arr1[i]<=arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<s1){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while(j<s2){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int ans[],int s3){
    for(int i=0;i<s3;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter s1: ";
    cin>>n;

    int arr1[100];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter s2: ";
    cin>>m;

    int arr2[100];
    for (int i = 0; i < m; i++){
        cin>>arr2[i];
    }


    int s3 = n+m;
    int arr3[100];
    
    merge(arr1,n,arr2,m,arr3);

    cout<<"Merged Sorted array: ";
    print(arr3,s3);
    
    
}