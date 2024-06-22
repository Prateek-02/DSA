#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Prateek");
    q.push("Raj");
    q.push("Sinha");

    cout<<"Size before pop: "<<q.size()<<endl;

    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<"First element: "<<q.front()<<endl;
    cout<<"Last element: "<<q.back()<<endl;

    cout<<"Size after pop: "<<q.size()<<endl;

    cout<<"Empty or not: "<<q.empty()<<endl;
}

