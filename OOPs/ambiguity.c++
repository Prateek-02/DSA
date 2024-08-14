#include<iostream>
using namespace std;

class A{
    public:
    void abc(){
        cout<<"I am A"<<endl;
    }
};

class B{
    public:
    void abc(){
        cout<<"I am B"<<endl;
    }
};

class C: public A, public B{

};



int main(){

    C obj;
    
    obj.A::abc();     // scope resolution operator is used to define which class funtion to use
    obj.B::abc();

    return 0;
}