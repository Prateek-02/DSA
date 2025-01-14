// Run Time polymorphism:- Dynamic polymorphism.
// Ability of a programming language to resolve a method or operator call at run time.
// Key features:- Function overriding.(Function should have same name as well as same arguments)
// It is possible only through inheritance.

#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};


int main(){

    Animal obj1;
    obj1.speak();

    Dog obj2;
    obj2.speak();

    return 0;
}