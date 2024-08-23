#include<iostream>
using namespace std;

void update(int **p2){
    // p2 = p2+1;
    // kuch change hoga? --> Nahi...

    // *p2 = *p2+1;
    // kuch change hoga?  --> Haa(p ka address)


    **p2 = **p2+1;
    //kuch change hoga?   --> Haa(i ki value +1 ho jaaegi -> 6)

}


int main(){

    int i=5;
    int *p = &i;
    int **p2 = &p;

/*
    cout<<"sab sahi chal raha hai"<<endl;

    cout<<"Printing p: "<<p<<endl;
    cout<<"Address of p: "<<&p<<endl;

    cout<<*p2<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
*/

/*
    cout<<"before "<< i << endl;
    cout<<"before "<< p << endl;
    cout<<"before "<< p2 << endl;
    update(p2);
    cout<<"after "<< i <<endl;
    cout<<"after "<< p <<endl;
    cout<<"after "<< p2 <<endl;
*/





    return 0;
}