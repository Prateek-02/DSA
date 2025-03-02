#include<bits/stdc++.h>
using namespace std;

int main(){

    //creation
    unordered_map<string,int> mp;    // key - string , value - int

    //insertion

    //1
    pair<string,int> p = make_pair("babbar",3);
    mp.insert(p);

    //2
    pair<string,int> p2("love",2);
    mp.insert(p2); 
    
    //3
    mp["mera"] = 1;
    mp["mera"] = 2;  // update the previous value


    //searching
    cout<<mp["mera"]<<endl;
    cout<<mp.at("babbar")<<endl;

    // cout<<mp.at("unknown")<<endl; // it gives error:- out of range
    cout<<mp["unknown"]<<endl;   // it gives 0, because it creates a entry 




}