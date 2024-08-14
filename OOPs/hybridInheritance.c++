#include<iostream>
using namespace std;

class A{
    
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};


class B{

    public:
    void func2(){
        cout<<"Inside function 2"<<endl;
    }
};


class C:public A{

    public:
    void func3(){
        cout<<"Inside function 3"<<endl;
    }
};

class D:public A, public B{

    public:
    void func4(){
        cout<<"Inside function 4"<<endl;
    }
};


int main(){

    A obj1;
    obj1.func1();

    B obj2;
    obj2.func2();

    C obj3;
    obj3.func1();
    obj3.func3();

    D obj4;
    obj4.func1();
    obj4.func2();
    obj4.func4();
    



    return 0;
}