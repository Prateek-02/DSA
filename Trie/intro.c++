#include<iostream> 
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            this->data = ch;
            for(int i=0;i<26;i++){
                children[i] = NULL;
            }
            isTerminal = false;
        }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){

        //base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        //Assumption:- word will be in CAPS
        int idx = word[0] - 'A';
        TrieNode* child;

        //present
        if(root->children[idx]){
            child = root->children[idx];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->children[idx] = child;
        }

        //Recursion
        insertUtil(child,word.substr(1));

    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root,string word){
        //base case
        if(word.length() == 0){
            return root->isTerminal;
        }

        int idx = word[0] - 'A';
        TrieNode* child;

        //Present
        if(root->children[idx]){
            child = root->children[idx];
        }
        else{
            //absent
            return false;
        }

        //Recursion
        return searchUtil(child,word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root,word);
    }


};

int main(){

    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");

    cout<<"Present or Not: " << t->searchWord("TIM") << endl;

    return 0;
}