#include<iostream>
#include<string>
using namespace std;

string remove_subs(string str, string part){
    while(str.length() != 0 && str.find(part) < str.length() ){
        str.erase(str.find(part),part.length());
    }
    return str;
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;

    string part;
    cout<<"Enter substring: ";
    cin>>part;

    string result = remove_subs(s,part);
    cout<<"String after removing all occurences of substring: "<<result<<endl;
}