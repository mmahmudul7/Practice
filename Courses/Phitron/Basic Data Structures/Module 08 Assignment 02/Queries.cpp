#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};

void insert_head(Node *&head, int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int v){
    Node *newNode = new Node(v);
    if (head == NULL)    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_head(Node *&head){
    if (head == NULL){
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_from_position(Node *head, int pos){
    if (head == NULL) {
        return;
    }
    if (pos == 0) {
        delete_head(head);
        return;
    }
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++){
        if (tmp == NULL || tmp->next == NULL){
            return;
        }
        tmp = tmp->next;
    }
    if (tmp->next == NULL){
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void print_linked_list(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main(){
    int q;
    cin >> q;
    Node *head = NULL;
    while (q--){
        int x, v;
        cin >> x >> v;
            
        if (x == 0) {
            insert_head(head, v);
        } else if (x == 1) {
            insert_at_tail(head, v);
        } else if (x == 2) {
            if (v == 0){
                delete_head(head);
            } else {
                delete_from_position(head, v);
            }            
        }
        print_linked_list(head);
    }
    
    return 0;
}