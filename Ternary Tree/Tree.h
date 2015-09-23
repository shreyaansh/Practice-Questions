#include <stdio.h>
#include <stdlib.h>

struct Node {
    int val;
    Node *left, *mid, *right;
    Node(int val) { this->val = val; }
};

class Tree {
    public:
        Tree();
        void insert(int val);
        void remove(int val);
        void print();
        Node * getRoot();
    protected:
        Node *root;
};
