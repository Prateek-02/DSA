#include<bits/stdc++.h>
using namespace std;

int main(){

    //creation
    unordered_map<string,int> mp;    // key - string , value - int

    //Insertion

    //1
    pair<string,int> p = make_pair("babbar",3);
    mp.insert(p);

    //2
    pair<string,int> p2("love",2);
    mp.insert(p2); 
    
    //3
    mp["mera"] = 1;
    mp["mera"] = 2;  // update the previous value


    //Searching
    cout<<mp["mera"]<<endl;
    cout<<mp.at("babbar")<<endl;

    // cout<<mp.at("unknown")<<endl; // it gives error:- out of range
    cout<<mp["unknown"]<<endl;   // it gives 0, because it creates a entry corresponding to 0
    cout<<mp.at("unknown")<<endl; // now it will also give 0 as an ouput because an entry has been created, which is now being fetched

    //Size
    cout<<"Size is: "<<mp.size()<<endl;

    //to check presence
    cout <<mp.count("bro")<<endl;
    cout <<mp.count("love")<<endl;

    //Erase
    mp.erase("love");
    cout<<"Size is: "<<mp.size()<<endl;


    //Traverse
    //1
    for(auto it:mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    //2 (iterator)
    unordered_map<string,int> :: iterator it = mp.begin();

    while(it != mp.end()){
        cout<< it->first <<" "<<it->second<<endl;
        it++;
    }




}