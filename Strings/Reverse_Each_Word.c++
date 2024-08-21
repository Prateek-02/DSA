// Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.

// Example:
// Input Sentence: "Hello, I am Aadil!"
// The expected output will print, ",olleH I ma !lidaA".


#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string str){
    int len = str.length();

    string res;
    string word;

    for(int i=0;i<len;i++){
        if(str[i] == ' '){
            reverse(word.begin(),word.end());
            res += word+' ';
            word =  "";
        }

        word+=str[i];

        if(str[i+1] == '\0'){
            reverse(word.begin(),word.end());
            res += word;
            word ="";
        }
    }
    return res;
}

int main(){

    string str;
    cout<<"Enter the string: ";
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;


    return 0;
}