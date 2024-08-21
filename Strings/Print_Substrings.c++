// For a given input string(str), write a function to print all the possible substrings.

// Substring
// A substring is a contiguous sequence of characters within a string. 
// Example: "cod" is a substring of "coding". Whereas "cdng" is not as the characters taken are not contiguous


#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

string printSubstrings(string str){
    int len = str.length();
    string temp;

    cout<<"All Substrings are: "<<endl;
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
            temp += str[j];
            cout<<temp<<endl;
        }
        temp.clear();
    }
}

int main() {
    string input;
    cout<<"Enter the String: ";
    getline(cin, input);
    printSubstrings(input);


    return 0;
}