#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int n = 4;

    int ans[4];

    for(int i=0;i<n;i++){
        int prod = 1;
        for(int j=0;j<n;j++){
            if(i != j){
                prod *= arr[j];
            }
        }
        ans[i] = prod;
    }

    for(int i=0;i<n;i++){
        cout<< ans[i] <<" ";
    }
}