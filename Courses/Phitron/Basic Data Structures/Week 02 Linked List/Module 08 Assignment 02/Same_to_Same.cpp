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
void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
// void print_linked_list(Node *head){
//     Node *tmp = head;
//     while (tmp != NULL){
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;    
// }
int size(Node *head){
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;    
}
bool size_check(Node* head1, Node* head2) {
    return size(head1) != size(head2);
}
void same_to_same(Node *head1, Node *head2){
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    bool flag = true;
    while (tmp1 != NULL){
        if(tmp1->val != tmp2->val){
            flag = false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if(flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main(){
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val1, val2;
    while (true){
        cin >> val1;
        if(val1 == -1) break;
        
        insert_tail(head1, tail1, val1);
    }
    while (true){
        cin >> val2;
        if(val2 == -1) break;
        
        insert_tail(head2, tail2, val2);
    }
    // print_linked_list(head1);    
    // print_linked_list(head2); 
    if (size_check(head1, head2)){
        cout << "NO" << endl;
    } else {
        same_to_same(head1, head2);
    }
    
    return 0;
}