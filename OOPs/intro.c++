#include<iostream>
#include <string.h>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char *name;
    char level;

    //default constructor
    Hero(){
        cout<<"Default Constructor Called"<<endl;
        name = new char[100];
    }

    //Parameterized construtor
    Hero(int health, char level){
        // cout<<"this-> "<<this<<endl;
        this->health = health;
        this->level = level;
    }

    //copy constructor
    // Hero(Hero& temp){
    //     cout<<"Copy Constructor called"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void print(){
        cout<<"[Name: "<<this->name<<",";
        cout<<"health: "<<this->health<<",";
        cout<<"level: "<<this->level<<"]"<<endl;
        cout<<endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main(){

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[8] = "Prateek";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor

    Hero hero2(hero1);
    hero2.print();

/*
    Hero S(70,'C');
    S.print();

    //Copy constructor
    Hero R(S);
    R.print();
*/


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