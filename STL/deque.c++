#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_front(3);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    // d.pop_back();      // it will pop element from end
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // d.pop_front();    // it will pop element from start
    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<"Print 1st index Element-> "<<d.at(1)<<endl;

    cout<<"Front: "<<d.front()<<endl;
    cout<<"Last: "<<d.back()<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

    cout<<"Before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After earse: "<<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }
}