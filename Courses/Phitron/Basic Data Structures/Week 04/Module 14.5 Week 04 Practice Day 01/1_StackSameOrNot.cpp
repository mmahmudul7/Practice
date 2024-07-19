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
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;

        void push(int val){
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
        }
        void pop(){
            sz--;
            Node *deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL){
                head = NULL;
            } else 
                tail->next = NULL;
            delete deleteNode;
        }
        int top(){
            return tail->val;
        }
        int size(){
            return sz;
        }
        bool empty(){
            if (sz == 0) return true;
            else return false;
        }
};

int main(){
    myStack st1;
    myStack st2;
    int n, m;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        st1.push(x);
    }
    cin >> m;
    while (m--){
        int x;
        cin >> x;
        st2.push(x);
    }
    
    if(st1.size() != st2.size())
        cout << "NO";
    else {
        bool flag = true;
        while (!st1.empty()){
            if(st1.top() != st2.top()){
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if(flag == true)
            cout << "YES";
        else
            cout << "NO";
    }
    
    return 0;
}