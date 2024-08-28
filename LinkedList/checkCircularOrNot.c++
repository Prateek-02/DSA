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

void print(Node* &tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    do{
        cout << temp->data << "->";
        temp = temp->next;
    } 
    while (temp != tail);

    cout << endl;
    
}

bool isCircularList(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head->next;

    while(temp !=NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }

    if(temp == NULL){
        return false;
    }

}


int main(){

    Node* tail = NULL;

    //empty list me insert kr re hai
    insertNode(tail,5,3);
    print(tail);
    cout<<"tail: "<<tail->data<<endl;

    insertNode(tail,3,5);
    print(tail);
    cout<<"tail: "<<tail->data<<endl;

    insertNode(tail,5,7);
    print(tail);
    cout<<"tail: "<<tail->data<<endl;

    insertNode(tail,5,6);
    print(tail);
    cout<<"tail: "<<tail->data<<endl;

    

    if(isCircularList(tail)){
        cout<<"Linked list is circular"<<endl;
    }
    else{
        cout<<"Linked list i not circular"<<endl;
    }

    return 0;
}