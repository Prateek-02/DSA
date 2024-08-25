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
    cout<<"NULL"<<endl;
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

void insertAtHead(Node* &head,Node* &tail,int d){

    Node* temp = new Node(d);
    // empty list
    if(head == NULL){
        head = temp;
        tail = temp;
    }

    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    
}

void insertAtTail(Node* &tail,Node* &head, int d){

    // empty list
    Node* temp = new Node(d);
    if(tail == NULL){
        tail = temp;
        head = temp;
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node* &head,Node* &tail, int d, int pos){
    
    // insert at head
    if(pos==1){
        insertAtHead(head,tail,d);
        return;
    }

    int cnt = 1;
    Node* temp = head;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }

    // insert at last position
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
   

}

int main(){

    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<<"Length of Linked List: "<<getLength(head)<<endl<<endl;

    insertAtHead(head,tail,11);
    print(head);  
    cout<<"Length of Linked List: "<<getLength(head)<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl<<endl;

    insertAtHead(head,tail,13);
    print(head); 
    cout<<"Length of Linked List: "<<getLength(head)<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl<<endl;

    insertAtHead(head,tail,15);
    print(head);   
    cout<<"Length of Linked List: "<<getLength(head)<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl<<endl;

    insertAtTail(tail,head,20);
    print(head);   
    cout<<"Length of Linked List: "<<getLength(head)<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl<<endl;

    insertAtPosition(head,tail,30,4);
    print(head);   
    cout<<"Length of Linked List: "<<getLength(head)<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl<<endl;

    insertAtPosition(head,tail,50,6);
    print(head);   
    cout<<"Length of Linked List: "<<getLength(head)<<endl;
    cout<<"Head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;



    return 0;
}