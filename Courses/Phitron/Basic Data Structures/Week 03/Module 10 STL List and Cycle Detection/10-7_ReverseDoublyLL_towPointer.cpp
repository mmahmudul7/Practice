#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        Node *prev;
        int val;
        Node *next;

        Node(int val){
            this->prev = NULL;
            this->val = val;
            this->next = NULL;
        }
};

void print(Node *head){
    Node *tmp = head;
    while (tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void reverseDoubly(Node* head, Node* tail){
    Node* i = head;
    Node* j = tail;
    while (i != j && i->next != j){
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);// single value er jonno and
    // Node সংখ্যা জোড় হলে যেহেতু i->next = j কন্ডিশনে loop ব্রেক হবে তখন উপরের লুপে মাঝামাঝি দুটি Node এর ভ্যালু swap হবে না। এইক্ষেত্রে আমরা manually কাজটি করে নিলাম।
}

int main(){
    // Nodes
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;
    // connections
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    c->next = d;
    d->prev = c;

    // print
    reverseDoubly(head, tail);
    print(head);

    return 0;
}