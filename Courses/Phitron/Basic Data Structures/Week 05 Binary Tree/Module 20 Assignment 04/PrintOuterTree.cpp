#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree() {
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty()) {
        // 1. ber kore ana holo
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push kora holo
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void print_right(Node *root) {
    if (root == NULL)
        return;
    if (root->left) {
        cout << root->left->val << " ";
        print_right(root->left);
    } else if (root->right) {
        cout << root->right->val << " ";
        print_right(root->right);
    }
}

void print_left(Node *root) {
    if (root == NULL)
        return;
    if (root->right) {
        print_left(root->right);
        cout << root->right->val << " ";
    } else if (root->left) {
        print_left(root->left);
        cout << root->left->val << " ";
    }
}

void print_r(Node *root) {
    if (root == NULL)
        return;
    if (root->left) {
        print_r(root->left);
        cout << root->left->val << " ";
    } else if (root->right) {
        print_r(root->right);
        cout << root->right->val << " ";
    }
}

void print_l(Node *root) {
    if (root == NULL)
        return;
    if (root->right) {
        cout << root->right->val << " ";
        print_l(root->right);
    } else if (root->left) {
        cout << root->left->val << " ";
        print_l(root->left);
    }
}

int main() {
    Node *root = input_tree();
    if (root->right && root->left) {
        print_r(root);
        cout << root->val << " ";
        print_l(root);
    } else if (root->right) {
        cout << root->val << " ";
        print_right(root);
    } else if (root->left) {
        print_left(root);
        cout << root->val << " ";
    } else {
        cout << root->val << " ";
    }
    return 0;
}