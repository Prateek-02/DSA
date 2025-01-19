#include<bits/stdc++.h>
using namespace std;

int main(){
    //create a queue

    queue<int> q;

    q.push(11);
    cout<<"Front of q is: "<<q.front()<<endl;
    
    q.push(15);
    cout<<"Front of q is: "<<q.front()<<endl;

    q.push(13);
    cout<<"Front of q is: "<<q.front()<<endl;

    cout<<"Size of queue is-> " << q.size()<<endl;

    q.pop();
    cout<<"Size of queue is-> " << q.size()<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
}