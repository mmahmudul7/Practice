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

int maxLevel(Node* root) {
    if (root == NULL) return 0;

    queue<Node*> q;
    q.push(root);
    int cnt = 0;

    while (!q.empty()) {
        int size = q.size();
        cnt++;

        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();

            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
    }
    return cnt;
}


void level_order(Node *root, int x) {
    if (root == NULL) return;

    queue<pair<Node*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        pair<Node*, int> p = q.front();
        Node* curr = p.first;
        int level = p.second;
        q.pop();

        if (level == x)
            cout << curr->val << " ";

        if (curr->left) q.push({curr->left, level + 1});
        if (curr->right) q.push({curr->right, level + 1});
    }
    
    cout << endl;
}

int main() {
    Node *root = input_tree();
    int x;
    cin >> x;
    int levelCnt = maxLevel(root);
    //cout << levelCnt;
    if (x >= levelCnt) {        
        cout << "Invalid";
    } else level_order(root, x);
    return 0;
}