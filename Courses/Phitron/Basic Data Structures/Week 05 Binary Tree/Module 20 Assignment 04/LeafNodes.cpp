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

void leafNodesDes(Node *root) {
    if (root == NULL) return;

    queue<Node *> q;
    queue<int> lq;

    q.push(root);

    while (!q.empty()) {
        Node *cur = q.front();
        q.pop();

        if (cur->left == NULL && cur->right == NULL)
            lq.push(cur->val);

        if (cur->left)
            q.push(cur->left);
        if (cur->right)
            q.push(cur->right);
    }
    
    vector<int> lv;
    while (!lq.empty()) {
        lv.push_back(lq.front());
        lq.pop();
    }

    sort(lv.begin(), lv.end(), greater<int>());

    for (int val : lv) {
        cout << val << " ";
    }
}

int main() {
    Node *root = input_tree();
    leafNodesDes(root);
    return 0;
}