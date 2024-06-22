#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Prateek");
    s.push("Raj");
    s.push("Sinha");


    cout<<"Before pop Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"After pop Top element: "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;

}