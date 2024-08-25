#include<iostream>
using namespace std;

class Node{
    public:
        Node* prev;
        int data;
        Node* next; 

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Traverse a LL
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

// Length of LL
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail, int d){

}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;

    print(head);
    cout<<"Length of Linked List: "<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);  
    cout<<"Length of Linked List: "<<getLength(head)<<endl;

    insertAtHead(head,13);
    print(head); 
    cout<<"Length of Linked List: "<<getLength(head)<<endl;

    insertAtHead(head,15);
    print(head);   
    cout<<"Length of Linked List: "<<getLength(head)<<endl;

    return 0;
}