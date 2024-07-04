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

void PalindromeOrNot(Node *head, Node *tail){
    Node *i = head;
    Node *j = tail;
    bool flag = 1;
    while (i != j && i->next != j){
        if(i->val != j->val){
            flag = 0;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val){
        flag = 0;
    }

    if(flag)
        cout << "YES";
    else
        cout << "NO";
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

    PalindromeOrNot(head, tail);

    return 0;
}