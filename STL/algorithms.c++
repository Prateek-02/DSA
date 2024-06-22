#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(3);
    v.push_back(6);

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"lower bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound-> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"Max is: "<<max(a,b)<<endl;
    cout<<"Min is: "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"After swapping: ";
    cout<<"a->"<<a<<" b->"<<b<<endl;

    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<"Reversed string: "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate: ";

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;


    sort(v.begin(),v.end());
    cout<<"After sorting: ";
    for(int i:v){
        cout<<i<<" ";
    }
}