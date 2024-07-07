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

class myStack{
    public:
        Node* head = NULL;
        Node* tail = NULL; 
        int sz = 0;

        void push(int val){ // insert at tail
            sz++;
            Node *newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            newNode->prev = tail;
            tail->next = newNode;
            tail = tail->next;
            //tail->next = NULL;
        }
        void pop(){ // delete_at_tail
            sz--;
            Node *deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL){
                head == NULL;
            } else {
                tail->next = NULL;
            }
                
            delete deleteNode;
        }
        int top(){
            return tail->val;
        }
        int size(){
            return sz; // O(1) complexity
        }
        bool empty(){
            if(sz == 0) return true;
            else return false;
        }
};

int main(){
    myStack st;
    int n;
    cin >> n; // stack er size input neya hose

    while (n--){
        int x;
        cin >> x;

        st.push(x);
    }

    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}