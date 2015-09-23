#include <"Tree.h">

Node * Tree::getRoot() { return root; }

/*
 * Implement the methods below.
 */
Tree::Tree() {
    root = NULL;
}

void Tree::insert(int val) {

    Node * n = (Node *) malloc (sizeof(Node));
    
    if (root == NULL) {
        root->val = val;
        return;
    }

    Node * prev = NULL;
    Node * e = root;
    int r = 0;
    int l = 0;
    int m = 0;

    while (e != NULL) {
        r = 0;
        l = 0;
        m = 0;
        prev = e;
        if (val > e-> val) {
            e = e->right;
            r = 1;
        } else if (val < e->val) {
            e = e->left;
            l = 1;
        } else {
            e = e->mid;
            m = 1;
        }
    }

    n->val = val;
    if (r) {
        prev->right = n;
    } else if (l) {
        prev->left = n;
    } else if (m) {
        prev->mid = n;
    }
}

void Tree::remove(int val) {

}

void Tree::print() {
    Node * e = root;
    while (e != NULL) {
        printf("%i yolo\n", e->val);
        e = e->next;
    }
}

int main() {
    print();
}