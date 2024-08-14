// Compile Time polymorphism:- Static polymorphism.
// Ability of a programming language to resolve a method or operator call at compile time.
// Key features:- Function overloading, Operator overloading.

#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello Prateek"<<endl;
    }

    int sayHello(char name){
        cout<<"Hello Prateek"<<endl;
        return 1;
    }

    void sayHello(string name){
        cout<<"Hello Prateek"<<endl;
    }
};

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout<< "output " << val2-val1 <<endl;

    }    

    void operator() (){
        cout<<"I am a bracket "<<this->a<<endl;
    }
};



int main(){

    A obj;
    obj.sayHello();

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();

    return 0;
}