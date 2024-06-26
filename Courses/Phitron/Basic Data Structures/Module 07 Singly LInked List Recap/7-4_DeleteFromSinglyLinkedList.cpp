#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
void print_linekd_list(Node *head){
    Node *tmp = head;
    cout << endl << "Your Link List is: ";
    while (tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int size(Node *head){
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
void delete_node(Node *head, int pos){
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++){
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;    
}
int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // কানেকশন 
    head->next = a;
    a->next = b; 
    b->next = c;
    c->next = d;
    print_linekd_list(head);
    cout <<"Current size is: "<< size(head) << endl;

    int pos;
    cout << "Enter the delete position please: ";
    cin >> pos;
    if(pos >= size(head)){
        cout << "Invalid Position" << endl;
    } else {
        delete_node(head, pos);
    }

    print_linekd_list(head);
    cout << "New size is: " << size(head) << endl;

    return 0;
}