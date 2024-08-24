// You are given a Singly Linked List of integers with a head pointer. 
// Every node of the Linked List has a value written on it.
// Now you have been given an integer value, 'K'. 
// Your task is to check whether a node with a value equal to 'K' exists in the given linked list.
// Return 1 if node exists else return 0.


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


int searchInLinkedList(Node* &head, int k) {
    // Write your code here.
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == k){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}



int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);

    int k;
    cout<<"Enter Value to search: ";
    cin>>k;

    cout<<searchInLinkedList(head,k)<<endl;

    print(head);


    return 0;
}