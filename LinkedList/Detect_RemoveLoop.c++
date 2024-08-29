#include<iostream>
#include<map>
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

// checing if a loop exists in list
bool detectLoop(Node* head){

    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp!=NULL){

        //cycle is present
        if(visited[temp] == true){
            cout<<"Present at: " << temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

// checing if a loop exists in list
Node* floydDetectLoop(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast=fast->next;
        }
        slow = slow->next;

        if(slow == fast){
            cout<<"Present at: "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

// getting the start of loop

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);

    Node* slow = head;

    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);

    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }

    temp->next = NULL;
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
    Node* node1 = new Node(20);

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;


    insertAtTail(tail,30);
    insertAtHead(head,40);
    insertAtTail(tail,15);
    inserAtPosition(head,tail,5,50);
    print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;


    tail->next = head->next;

    if(floydDetectLoop(head) != NULL){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"No cycle"<<endl;
    }

    // getting starting of loop
    cout<<"Starting at: "<<getStartingNode(head) -> data <<endl;

    // removing loop
    removeLoop(head);

    if(floydDetectLoop(head) != NULL){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"No cycle"<<endl;
    }
    print(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;


    return 0;
}
