#include <iostream>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        this->data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            root->isTerminal = true;
            return;
        }

        int idx = word[0] - 'A';
        TrieNode* child;

        if (root->children[idx]) {
            child = root->children[idx];
        } else {
            child = new TrieNode(word[0]);
            root->children[idx] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            return root->isTerminal;
        }

        int idx = word[0] - 'A';
        TrieNode* child;

        if (root->children[idx]) {
            child = root->children[idx];
        } else {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word) {
        return searchUtil(root, word);
    }

    bool removeUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            root->isTerminal = false; // Unmark terminal node
            return true; // Indicates potential deletion
        }

        int idx = word[0] - 'A';
        TrieNode* child = root->children[idx];

        if (!child) return false; // Word not found

        bool shouldDeleteChild = removeUtil(child, word.substr(1));

        // If the child should be deleted, remove reference
        if (shouldDeleteChild) {
            // Check if child has any other children or isTerminal
            bool hasChildren = false;
            for (int i = 0; i < 26; i++) {
                if (child->children[i]) {
                    hasChildren = true;
                    break;
                }
            }

            if (!hasChildren && !child->isTerminal) {
                root->children[idx] = NULL;
                delete child;
            }
        }

        return false; // Parent should not be deleted
    }

    void removeWord(string word) {
        removeUtil(root, word);
    }
};

int main() {
    Trie* t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");

    cout << "Present or Not: " << t->searchWord("TIM") << endl;

    t->removeWord("DO");
    cout << "Present or Not: " << t->searchWord("DO") << endl; // Should be 0

    delete t; // Free memory
    return 0;
}
