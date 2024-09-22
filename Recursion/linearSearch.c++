#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        linearSearch(arr+1,size-1,key);
    }
}

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    int key;
    cout<<"Enter key: ";
    cin>>key;

    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
}