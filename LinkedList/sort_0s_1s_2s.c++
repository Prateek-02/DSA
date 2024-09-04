#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

// inserting at head
void insertAtHead(Node* &head, int d){
    // new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// inserting at tail
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// sortinng elements
Node* sortList(Node* &head){

    if(head == NULL){
        return NULL;
    }

    Node* temp = head;

    int zeroCnt = 0;
    int oneCnt = 0;
    int twoCnt = 0;

    while(temp != NULL){
        if(temp->data == 0){
            zeroCnt++;
        }
        else if(temp->data == 1){
            oneCnt++;
        }
        else{
            twoCnt++;
        }

        temp = temp->next;
    }

    temp = head;

    while(temp != NULL){
        if(zeroCnt != 0){
            temp->data = 0;
            zeroCnt--;
        }

        else if(oneCnt != 0){
            temp->data = 1;
            oneCnt--;
        }

        else{
            temp->data = 2;
            twoCnt--;
        }

        temp = temp->next;
    }
    return head;
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

int main(){

    // created a new node
    Node* node1 = new Node(0);

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,2);
    insertAtTail(tail,1);
    insertAtTail(tail,0);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    insertAtTail(tail,0);
    
    // calling sort function
    sortList(head);

    //printing list
    print(head);


    return 0;
}
