#include<iostream>
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

void inserAtPosition(Node* &head,Node* &tail,int position,int d){

    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }


    //inserting at last postion
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    // createing a node for d;

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

Node* ReverseLL(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }


    Node* prev = NULL;
    Node* curr = head;
    Node* next;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;

}

int main(){

    // created a new node
    Node* node1 = new Node(20);
    // cout<< node1->data<<endl;
    // cout<< node1->next<<endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,30);

    
    insertAtHead(head,40);


    insertAtTail(tail,15);


    inserAtPosition(head,tail,5,50);
    
    print(head); // prints the original list

    head = ReverseLL(head); // update head to the new head returned by ReverseLL

    print(head); // prints the reversed list

    return 0;
}



