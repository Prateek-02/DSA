#include<iostream>
using namespace std;

bool checkPalindrome(string s,int i,int j){
    // base case
    if(i>j){
        return true;
    }

    if(s[i]!= s[j]){
        return false;
    }
    else{
        //Recursive call
        return checkPalindrome(s,i+1,j-1);
    }
    
}

int main(){
    string str = "abcba";
    int s = 0;
    int e = str.length()-1;

    bool isPalindrome = checkPalindrome(str,s,e);

    if(isPalindrome){
        cout<<"It is Palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }
}