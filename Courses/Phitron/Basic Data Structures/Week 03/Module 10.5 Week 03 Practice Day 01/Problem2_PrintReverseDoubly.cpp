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

void insert_at_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void list_reverse(Node *head, Node *tail){
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j){
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}

void print(Node *head){
    Node *tmp = head;
    while (tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }

    list_reverse(head, tail);
    print(head);

    return 0;
}