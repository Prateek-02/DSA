#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);
    l.push_front(3);
    l.push_back(4);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"After erase: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.pop_back();
    cout<<"After pop back: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.pop_front();
    cout<<"After pop front: ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of list: "<<l.size()<<endl;


}