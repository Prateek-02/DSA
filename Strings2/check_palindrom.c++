#include<bits/stdc++.h>
using namespace std;

bool isAlphaNum(char ch){
    if((ch >= 'a' && ch<='z') || (ch>='A' && ch <='Z') || (ch>='0' && ch<='9')){
        return true;
    }
    return false;
}

int main(){
    string s;
    getline(cin,s);

    int st = 0,end = s.length()-1;

    while(st<end){
        if(!isAlphaNum(s[st])){
            st++;
            continue;
        }
        if(!isAlphaNum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            cout<<"False";
            return 0;
        }
        st++;
        end--;
    }
    cout<<"True";
}