#include<iostream>
using namespace std;
void reverse(string &s,int i,int j){
    // base case
    if(i>j){
        return;
    }

    swap(s[i],s[j]);
    i++,j--;

    // recursive call
    reverse(s,i,j);

}

int main(){
    string name = "Prateek";
    int s=0;
    int e = name.length()-1;

    reverse(name,s,e);

    cout<<name<<endl;

}