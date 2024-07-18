#include<iostream>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char level;

    //default constructor
    Hero(){
        cout<<"Default Constructor Called"<<endl;
    }

    //Parameterized construtor
    Hero(int health, char level){
        // cout<<"this-> "<<this<<endl;
        this->health = health;
        this->level = level;
    }

    //copy constructor
    Hero(Hero& temp){
        cout<<"Copy Constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<level<<endl;
        cout<<health<<endl;
    }

    // getters and setters
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h ;
    }

    void setLevel(char l){
        level = l;
    }
};

int main(){

    Hero S(70,'C');
    S.print();

    //Copy constructor
    Hero R(S);
    R.print();



/*
    // Parameterized constructor
    // object created statically
    Hero ramesh(10,'A');
    // cout<<"Address of ramesh: "<<&ramesh<<endl;
    ramesh.print();


    //dynamically
    Hero *h = new Hero(20,'B');
    h->print();

*/


/*
    // Static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"Level: "<<a.level<<endl;
    cout<<"Health: "<<a.getHealth()<<endl;

    // Dynamic alloction
    Hero *b = new Hero();
    b->setHealth(70);
    b->setLevel('A');
    cout<<"Level: "<<(*b).level<<endl;
    cout<<"Health: "<<(*b).getHealth()<<endl;
    //or
    cout<<"Level: "<<b->level<<endl;
    cout<<"Health: "<<b->getHealth()<<endl;

*/


/*
    // creation of Object
    Hero ramesh;
    cout<<"Size of ramesh is: "<<sizeof(ramesh)<<endl;

    cout<<"Ramesh's health is: "<<ramesh.getHealth()<<endl;

    // use setter
    ramesh.setHealth(70);
    // ramesh.health = 70;
    ramesh.level = 'A';

    cout<< "Health is: "<<ramesh.getHealth()<<endl;
    cout<< "Level is: "<<ramesh.level<<endl;

    // cout<< "size: "<<sizeof(h1)<<endl;

*/


    return 0;
}