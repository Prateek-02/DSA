#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    public:
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node* root){
    //base case
    if(!root){
        return;
    }

    //recursive case
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    //base case
    if(!root){
        return;
    }

    //recursive case
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    //base case
    if(!root){
        return;
    }

    //recursive case
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){ // purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){   // queue me elements pade hue hai
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}


Node* insertIntoBST(Node* root, int d){
    //base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root->data){
        //right part me insert krna hai
        root->right = insertIntoBST(root->right,d);
    }
    else{
        //left part me insert krna hai
        root->left = insertIntoBST(root->left,d);
    }

    return root;
    
}

//find minimum value in BST
Node* minVal(Node* root){
    Node* temp = root;
    while(temp->left){
        temp = temp->left;
    }
    return temp;
}

//find maximum value in BST
Node* maxVal(Node* root){
    Node* temp = root;
    while(temp->right){
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root,int val){
    //base case
    if(!root){
        return root;
    }

    if(root->data == val){
        //0 child
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }


        //1 child

        //left child
        if(root->left && !root->right){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //right child
        if(!root->left && root->right){
            Node* temp = root->right;
            delete root;
            return temp;
        }


        //2 child
        if(root->left && root->right){
            int mini = minVal(root->right) -> data;
            root->data = mini;
            root->right = deleteFromBST(root->right,min);
            return root;
        }
    }
    else if(root->data > val){
        //left part me jaao
        root->left = deleteFromBST(root->left,val);
        return root;
    }
    else{
        //right part me jaao
        root->right = deleteFromBST(root->right,val);
        return root;
    }
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root,data);
        cin >> data;
    }

}



int main(){
    Node* root = NULL;

    cout<<"Enter data to create BST" << endl;
    takeInput(root);

    cout<<"Printing the BST: "<<endl;
    levelOrderTraversal(root);

    cout<<"Printing Inorder: ";
    inorder(root);
    cout<<endl;

    cout<<"Printing Preorder: ";
    preorder(root);
    cout<<endl;

    cout<<"Printing Postorder: ";
    postorder(root);
    cout<<endl;

    cout<<"Min value is: "<<minVal(root)->data<<endl;
    cout<<"Max value is: "<<maxVal(root)->data<<endl;

    return 0;
}