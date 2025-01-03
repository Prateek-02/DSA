// it stores all the values in sorted order

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
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    // iterate in the map
    
    for(auto it:mp){
        cout<<it.first<< "->" << it.second <<endl;
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

// time complexity :- storing and fetching - O(1) (Average and best case), O(N) ( Worst case) 
