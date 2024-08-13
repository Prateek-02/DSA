/*
    what? -> Properties inherited by one class from other class

    Human -> Parent class/Super class
      |
    Male  -> Child class/Sub-class

    Private data memeber of any class cannot be inherited

    Super class  |   Mode of inheritance  |  child class

    public     ->    public         ->      public
    public     ->    protected      ->      protected
    public     ->    private        ->      private

    protected     ->    public      ->      protected
    protected     ->    protected   ->      protected
    protected     ->    private     ->      private

    Private       ->    public      ->      N/A(Not Accessible)       
    Private       ->    protected   ->      N/A(Not Accessible)
    Private       ->    private     ->      N/A(Not Accessible)
*/

#include<iostream>
using namespace std;

class Human{
    public:
    int height;

    public:
    int weight;

    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }
};

class Male: /*public*/ /*protected*/ private Human{

    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }

    void setHeight(int h){
        this->height = h;
    }
};

int main(){

    Male m1;
    m1.setHeight(178);
    cout<<m1.getHeight()<<" cm"<<endl;


/*
    Male obj1;
    cout<< obj1.age <<endl;
    cout<< obj1.weight <<endl;
    cout<< obj1.height <<endl;

    cout<< obj1.color <<endl;

    obj1.setWeight(85);
    cout<<obj1.weight<<endl;
    obj1.sleep();
*/
    return 0;
}