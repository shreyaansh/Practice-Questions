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
    int right = 0;
    int left = 0;
    int mid = 0;

    while (e != NULL) {
        right = 0;
        left = 0;
        mid = 0;
        prev = e;
        if (val > e-> val) {
            e = e->right;
            right = 1;
        } else if (val < e->val) {
            e = e->left;
            left = 1;
        } else {
            e = e->mid;
            mid = 1;
        }
    }

    n->val = val;
    if (right) {
        prev->right = n;
    } else if (left) {
        prev->left = n;
    } else if (mid) {
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
