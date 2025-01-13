#include<iostream>
using namespace std;

int main(){
    string str = "Hello World";

    // Normal For loop
    for(int i=0;i<str.length();i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;

    // For Each loop
    for(char ch:str){
        cout<<ch<<" ";
    }
    cout<<endl;

    
}