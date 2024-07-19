#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        Node* left;
        int val;
        Node* right;

        Node(int val){
            this->left = NULL;
            this->val = val;
            this->right = NULL;
        }
};

void preOrder(Node* root) {
	if (root == NULL) return;
	
	cout << root->val << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void postOrder(Node* root) {
	if (root == NULL) return;
	
	postOrder(root->left);
	postOrder(root->right);
	cout << root->val << " ";
}

void inOrder(Node* root) {
	if (root == NULL) return;
	
	inOrder(root->left);
	cout << root->val << " ";
	inOrder(root->right);
}


int main(){
    // Create nodes
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    // Connections
    a->left = b;
    a->right = c;

    b->left = d;
    c->right = e;
    
    // print
    cout << endl << "In Pre-Order: ";
    preOrder(a);
    cout << endl <<  "In Post-Order: ";
    postOrder(a);
    cout << endl << "In In-Order: ";
    inOrder(a);
    cout<< endl;
	
    return 0;
}