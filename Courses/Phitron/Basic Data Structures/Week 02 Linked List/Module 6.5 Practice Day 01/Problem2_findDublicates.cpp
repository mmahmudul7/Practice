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
bool find_duplicate(Node *head) {
    if (head == NULL)
        return false;

    int freq[101] = {0};
    Node *tmp = head;

    while (tmp != NULL) {
        if (freq[tmp->val] > 0) {
            return true; // Duplicate found
        }
        freq[tmp->val]++;
        tmp = tmp->next;
    }

    return false; // No duplicates found
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true){
        cin >> val;
        if(val == -1) break;
        
        insert_tail(head, tail, val);
    }

    if (find_duplicate(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}