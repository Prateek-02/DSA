#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){

    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);  
        tail = newNode;
        newNode->next = newNode;
    }
    
    else{
        //assuming that the element is present in the list
        // non empty list

        Node* curr = tail;

        while(curr->data!=element){
            curr = curr->next;
        }

        // element found -> current is representing element

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }
}

void deleteNode(Node* &tail, int val){

    //empty list
    if(tail == NULL){
        cout<<"List is empty please check again"<<endl;
    }
    else{
        // non empty
        //assuming that "value is present in the LL"

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != val){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        if(tail == curr){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;



    }
}

void print(Node* &tail){
    Node* temp = tail;

    do
    {
       cout<< tail->data<<"->";
       tail = tail->next;
    } 
    while (tail!= temp);
    cout<<endl;
    
}


int main(){

    Node* tail = NULL;

    //empty list me insert kr re hai
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    deleteNode(tail,3);
    print(tail);



    return 0;
}