#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        Node* prev;
        int val;
        Node* next;

        Node(int val){
            this->prev = NULL;
            this->val = val;
            this->next = NULL;
        }
};

class myQueue{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;
        void push(int val){ // insert at tail
            sz++; // sz++ opore rakhai safe zone, otherwise head null hole size er value increase hobe na
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
        void pop(){ // delete from head
            sz--;
            Node *deleteNode = head;
            head = head->next;
            if(head == NULL){
                tail = NULL;
                delete deleteNode;
                return;
            }
            head->prev = NULL;
            delete deleteNode;
        }
        int front(){
            return head->val;
        }
        int size(){
            return sz;
        }
        bool empty(){
            if(sz == 0)
                return true;
            else
                return false;
        }
};

int main(){
    myQueue q;
    int n;
    cin >> n;
    while (n--){
        int x;
        cin >> x;

        q.push(x);
    }
    cout << endl;
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    /*
    q.push(10);
    q.push(20);
    q.push(30);
    // q.pop();
    // q.pop();
    cout << q.front() << endl;
    cout << q.size();
    */
    return 0;
}