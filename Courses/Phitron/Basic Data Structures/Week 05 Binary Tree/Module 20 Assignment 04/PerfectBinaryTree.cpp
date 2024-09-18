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

// bool perfectBinaryTree(Node *root){
//     if (root == NULL) return false;

//     if(root->left != NULL && root->right != NULL) return true;
    
//     if(root->left != NULL && root->right == NULL) return false;
//     if(root->left == NULL && root->right != NULL) return false;
//     if(root->left == NULL && root->right == NULL) return true;

//     bool l = perfectBinaryTree(root->left);
//     bool r = perfectBinaryTree(root->right);
//     if (l == true || r == true) return true;
//     return false;
// }

/*Total number of nodes = 2^maxDepth - 1*/

int numberOfNodes(Node *root) {
    if(root == NULL) return 0;
    int cnt = 1 + numberOfNodes(root->left) + numberOfNodes(root->right);
    return cnt;
}

int totalDepth(Node *root) {
    int cnt = 0;
    while (root != NULL) {
        cnt++;
        root = root->left;
    }
    return cnt;    
}

bool perfectBinaryTree(Node *root) {
    if(root == NULL) return true;
    int totalNodes = numberOfNodes(root);
    int depth = totalDepth(root);
    int newNodes = pow(2, depth) - 1;
    return totalNodes == newNodes;

    bool l = perfectBinaryTree(root->left);
    bool r = perfectBinaryTree(root->right);
    if (l == true || r == true) return true;
    else return false;
}

int main() {
    Node *root = input_tree();
    if (perfectBinaryTree(root)) cout << "YES";
    else cout << "NO";
    return 0;
}