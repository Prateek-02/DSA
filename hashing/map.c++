#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    //pre-compute
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    int q;
    cin>>q;

    while(q--){
        int number;
        cin>>number;

        //fetch;
        cout<< number << ":" << mp[number] << endl;;

    }
}