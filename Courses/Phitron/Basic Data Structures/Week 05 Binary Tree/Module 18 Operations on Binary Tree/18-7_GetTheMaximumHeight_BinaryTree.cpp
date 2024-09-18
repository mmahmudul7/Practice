#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *left;
        Node *right;
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

Node *input_tree(){
    int val;
    cin >> val;
    Node *root;

    if(val == -1) root == NULL;
    else root = new Node(val);

    queue<Node *> q;
    if(root) q.push(root);

    while (!q.empty()){
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node * myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);        
    }
    return root;    
}

int maxHeight(Node *root){
    if(root == NULL) return 0; // for binary tree Base case is alway if root == NULL 

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}

int main(){
    Node *root = input_tree();
    int cnt = maxHeight(root);
    cout << cnt << endl;
    return 0;
}