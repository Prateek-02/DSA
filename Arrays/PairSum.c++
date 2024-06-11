#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;

    int s;
    cout<<"Enter sum value: ";
    cin>>s;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Pairs with sum value: "<<endl;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j] == s){
                cout<< arr[i] << " " << arr[j] << endl;
            }
        }
    }
}