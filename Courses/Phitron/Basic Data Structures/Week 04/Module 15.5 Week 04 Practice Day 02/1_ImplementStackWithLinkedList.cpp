/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Stack {
public:
    Node *tail = NULL;
    int sz = 0;

    Stack(){
        //Write your code here
    }

    int getSize() {
        return sz;
    }

    bool isEmpty() {
        if (sz == 0) return true;
        else return false;
    }

    void push(int data) {
        sz++;
        Node *newNode = new Node(data);
        newNode->next = tail;
        tail = newNode;
    }

    void pop() {
        if (sz == 0) return;
        sz--;
        Node *deleteNode = tail;
        tail = tail->next;
        delete deleteNode;
    }

    int getTop() {
        if (sz == 0) return -1;
        else return tail->data;
    }
};