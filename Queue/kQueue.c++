#include<iostream>
using namespace std;

class kQueue{
    public:
        int n;
        int k;
        int *front;
        int *rear;
        int *arr;
        int freeSpot;
        int *next;

    public:
        kQueue(int n,int k){
            this->n = n;
            this->k = k;
            front = new int[k];
            rear = new int[k];
            for(int i=0;i<k;i++){
                front[i] = -1;
                rear[i] = -1;
            }
            next = new int[n];
            for(int i=0;i<n;i++){
                next[i] = i+1;
            }
            next[n-1] = -1;
            arr = new int[n];
            freeSpot = 0;
        }

        void enqueue(int data,int qn){
            // overflow
            if(freeSpot == -1){
                cout<<"No empty space is present";
                return;
            }

            //find first free index;
            int idx = freeSpot;
            
            //update freespot
            freeSpot = next[idx];

            //check whether first element
            if(front[qn-1] == -1){
                front[qn-1] = idx;
            }
            else{
                //link new element to the prev element
                next[rear[qn-1]] = idx;
            }

            //update next
            next[idx] = -1;

            //update rear
            rear[qn-1] = idx;

            //push element
            arr[idx] = data;
        }

        int dequeue(int qn){
            //underflow
            if(front[qn-1]==-1){
                cout<<"Queue underFlow"<<endl;
                return -1;
            }

            //find index to pop
            int idx = front[qn-1];

            //front ko aage badhao
            front[qn-1] = next[idx];

            //freeSlots ko manage karo
            next[idx] = freeSpot;

            freeSpot = idx;
            return arr[idx];
        }
};

int main(){

    kQueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;
    
    cout<<q.dequeue(1)<<endl;
    return 0;
}