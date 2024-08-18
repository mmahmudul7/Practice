#include <bits/stdc++.h>
using namespace std;
class Node
{
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
}; // Binary Tree এর Node এর নীল নকশা তৈরি করা হলো

void level_order(Node *root) // আমরা শুরুতে ফাংশনে Root পাস করে কাজটি শুরু করবো 
{
    if (root == NULL) // যদি Root , Null হয় , তার মানে Tree টি খালি। অর্থাৎ , কোনো Node নেই
    {
        cout << "Tree nai" << endl; 
        return;
    }
    queue<Node *> q; // লাইনটি ঠিকমতো পরিচালনা করার জন্য Queue নিলাম  
    q.push(root); // এবং Queue এর সর্বপ্রথম সদস্য Root কে পুশ করে দিলাম
    
    // এরপর বাকি কাজটুকু আমরা Automated করে দিলাম 
    while (!q.empty()) // যতক্ষন Queue তে কেও থাকবে 
    {
        // 1. লাইনের শুরুতে যে আছে তাকে বের করে আনবো 
        Node *f = q.front(); // আমরা তাকে পিক করবো
        q.pop(); // এবং Queue থেকে বের করে আনবো 

        // 2. ঐ Node এর যাবতীয় কাজ গুলো করবো 
        cout << f->val << " "; // সেই Node টিকে প্রসেসিং করবো 

        // 3. এরপর পরবর্তীতে যারা আসবে তাদের লিস্ট নিয়ে পরের জন্য Queue তে পুশ করে দিবো 
         // এই ক্ষেত্রে ঐ Node এর Child গুলোকে Queue তে পুশ করে দিবো
        if (f->left) // left child থাকলে তাকে পুশ করবো 
            q.push(f->left);
        if (f->right) // right child থাকলে তাকে পুশ করবো 
            q.push(f->right);

        /* //Node gulo right theke left a print korte chaile
        // agee right er if coditon, left if condition er ager line a likhte hobe
        
        if (f->right) // right child থাকলে তাকে পুশ করবো 
            q.push(f->right);
        if (f->left) // left child থাকলে তাকে পুশ করবো 
            q.push(f->left);
        */
    }
}
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->right = i;

    level_order(root);
    return 0;
}