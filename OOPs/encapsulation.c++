/* Encapsulation:- Information hiding or Data hiding

 => All the functions and data members wraped under a single entity called Class.

 => Fully encapsulated class:- All the data members are marked private(used only in same class).

 => Advantage:- 1. Data hiding -> Security increases
                2. If we want, we can make class "read only"
                3. Code reusability
                4. Helps in unit testing
*/

#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;

    public:
    int getAge(){
        return this->age;
    }

};

int main(){
    Student first;
    cout<<"All right"<<endl;


    return 0;
}