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

int size(Node *head){
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void inset_at_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void sameOrNot(Node *head1, Node *head2){
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    bool flag = 1;
    while (tmp1 != NULL){
        if(tmp1->val != tmp2->val){
            flag = 0;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}

int main(){
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val1, val2;

    while (true){
        cin >> val1;
        if (val1 == -1){
            break;
        }
        inset_at_tail(head1, tail1, val1);
    }
    while (true){
        cin >> val2;
        if (val2 == -1){
            break;
        }
        inset_at_tail(head2, tail2, val2);
    }

    if(size(head1) != size(head2)){
        cout << "NO";
    } else {
        sameOrNot(head1, head2);
    }
    
    return 0;
}