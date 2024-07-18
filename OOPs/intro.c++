#include<iostream>
using namespace std;

class Hero{

    //properties
    public:
    int health;
    char level;

    void print(){
        cout<<level<<endl;
    }


};

int main(){

    // creation of Object
    Hero ramesh;

    ramesh.health = 70;
    ramesh.level = 'A';

    cout<< "Health is: "<<ramesh.health<<endl;
    cout<< "Level is: "<<ramesh.level<<endl;

    // cout<< "size: "<<sizeof(h1)<<endl;
    return 0;
}