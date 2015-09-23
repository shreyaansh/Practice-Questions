#include <"Tree.h">

Node * Tree::getRoot() { return root; }

/*
 * Implement the methods below.
 */
 Tree::Tree() {
     //Initialize the root to NULL
     root = NULL;
}

void Tree::insert(int val) {

    //Initialize a new Node and assign it the given value
    Node * n = (Node *) malloc (sizeof(Node));
    n->val = val;

    //Initializing its children to NULL
    n->left = n->right = n->mid = NULL;

    //Check if the root exists. If it doesn't, assign the value to the root
    if (root == NULL) {
        root = n;
        return;
    }

    Node * prev = NULL;
    Node * e = root;
    int right, left, mid;

    //Traversing the tree, finding out the perfect place to insert the value
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

    //Place found, updating the new node's parent
    if (right) {
        prev->right = n;
    } else if (left) {
        prev->left = n;
    } else if (mid) {
        prev->mid = n;
    }

}

void Tree::remove(int val) {
    Node * e = root;
    int flag = 0;

    //Traversing the tree, finding the element to delete
    while (e != NULL) {
        if (e->val == val) {
            flag = 1;
            break;
        } else if (val > e->val) {
            e = e->right;
        } else if (val < e->val) {
            e = e->left;
        } else {
            e = e->mid;
        }
    }

    //If element found, replace it with it's mid child (if available) or it's right child (if available) or it's left child (if available), in that order.
    if (flag == 1) {
        if (e->mid != NULL) {
            delete(e->mid);
            e->mid = NULL;
        } else if (e->right != NULL) {
            e->val = e->right->val;
            delete(e->right);
            e->right = NULL;
        } else if (e->left != NULL) {
            e->val = e->left->val;
            delete(e->left);
            e->left = NULL;
        }
    }
}

void Tree::print() {
    Node * e = root;
    while (e != NULL) {
        printf("%i yolo\n", e->val);
        e = e->next;
    }
}

int main() {
    //print();
}
