#include<iostream>
#include<unordered_map>
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

void insertAtHead(Node* &head, int d){
    // new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

Node* removeDuplicates(Node* &head){


    map<int,bool> visited;

    Node* curr = head;
    Node* prev = NULL;

    while(curr != NULL){
        if(visited[curr->data] == true){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }

        else{
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
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
    Node* node1 = new Node(10);
    // cout<< node1->data<<endl;
    // cout<< node1->next<<endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,20);
    insertAtTail(tail,40);
    
    removeDuplicates(head);
    print(head);


    return 0;
}
