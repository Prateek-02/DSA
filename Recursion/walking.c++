#include<iostream>
using namespace std;

void reachHome(int dest,int src){

    // base case
    if(src == dest){
        cout<<"Pahuch gayga"<<endl;
        return;
    }

    // recursive call
    reachHome(dest,src+1);
}

int main(){

    int dest = 10;
    int src = 1;

    reachHome(dest,src);

}