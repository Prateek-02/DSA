#include<iostream>
using namespace std;

int main(){
    string str = "apna college"; // dynamic in nature because it can be resized in runtime
    cout<< str << endl;  

    str = "hello";
    cout<<str<<endl;

    string str1 = "hello";
    string str2 = "world";

    string str3 = str1 + str2; // concatenation
    cout<<str3<<endl;

    cout<<(str1 == str2) << endl; //comparision

    cout<<(str1<str2) << endl; //greater or less(It checks it lexographically means in dictionary order)
}