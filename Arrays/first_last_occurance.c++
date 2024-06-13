#include<iostream>
using namespace std;

int firstOccr(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        cout<<mid<<endl;
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        // got to right part
        else if(arr[mid] < key){
            s = mid+1;
        }
        // go to left part
        else{
            e = mid-1;
        }
    }
    return ans;
}
int lastOccr(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        // got to right part
        else if(arr[mid] < key){
            s = mid+1;
        }
        // go to left part
        else{
            e = mid-1;
        }
    }
    return ans;
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

    int key;
    cout<<"Enter key: ";
    cin>>key;

    cout<<"First occurence of "<<key <<" is at index "<<firstOccr(arr,size,key)<<endl;
    cout<<"Last occurence of "<<key <<" is at index "<<lastOccr(arr,size,key);

}