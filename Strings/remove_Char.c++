// For a given string(str) and a character X, write a function to remove all the occurrences of X from the given string and return it.
// The input string will remain unchanged if the given character(X) doesn't exist in the input string.

#include<iostream>
using namespace std;

string removeAllOccurrencesOfChar(string input,char c){
    int len = input.length();
    string res;

    for(int i=0;i<len;i++){
        if(input[i] != c){
            res += input[i];
        }
    }
    return res;
}

int main(){

    string input;
    char c;
    cout<<"Enter the string: ";
    getline(cin,input);
    cout<<"Enter the character to remove: ";
    cin>>c;
    
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;


    return 0;
}