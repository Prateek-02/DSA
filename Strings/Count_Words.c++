// For a given input string(str), find and return the total number of words present in it.
// It is assumed that two words will have only a single space in between. Also, there wouldn't be any leading and trailing spaces in the given input string.


#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

int countWords(string str){
    int len = str.length();
    int count = 0;

    for(int i=0;i<=len;i++){
        if(str[i] == ' ' || str[i] == '\0'){
            count++;
        }
    }
    return count;
}


int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;


    return 0;
}