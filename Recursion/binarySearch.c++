#include<iostream>
using namespace std;

bool binarySearch(int arr[],int s,int e,int key){

    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }



}

int main(){
    int arr[6] = {2,4,6,8,10,12};
    int size = 6;
    int s = 0;
    int e = size-1;
    int key;
    cout<<"Enter key: ";
    cin>>key;

    bool ans = binarySearch(arr,s,e,key);

    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present"<<endl;
    }
}