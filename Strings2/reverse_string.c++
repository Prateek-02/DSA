#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "prateek";
    int n = str.length();

    // for character arrays
    int i=0,j=n-1;

    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }

    cout<<str<<endl;


    reverse(str.begin(),str.end());  // STL string function
    cout<<str<<endl;
}