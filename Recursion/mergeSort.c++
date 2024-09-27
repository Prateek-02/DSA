#include<iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex  = mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    //merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }
        else{
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
        }
    }
    while(index1 < len1){
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
    }

    while(index2 < len2){
        arr[mainArrayIndex] = second[index2];
        mainArrayIndex++;
        index2++;
    }

}

void mergeSort(int *arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }

    int mid = s+(e-s)/2;

    // left part sort
    mergeSort(arr,s,mid);

    //right part sort
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){
    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;
    int s = 0;
    int e = n-1;

    mergeSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}