#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precomputaion
    int hash[n+1] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        //fetch
        cout<< number << ":" <<hash[number] << endl;

    }

    return 0;
}