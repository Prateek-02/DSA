// You are given a string 'STR'. 
// You have to convert the first alphabet of each word in a string to UPPER CASE.
// For example:
// If the given string 'STR' = ”I am a student of the third year” so you have to transform this string to ”I Am A Student Of The Third Year"

#include<iostream>
using namespace std;

string convertStr(string str){
    int len = str.length();
    str[0] = toupper(str[0]);

    for(int i=0;i<len;i++){
        if(str[i] == ' ' && isalpha(str[i+1])){
            str[i+1] = toupper(str[i+1]);
        }
    }
    return str;
}

int main(){

    string str;
    cout<<"Enter String: ";
    getline(cin,str);

    cout<<"Converted string: "<< convertStr(str)<<endl;


    return 0;
}