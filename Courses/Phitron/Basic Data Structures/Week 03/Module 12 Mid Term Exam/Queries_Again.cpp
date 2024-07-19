#include<bits/stdc++.h>
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

int size(Node * head){
    Node * tmp = head;
    int cnt = 0;
    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_head(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    newNode->next->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_position(Node *head, Node *tail, int pos, int val){
    Node * newNode = new Node(val);
    if(pos == size(head) - 1){
        tail = newNode;
    }

    Node * tmp = head;
    for(int i = 1; i <= pos - 1; i++){
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

void print(Node *head){
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail){
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;

    while (q--){
        int x, v;
        cin >> x >> v;

        if(x == 0){
            insert_head(head, tail, v);
        } else if(x == size(head)){
            insert_at_tail(head, tail, v);
        } else if (x > size(head) || x < 0) {
            cout << "Invalid" << endl;
            continue;
        } else {
            insert_at_position(head, tail, x, v);
        }
        print(head);
        print_reverse(tail);
    }
    
    return 0;
}