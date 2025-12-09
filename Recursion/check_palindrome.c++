#include<iostream>
using namespace std;

bool checkPalindrome(int i,string &s,int n){
    if(i >= n/2){
        return true;
    }

    if(s[i] != s[n-i-1]){
        return false;
    }

    return checkPalindrome(i+1,s,n);

}

int main(){
    string s;
    cin>>s;

    int n = s.length();
    cout<<checkPalindrome(0,s,n);
}